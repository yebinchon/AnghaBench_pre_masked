
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_28__ {int n_scale; int* n_value; int n_len; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int) ;
 int FUNC_7 (TYPE_1__**) ;
 int FUNC_8 (TYPE_1__**) ;
 int FUNC_9 (TYPE_1__**,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int) ;
 TYPE_1__* FUNC_12 (int,int) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int ) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int) ;

int
FUNC_15 (bc_num *VAR_4, int VAR_5)
{
  int VAR_6, VAR_7, VAR_8;
  int VAR_9;
  bc_num VAR_10, VAR_11, VAR_12, VAR_13;


  VAR_7 = FUNC_4 (*VAR_4, FUNC_0(VAR_3));
  if (VAR_7 < 0)
    return 0;
  else
    {
      if (VAR_7 == 0)
 {
   FUNC_7 (VAR_4);
   *VAR_4 = FUNC_5 (FUNC_0(VAR_3));
   return 1;
 }
    }
  VAR_7 = FUNC_4 (*VAR_4, FUNC_0(VAR_2));
  if (VAR_7 == 0)
    {
      FUNC_7 (VAR_4);
      *VAR_4 = FUNC_5 (FUNC_0(VAR_2));
      return 1;
    }


  VAR_6 = FUNC_1 (VAR_5, (*VAR_4)->n_scale);
  FUNC_8(&VAR_10);
  FUNC_8(&VAR_11);
  FUNC_8(&VAR_13);
  VAR_12 = FUNC_12 (1,1);
  VAR_12->n_value[1] = 5;



  if (VAR_7 < 0)
    {

      VAR_10 = FUNC_5 (FUNC_0(VAR_2));
      VAR_9 = (*VAR_4)->n_scale;
    }
  else
    {

      FUNC_9 (&VAR_10,10);

      FUNC_9 (&VAR_11,(*VAR_4)->n_len);
      FUNC_11 (VAR_11, VAR_12, &VAR_11, 0);
      VAR_11->n_scale = 0;
      FUNC_13 (VAR_10, VAR_11, &VAR_10, 0);
      FUNC_7 (&VAR_11);
      VAR_9 = 3;
    }


  VAR_8 = VAR_0;
  while (!VAR_8)
    {
      FUNC_7 (&VAR_11);
      VAR_11 = FUNC_5 (VAR_10);
      FUNC_6 (*VAR_4, VAR_10, &VAR_10, VAR_9);
      FUNC_3 (VAR_10, VAR_11, &VAR_10, 0);
      FUNC_11 (VAR_10, VAR_12, &VAR_10, VAR_9);
      FUNC_14 (VAR_10, VAR_11, &VAR_13, VAR_9+1);
      if (FUNC_10 (VAR_13, VAR_9))
 {
   if (VAR_9 < VAR_6+1)
     VAR_9 = FUNC_2 (VAR_9*3, VAR_6+1);
   else
     VAR_8 = VAR_1;
 }
    }


  FUNC_7 (VAR_4);
  FUNC_6 (VAR_10,FUNC_0(VAR_2),VAR_4,VAR_6);
  FUNC_7 (&VAR_10);
  FUNC_7 (&VAR_11);
  FUNC_7 (&VAR_12);
  FUNC_7 (&VAR_13);
  return 1;
}
