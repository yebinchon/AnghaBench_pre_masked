
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t lg_curbuckets; TYPE_1__* tab; } ;
typedef TYPE_2__ ckh_t ;
struct TYPE_4__ {scalar_t__ data; int * key; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int) ;

bool
FUNC_1(ckh_t *VAR_1, size_t *VAR_2, void **VAR_3, void **VAR_4) {
 size_t VAR_5, VAR_6;

 for (VAR_5 = *VAR_2, VAR_6 = (FUNC_0(1) << (VAR_1->lg_curbuckets +
     VAR_0)); VAR_5 < VAR_6; VAR_5++) {
  if (VAR_1->tab[VAR_5].key != ((void*)0)) {
   if (VAR_3 != ((void*)0)) {
    *VAR_3 = (void *)VAR_1->tab[VAR_5].key;
   }
   if (VAR_4 != ((void*)0)) {
    *VAR_4 = (void *)VAR_1->tab[VAR_5].data;
   }
   *VAR_2 = VAR_5 + 1;
   return 0;
  }
 }

 return 1;
}
