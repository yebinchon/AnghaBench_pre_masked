
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* var_info; } ;
typedef TYPE_2__ zend_ssa ;
typedef int uint32_t ;
struct TYPE_4__ {int is_instanceof; scalar_t__ ce; int type; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(const zend_ssa *VAR_0, int VAR_1, uint32_t VAR_2)
{
 FUNC_0(
  VAR_0->var_info[VAR_1].type,
  VAR_0->var_info[VAR_1].ce,
  VAR_0->var_info[VAR_1].ce ?
   VAR_0->var_info[VAR_1].is_instanceof : 0,
  VAR_2);
}
