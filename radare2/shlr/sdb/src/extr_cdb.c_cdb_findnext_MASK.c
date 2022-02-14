
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct cdb {int fd; int hslots; int loop; int hpos; int size; int khash; int kpos; int dpos; int dlen; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct cdb*,int*,int *,int) ;
 int FUNC_1 (struct cdb*,char*,int const,int) ;
 int FUNC_2 (struct cdb*,char const*,int,int) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(struct cdb *VAR_1, ut32 VAR_2, const char *VAR_3, ut32 VAR_4) {
 char VAR_5[8];
 ut32 VAR_6;
 int VAR_7;
 VAR_4++;
 if (VAR_1->fd == -1) {
  return -1;
 }
 VAR_1->hslots = 0;
 if (!VAR_1->loop) {
  const int VAR_8 = ((VAR_2 + 1) & 0xFF) ? sizeof (VAR_5) : sizeof (VAR_5) / 2;
  if (!FUNC_1 (VAR_1, VAR_5, VAR_8, (VAR_2 << 2) & 1023)) {
   return -1;
  }

  FUNC_3 (VAR_5, &VAR_1->hpos);
  if (VAR_8 == sizeof (VAR_5)) {
   FUNC_3 (VAR_5 + 4, &VAR_6);
  } else {
   VAR_6 = VAR_1->size;
  }
  if (VAR_6 < VAR_1->hpos) {
   return -1;
  }
  VAR_1->hslots = (VAR_6 - VAR_1->hpos) / (2 * sizeof (ut32));
  if (!VAR_1->hslots) {
   return 0;
  }
  VAR_1->khash = VAR_2;
  VAR_2 = ((VAR_2 >> 8) % VAR_1->hslots) << 3;
  VAR_1->kpos = VAR_1->hpos + VAR_2;
 }
 while (VAR_1->loop < VAR_1->hslots) {
  if (!FUNC_1 (VAR_1, VAR_5, sizeof (VAR_5), VAR_1->kpos)) {
   return 0;
  }
  FUNC_3 (VAR_5 + 4, &VAR_6);
  if (!VAR_6) {
   return 0;
  }
  VAR_1->loop++;
  VAR_1->kpos += sizeof (VAR_5);
  if (VAR_1->kpos == VAR_1->hpos + (VAR_1->hslots << 3)) {
   VAR_1->kpos = VAR_1->hpos;
  }
  FUNC_3 (VAR_5, &VAR_2);
  if (VAR_2 == VAR_1->khash) {
   if (!FUNC_0 (VAR_1, &VAR_2, &VAR_1->dlen, VAR_6) || !VAR_2) {
    return -1;
   }
   if (VAR_2 == VAR_4) {
    if ((VAR_7 = FUNC_2 (VAR_1, VAR_3, VAR_4, VAR_6 + VAR_0)) == -1) {
     return 0;
    }
    if (VAR_7 == 1) {
     VAR_1->dpos = VAR_6 + VAR_0 + VAR_4;
     return 1;
    }
   }
  }
 }
 return 0;
}
