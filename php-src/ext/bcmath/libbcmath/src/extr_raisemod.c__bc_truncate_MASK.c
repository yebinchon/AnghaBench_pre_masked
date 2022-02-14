
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_5__ {int n_len; int n_value; int n_sign; } ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (bc_num *VAR_0)
{
  bc_num VAR_1;

  VAR_1 = FUNC_1 ((*VAR_0)->n_len, 0);
  VAR_1->n_sign = (*VAR_0)->n_sign;
  FUNC_2 (VAR_1->n_value, (*VAR_0)->n_value, (*VAR_0)->n_len);
  FUNC_0 (VAR_0);
  *VAR_0 = VAR_1;
}
