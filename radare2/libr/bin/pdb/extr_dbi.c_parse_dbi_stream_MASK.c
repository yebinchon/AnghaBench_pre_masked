
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int module_size; int seccon_size; int secmap_size; int filinf_size; int tsmap_size; int ecinfo_size; } ;
struct TYPE_3__ {int dbg_header; TYPE_2__ dbi_header; int dbiexhdrs; } ;
typedef TYPE_1__ SDbiStream ;
typedef int SDBIHeader ;
typedef int SDBIExHeader ;
typedef int R_STREAM_FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int,int) ;

void FUNC_9(void *VAR_1, R_STREAM_FILE *VAR_2) {
 SDbiStream *VAR_3 = (SDbiStream *) VAR_1;
 SDBIExHeader *VAR_4 = 0;
 int VAR_5 = 0;
 char *VAR_6 = 0, *VAR_7 = 0;
 int VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = 0;

 FUNC_4 (&VAR_3->dbi_header, VAR_2);
 VAR_5 += sizeof (SDBIHeader) - 2;

 FUNC_8 (VAR_2, VAR_5, 0);

 VAR_8 = VAR_3->dbi_header.module_size;
 VAR_6 = (char *) FUNC_1(VAR_8);
 if (!VAR_6) {
  return;
 }
 FUNC_7 (VAR_2, VAR_8, VAR_6);

 VAR_3->dbiexhdrs = FUNC_6 ();
 VAR_7 = VAR_6;
 while (VAR_10 < VAR_8) {
  VAR_4 = (SDBIExHeader *) FUNC_1 (sizeof(SDBIExHeader));
  if (!VAR_4) {
   break;
  }

  VAR_9 = FUNC_3 (VAR_7, VAR_8, VAR_4);
  if ((VAR_9 % VAR_0)) {
   VAR_9 = VAR_9 + (VAR_0 - (VAR_9 % VAR_0));
  }
  VAR_10 += VAR_9;
  VAR_7 += VAR_9;
  FUNC_5 (VAR_3->dbiexhdrs, VAR_4);
 }

 FUNC_0 (VAR_6);


 FUNC_8(VAR_2, VAR_3->dbi_header.seccon_size, 1);

 FUNC_8(VAR_2, VAR_3->dbi_header.secmap_size, 1);

 FUNC_8(VAR_2, VAR_3->dbi_header.filinf_size, 1);

 FUNC_8(VAR_2, VAR_3->dbi_header.tsmap_size, 1);

 FUNC_8(VAR_2, VAR_3->dbi_header.ecinfo_size, 1);

 FUNC_2(&VAR_3->dbg_header, VAR_2);
}
