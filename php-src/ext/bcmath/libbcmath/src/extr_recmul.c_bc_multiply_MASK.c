
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_11__ {int n_len; int n_scale; scalar_t__ n_sign; int n_ptr; int n_value; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (TYPE_1__*,int,TYPE_1__*,int,TYPE_1__**,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void
FUNC_6 (bc_num VAR_2, bc_num VAR_3, bc_num *VAR_4, int VAR_5)
{
  bc_num VAR_6;
  int VAR_7, VAR_8;
  int VAR_9, VAR_10;


  VAR_7 = VAR_2->n_len + VAR_2->n_scale;
  VAR_8 = VAR_3->n_len + VAR_3->n_scale;
  VAR_9 = VAR_2->n_scale + VAR_3->n_scale;
  VAR_10 = FUNC_1(VAR_9,FUNC_0(VAR_5,FUNC_0(VAR_2->n_scale,VAR_3->n_scale)));


  FUNC_2 (VAR_2, VAR_7, VAR_3, VAR_8, &VAR_6, VAR_9);


  VAR_6->n_sign = ( VAR_2->n_sign == VAR_3->n_sign ? VAR_1 : VAR_0 );
  VAR_6->n_value = VAR_6->n_ptr;
  VAR_6->n_len = VAR_8 + VAR_7 + 1 - VAR_9;
  VAR_6->n_scale = VAR_10;
  FUNC_3 (VAR_6);
  if (FUNC_5 (VAR_6))
    VAR_6->n_sign = VAR_1;
  FUNC_4 (VAR_4);
  *VAR_4 = VAR_6;
}
