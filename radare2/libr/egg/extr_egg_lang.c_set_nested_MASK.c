
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * nested; } ;
struct TYPE_5__ {TYPE_1__ lang; } ;
typedef TYPE_2__ REgg ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(REgg *VAR_1, const char *VAR_2) {
 int VAR_3 = 0;
 if (VAR_0 < 1) {
  return;
 }
 FUNC_1 (VAR_1->lang.nested[VAR_0]);
 VAR_1->lang.nested[VAR_0] = FUNC_2 (VAR_2);



 for (VAR_3 = 1; VAR_3 < 10; VAR_3++) {

  FUNC_0 (VAR_1->lang.nested[VAR_0 + VAR_3]);
 }
}
