
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* key; void* data; } ;
typedef TYPE_1__ ckhc_t ;
struct TYPE_7__ {size_t count; } ;
typedef TYPE_2__ ckh_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,void const**,void const**) ;

__attribute__((used)) static bool
FUNC_1(ckh_t *VAR_0, ckhc_t *VAR_1) {
 size_t VAR_2, VAR_3, VAR_4;
 const void *VAR_5, *VAR_6;

 VAR_2 = VAR_0->count;
 VAR_0->count = 0;
 for (VAR_3 = VAR_4 = 0; VAR_4 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3].key != ((void*)0)) {
   VAR_5 = VAR_1[VAR_3].key;
   VAR_6 = VAR_1[VAR_3].data;
   if (FUNC_0(VAR_0, &VAR_5, &VAR_6)) {
    VAR_0->count = VAR_2;
    return 1;
   }
   VAR_4++;
  }
 }

 return 0;
}
