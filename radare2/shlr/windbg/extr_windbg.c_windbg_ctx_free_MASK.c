
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_ptr; int tlist_cache; int plist_cache; } ;
typedef TYPE_1__ WindCtx ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(WindCtx **VAR_0) {
 if (!VAR_0 || !*VAR_0) {
  return;
 }
 FUNC_2 ((*VAR_0)->plist_cache);
 FUNC_2 ((*VAR_0)->tlist_cache);
 FUNC_1 ((*VAR_0)->io_ptr);
 FUNC_0 (*VAR_0);
}
