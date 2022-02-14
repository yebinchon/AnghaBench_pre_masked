
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_key; int is_first; } ;
typedef TYPE_1__ PJ ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(PJ *VAR_0) {
 FUNC_1 (VAR_0);
 if (!VAR_0->is_key) {
  if (!VAR_0->is_first) {
   FUNC_0 (VAR_0, ",");
  }
 }
 VAR_0->is_first = 0;
 VAR_0->is_key = 0;
}
