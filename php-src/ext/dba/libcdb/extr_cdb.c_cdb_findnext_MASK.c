
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
struct cdb {int loop; int hslots; int hpos; int khash; int kpos; int dlen; int dpos; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct cdb*,char*,unsigned int,int) ;
 int FUNC_2 (struct cdb*,char*,int,int) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(struct cdb *VAR_0, char *VAR_1, unsigned int VAR_2)
{
 char VAR_3[8];
 uint32 VAR_4;
 uint32 VAR_5;

 if (!VAR_0->loop) {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  if (FUNC_2(VAR_0, VAR_3, 8, (VAR_5 << 3) & 2047) == -1)
   return -1;
  FUNC_3(VAR_3 + 4,&VAR_0->hslots);
  if (!VAR_0->hslots)
   return 0;
  FUNC_3(VAR_3, &VAR_0->hpos);
  VAR_0->khash = VAR_5;
  VAR_5 >>= 8;
  VAR_5 %= VAR_0->hslots;
  VAR_5 <<= 3;
  VAR_0->kpos = VAR_0->hpos + VAR_5;
 }

 while (VAR_0->loop < VAR_0->hslots) {
  if (FUNC_2(VAR_0, VAR_3, 8, VAR_0->kpos) == -1)
   return -1;
  FUNC_3(VAR_3 + 4, &VAR_4);
  if (!VAR_4)
   return 0;
  VAR_0->loop += 1;
  VAR_0->kpos += 8;
  if (VAR_0->kpos == VAR_0->hpos + (VAR_0->hslots << 3))
   VAR_0->kpos = VAR_0->hpos;
  FUNC_3(VAR_3, &VAR_5);
  if (VAR_5 == VAR_0->khash) {
   if (FUNC_2(VAR_0, VAR_3, 8, VAR_4) == -1)
    return -1;
   FUNC_3(VAR_3, &VAR_5);
   if (VAR_5 == VAR_2)
   switch(FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4 + 8)) {
   case -1:
    return -1;
   case 1:
    FUNC_3(VAR_3 + 4, &VAR_0->dlen);
    VAR_0->dpos = VAR_4 + 8 + VAR_2;
    return 1;
   }
  }
 }

 return 0;
}
