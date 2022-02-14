
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int omap_entries; scalar_t__ froms; } ;
typedef TYPE_1__ SOmapStream ;
typedef char SOmapEntry ;
typedef int R_STREAM_FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int,int*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int*) ;

void FUNC_7(void *VAR_0, R_STREAM_FILE *VAR_1) {
 int VAR_2;
 char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 int VAR_5 = 0, VAR_6 = 0;
 SOmapEntry *VAR_7 = 0;
 SOmapStream *VAR_8 = 0;

 FUNC_6 (VAR_1, &VAR_2);
 VAR_3 = (char *) FUNC_1 (VAR_2);
 if (!VAR_3) {
  return;
 }
 FUNC_5 (VAR_1, VAR_3);

 VAR_8 = (SOmapStream *) VAR_0;
 VAR_8->froms = 0;
 VAR_8->omap_entries = FUNC_4 ();
 VAR_4 = VAR_3;
 while (VAR_6 < VAR_2) {
  VAR_7 = (SOmapEntry *) FUNC_1 (sizeof(SOmapEntry));
  if (!VAR_7) {
   break;
  }
  VAR_5 = FUNC_2 (VAR_4, VAR_2, &VAR_6, VAR_7);
  if (!VAR_5) {
   FUNC_0 (VAR_7);
   break;
  }
  VAR_4 += VAR_5;
  FUNC_3 (VAR_8->omap_entries, VAR_7);
 }

 FUNC_0 (VAR_3);
}
