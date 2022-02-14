
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int omap_entries; } ;
typedef TYPE_1__ SOmapStream ;
typedef int SOmapEntry ;
typedef int RListIter ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

void FUNC_5(void *VAR_0) {
 SOmapStream *VAR_1 = (SOmapStream *) VAR_0;
 SOmapEntry *VAR_2 = ((void*)0);
 RListIter *VAR_3 = FUNC_4 (VAR_1->omap_entries);
 while (FUNC_3 (VAR_3)) {
  VAR_2 = (SOmapEntry *) FUNC_2 (VAR_3);
  FUNC_0 (VAR_2);
 }
 FUNC_1 (VAR_1->omap_entries);
}
