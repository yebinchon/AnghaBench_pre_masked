
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ last_var; scalar_t__ T; } ;
typedef TYPE_1__ zend_op_array ;
typedef int zend_bitset ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__ const*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(const zend_op_array *VAR_2, const char *VAR_3, zend_bitset VAR_4)
{
 int VAR_5 = 1;
 uint32_t VAR_6;

 FUNC_0(VAR_1, "    ; %s = {", VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_2->last_var + VAR_2->T; VAR_6++) {
  if (FUNC_1(VAR_4, VAR_6)) {
   if (VAR_5) {
    VAR_5 = 0;
   } else {
    FUNC_0(VAR_1, ", ");
   }
   FUNC_2(VAR_2, VAR_0, VAR_6);
  }
 }
 FUNC_0(VAR_1, "}\n");
}
