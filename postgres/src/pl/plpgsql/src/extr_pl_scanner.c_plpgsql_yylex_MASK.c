
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ident; int quoted; } ;
struct TYPE_8__ {void* keyword; TYPE_4__ word; int wdatum; int str; int cword; } ;
struct TYPE_7__ {int leng; scalar_t__ lloc; TYPE_3__ lval; } ;
typedef TYPE_1__ TokenAuxData ;
struct TYPE_10__ {scalar_t__ scanbuf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int,int *,TYPE_4__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int,TYPE_1__*) ;

int
FUNC_8(void)
{
 int VAR_13;
 TokenAuxData VAR_14;
 int VAR_15;

 VAR_13 = FUNC_3(&VAR_14);
 if (VAR_13 == VAR_1 || VAR_13 == VAR_2)
 {
  int VAR_16;
  TokenAuxData VAR_17;

  VAR_16 = FUNC_3(&VAR_17);
  if (VAR_16 == '.')
  {
   int VAR_18;
   TokenAuxData VAR_19;

   VAR_18 = FUNC_3(&VAR_19);
   if (VAR_18 == VAR_1)
   {
    int VAR_20;
    TokenAuxData VAR_21;

    VAR_20 = FUNC_3(&VAR_21);
    if (VAR_20 == '.')
    {
     int VAR_22;
     TokenAuxData VAR_23;

     VAR_22 = FUNC_3(&VAR_23);
     if (VAR_22 == VAR_1)
     {
      if (FUNC_5(VAR_14,
               VAR_19,
               VAR_23,
               &VAR_14,
               &VAR_14))
       VAR_13 = VAR_4;
      else
       VAR_13 = VAR_3;
     }
     else
     {

      FUNC_7(VAR_22, &VAR_23);
      FUNC_7(VAR_20, &VAR_21);
      if (FUNC_4(VAR_14,
              VAR_19,
              &VAR_14,
              &VAR_14))
       VAR_13 = VAR_4;
      else
       VAR_13 = VAR_3;
     }
    }
    else
    {

     FUNC_7(VAR_20, &VAR_21);
     if (FUNC_4(VAR_14,
             VAR_19,
             &VAR_14,
             &VAR_14))
      VAR_13 = VAR_4;
     else
      VAR_13 = VAR_3;
    }
   }
   else
   {

    FUNC_7(VAR_18, &VAR_19);
    FUNC_7(VAR_16, &VAR_17);
    if (FUNC_6(VAR_14,
            VAR_8.scanbuf + VAR_14,
            1,
            &VAR_14,
            &VAR_14))
     VAR_13 = VAR_4;
    else if (!VAR_14 &&
       (VAR_15 = FUNC_2(VAR_14,
             &VAR_7)) >= 0)
    {
     VAR_14 = FUNC_1(VAR_15,
                &VAR_7);
     VAR_13 = VAR_6[VAR_15];
    }
    else
     VAR_13 = VAR_5;
   }
  }
  else
  {

   FUNC_7(VAR_16, &VAR_17);
   if (FUNC_6(VAR_14,
           VAR_8.scanbuf + VAR_14,
           (!FUNC_0(VAR_12) ||
         (VAR_16 == '=' || VAR_16 == VAR_0 ||
          VAR_16 == '[')),
           &VAR_14,
           &VAR_14))
    VAR_13 = VAR_4;
   else if (!VAR_14 &&
      (VAR_15 = FUNC_2(VAR_14,
            &VAR_7)) >= 0)
   {
    VAR_14 = FUNC_1(VAR_15,
               &VAR_7);
    VAR_13 = VAR_6[VAR_15];
   }
   else
    VAR_13 = VAR_5;
  }
 }
 else
 {
 }

 VAR_11 = VAR_14;
 VAR_10 = VAR_14;
 VAR_9 = VAR_14;
 VAR_12 = VAR_13;
 return VAR_13;
}
