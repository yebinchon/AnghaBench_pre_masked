
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* type; } ;
typedef TYPE_1__ var_t ;
struct TYPE_8__ {int attrs; } ;
typedef TYPE_2__ type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_2 (TYPE_2__ const*) ;

int FUNC_3(const var_t *VAR_3)
{
  const type_t *VAR_4;




  for (VAR_4 = VAR_3->type; ; )
  {
    if (FUNC_0(VAR_4->attrs, VAR_0))
      return VAR_2;
    else if (FUNC_1(VAR_4))
      VAR_4 = FUNC_2(VAR_4);
    else break;
  }
  return VAR_1;
}
