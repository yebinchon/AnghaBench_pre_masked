
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_ulong ;
typedef scalar_t__ phpdbg_opline_ptr_t ;
struct TYPE_3__ {scalar_t__ base; } ;
typedef TYPE_1__ phpdbg_breakline_t ;
typedef int phpdbg_breakbase_t ;


 size_t VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int ) ;

__attribute__((used)) static inline phpdbg_breakbase_t *FUNC_2(phpdbg_opline_ptr_t VAR_2)
{
 phpdbg_breakline_t *VAR_3;

 if ((VAR_3 = FUNC_1(&FUNC_0(VAR_1)[VAR_0], (zend_ulong) VAR_2)) && VAR_3->base) {
  return (phpdbg_breakbase_t *)VAR_3->base;
 }

 return (phpdbg_breakbase_t *) VAR_3;
}
