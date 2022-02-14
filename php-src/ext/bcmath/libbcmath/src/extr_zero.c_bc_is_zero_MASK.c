
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_4__ {int n_len; int n_scale; char* n_value; } ;


 TYPE_1__* FUNC_0 (int ) ;
 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;

char
FUNC_1 (bc_num VAR_3)
{
  int VAR_4;
  char *VAR_5;


  if (VAR_3 == FUNC_0(VAR_2)) return VAR_1;


  VAR_4 = VAR_3->n_len + VAR_3->n_scale;
  VAR_5 = VAR_3->n_value;


  while ((VAR_4 > 0) && (*VAR_5++ == 0)) VAR_4--;

  if (VAR_4 != 0)
    return VAR_0;
  else
    return VAR_1;
}
