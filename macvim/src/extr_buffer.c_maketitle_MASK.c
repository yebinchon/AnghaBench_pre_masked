
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char char_u ;
typedef int buf ;
struct TYPE_5__ {int b_p_ro; int * b_ffname; int * b_fname; int b_p_ma; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 void* VAR_11 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int,void*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*,int,scalar_t__*,int,int ,int,int *,int *) ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 () ;
 scalar_t__ VAR_15 ;
 int FUNC_11 (TYPE_1__*,int *,char*,int,void*) ;
 scalar_t__ FUNC_12 (char) ;
 int * VAR_16 ;
 int * VAR_17 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 void* VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__* VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__* VAR_23 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int * VAR_24 ;
 int FUNC_16 (char*,int,char*,int ,int ) ;
 int VAR_25 ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,int **) ;
 int FUNC_19 (char*,int) ;
 char* FUNC_20 (char*) ;
 int FUNC_21 (char*,char*,int,int) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*,int *,int) ;
 int FUNC_24 (char*,char*,size_t) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,int ) ;

void
FUNC_27()
{
    char_u *VAR_26;
    char_u *VAR_27 = ((void*)0);
    char_u *VAR_28;
    char_u *VAR_29 = ((void*)0);
    int VAR_30 = 0;
    int VAR_31;
    int VAR_32;
    char_u VAR_33[VAR_2];
    int VAR_34;

    if (!FUNC_14())
    {

 VAR_18 = VAR_11;
 return;
    }





    VAR_18 = VAR_1;
    if (!VAR_21 && !VAR_19 && VAR_17 == ((void*)0) && VAR_16 == ((void*)0))
 return;

    if (VAR_21)
    {
 if (VAR_22 > 0)
 {
     VAR_30 = VAR_22 * VAR_0 / 100;
     if (VAR_30 < 10)
  VAR_30 = 10;
 }

 VAR_27 = VAR_33;
 if (*VAR_23 != VAR_3)
 {
  VAR_27 = VAR_23;
 }
 else
 {





     if (VAR_13->b_fname == ((void*)0))
  FUNC_24(VAR_33, (char_u *)FUNC_3("[No Name]"), (VAR_2 - 100));
     else
     {
  VAR_26 = FUNC_20(FUNC_8(VAR_13->b_fname));
  FUNC_24(VAR_33, VAR_26, (VAR_2 - 100));
  FUNC_22(VAR_26);
     }

     switch (FUNC_5(VAR_13)
      + (VAR_13->b_p_ro * 2)
      + (!VAR_13->b_p_ma * 4))
     {
  case 1: FUNC_0(VAR_33, " +"); break;
  case 2: FUNC_0(VAR_33, " ="); break;
  case 3: FUNC_0(VAR_33, " =+"); break;
  case 4:
  case 6: FUNC_0(VAR_33, " -"); break;
  case 5:
  case 7: FUNC_0(VAR_33, " -+"); break;
     }

     if (VAR_13->b_fname != ((void*)0))
     {

  VAR_34 = (int)FUNC_2(VAR_33);
  VAR_33[VAR_34++] = ' ';
  VAR_33[VAR_34++] = '(';
  FUNC_11(VAR_13, VAR_13->b_ffname,
     VAR_33 + VAR_34, (VAR_2 - 20) - VAR_34, VAR_11);






  VAR_26 = FUNC_9(VAR_33 + VAR_34);
  if (VAR_26 == VAR_33 + VAR_34)

      FUNC_24(VAR_33 + VAR_34, (char_u *)FUNC_3("help"),
        (size_t)((VAR_2 - 20) - VAR_34 - 1));
  else
      *VAR_26 = VAR_3;




  if (VAR_34 < (VAR_2 - 20))
  {
      VAR_26 = FUNC_20(VAR_33 + VAR_34);
      FUNC_24(VAR_33 + VAR_34, VAR_26, (size_t)((VAR_2 - 20) - VAR_34));
      FUNC_22(VAR_26);
  }
  else
  {
      FUNC_24(VAR_33 + VAR_34, (char_u *)"...",
          (size_t)((VAR_2 - 10) - VAR_34));
  }
  FUNC_0(VAR_33, ")");
     }


     FUNC_4(VAR_14, VAR_33, (VAR_2 - 10), VAR_1);
  FUNC_0(VAR_33, " - VIM");

     if (VAR_30 > 0)
     {

  if (FUNC_25(VAR_33) > VAR_30)
      FUNC_21(VAR_33, VAR_33, VAR_30, VAR_2);
     }
 }
    }
    VAR_32 = FUNC_18(VAR_27, &VAR_17);

    if (VAR_19)
    {
 VAR_29 = VAR_33;
 if (*VAR_20 != VAR_3)
 {
  VAR_29 = VAR_20;
 }
 else
 {
     if (FUNC_6(VAR_13) != ((void*)0))
  VAR_28 = FUNC_6(VAR_13);
     else
  VAR_28 = FUNC_8(VAR_13->b_ffname);
     *VAR_29 = VAR_3;

     VAR_31 = (int)FUNC_2(VAR_28);
     if (VAR_31 > 100)
     {
  VAR_31 -= 100;




  VAR_28 += VAR_31;
     }
     FUNC_1(VAR_29, VAR_28);
     FUNC_19(VAR_29, VAR_2);
 }
    }

    VAR_32 |= FUNC_18(VAR_29, &VAR_16);

    if (VAR_32)
 FUNC_15();
}
