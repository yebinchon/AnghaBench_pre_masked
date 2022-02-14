
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_27__ {scalar_t__ n_scale; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (TYPE_1__**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,TYPE_1__**,TYPE_1__**,int ) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (TYPE_1__**) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int) ;
 TYPE_1__* FUNC_12 (int,int) ;
 int FUNC_13 (int *,int ,char*) ;

int
FUNC_14 (bc_num VAR_3, bc_num VAR_4, bc_num VAR_5, bc_num *VAR_6, int VAR_7)
{
  bc_num VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
  int VAR_13;


  if (FUNC_9(VAR_5)) return -1;
  if (FUNC_8(VAR_4)) return -1;


  VAR_8 = FUNC_4 (VAR_3);
  VAR_9 = FUNC_4 (VAR_4);
  VAR_10 = FUNC_4 (VAR_5);
  VAR_12 = FUNC_4 (FUNC_0(VAR_1));
  FUNC_7(&VAR_11);


  if (VAR_8->n_scale != 0)
    {
      FUNC_13 (((void*)0), VAR_0, "non-zero scale in base");
      FUNC_2 (&VAR_8);
    }


  if (VAR_9->n_scale != 0)
    {
      FUNC_13 (((void*)0), VAR_0, "non-zero scale in exponent");
      FUNC_2 (&VAR_9);
    }


  if (VAR_10->n_scale != 0)
    {
      FUNC_13 (((void*)0), VAR_0, "non-zero scale in modulus");
      FUNC_2 (&VAR_10);
    }


  VAR_13 = FUNC_1(VAR_7, VAR_8->n_scale);
  if ( !FUNC_3(VAR_10, FUNC_0(VAR_1)) )
    {
      FUNC_6 (&VAR_12);
      VAR_12 = FUNC_12 (1, VAR_7);
    }
  else
    {
      while ( !FUNC_9(VAR_9) )
 {
   (void) FUNC_5 (VAR_9, FUNC_0(VAR_2), &VAR_9, &VAR_11, 0);
   if ( !FUNC_9(VAR_11) )
     {
       FUNC_11 (VAR_12, VAR_8, &VAR_12, VAR_13);
       (void) FUNC_10 (VAR_12, VAR_10, &VAR_12, VAR_7);
     }

   FUNC_11 (VAR_8, VAR_8, &VAR_8, VAR_13);
   (void) FUNC_10 (VAR_8, VAR_10, &VAR_8, VAR_7);
 }
    }


  FUNC_6 (&VAR_8);
  FUNC_6 (&VAR_9);
  FUNC_6 (&VAR_10);
  FUNC_6 (VAR_6);
  FUNC_6 (&VAR_11);
  *VAR_6 = VAR_12;
  return 0;
}
