
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_20__ {scalar_t__ n_scale; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int ) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__**) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int) ;

int
FUNC_8 (bc_num VAR_0, bc_num VAR_1, bc_num *VAR_2, bc_num *VAR_3, int VAR_4)
{
  bc_num VAR_5 = ((void*)0);
  bc_num VAR_6;
  int VAR_7;


  if (FUNC_5 (VAR_1)) return -1;


  VAR_7 = FUNC_0 (VAR_0->n_scale, VAR_1->n_scale+VAR_4);
  FUNC_4(&VAR_6);


  FUNC_2 (VAR_0, VAR_1, &VAR_6, 0);
  if (VAR_2)
    VAR_5 = FUNC_1 (VAR_6);
  FUNC_6 (VAR_6, VAR_1, &VAR_6, VAR_7);
  FUNC_7 (VAR_0, VAR_6, VAR_3, VAR_7);
  FUNC_3 (&VAR_6);

  if (VAR_2)
    {
      FUNC_3 (VAR_2);
      *VAR_2 = VAR_5;
    }

  return 0;
}
