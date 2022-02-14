
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ lnum; int col; } ;
typedef TYPE_1__ pos_T ;
typedef scalar_t__ colnr_T ;
typedef char char_u ;
struct TYPE_13__ {scalar_t__ lnum; int col; } ;
struct TYPE_12__ {int w_p_list; TYPE_1__ w_cursor; } ;
struct TYPE_11__ {scalar_t__ b_p_ts; scalar_t__ b_p_sts; int b_p_et; } ;


 char VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_9__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,char*) ;
 int VAR_9 ;
 char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* VAR_16 ;
 TYPE_4__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_1__*,scalar_t__*,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,scalar_t__) ;
 int FUNC_13 () ;
 char* FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (TYPE_2__*,scalar_t__,int,char*,int) ;
 int FUNC_17 (TYPE_2__*,scalar_t__,int,long) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char) ;
 int * FUNC_23 (int ,int ) ;
 char* FUNC_24 (int ) ;

__attribute__((used)) static int
FUNC_25()
{
    int VAR_22;
    int VAR_23;
    int VAR_24;

    if (VAR_5 == VAR_6 && VAR_17->w_cursor.lnum == VAR_4.lnum)
 VAR_5 = FUNC_4();
    if (FUNC_3(VAR_10 + VAR_0))
 return VAR_3;

    VAR_22 = FUNC_8(0);
    if (!VAR_16->b_p_et
     && !(VAR_21 && VAR_22 && VAR_16->b_p_ts != FUNC_6(VAR_16))
     && FUNC_5() == 0)
 return VAR_11;

    if (FUNC_20() == VAR_2)
 return VAR_11;

    VAR_18 = VAR_3;





    FUNC_0((char_u *)"\t");

    if (VAR_21 && VAR_22)
 VAR_24 = (int)FUNC_6(VAR_16);
    else if (VAR_16->b_p_sts != 0)
 VAR_24 = (int)FUNC_5();
    else
 VAR_24 = (int)VAR_16->b_p_ts;
    VAR_24 -= FUNC_4() % VAR_24;






    FUNC_10(' ');
    while (--VAR_24 > 0)
    {





 {
     FUNC_11((char_u *)" ");
     if (VAR_9 & VAR_8)
  FUNC_19(VAR_7);
 }
    }




    if (!VAR_16->b_p_et && (FUNC_5() || (VAR_21 && VAR_22)))
    {
 char_u *VAR_25;




 pos_T VAR_26;
 pos_T *VAR_27;
 colnr_T VAR_28, VAR_29;
 int VAR_30 = -1;
 int VAR_31 = VAR_17->w_p_list;
 {
     VAR_25 = FUNC_14();
     VAR_27 = &VAR_17->w_cursor;
 }


 if (FUNC_23(VAR_20, VAR_1) == ((void*)0))
     VAR_17->w_p_list = VAR_3;


 VAR_26 = VAR_17->w_cursor;
 while (VAR_26.col > 0 && FUNC_22(VAR_25[-1]))
 {
     --VAR_26.col;
     --VAR_25;
 }


 if ((VAR_9 & VAR_8)
  && VAR_26.lnum == VAR_4.lnum
  && VAR_26.col < VAR_4.col)
 {
     VAR_25 += VAR_4.col - VAR_26.col;
     VAR_26.col = VAR_4.col;
 }


 FUNC_7(VAR_17, &VAR_26, &VAR_29, ((void*)0), ((void*)0));
 FUNC_7(VAR_17, VAR_27, &VAR_28, ((void*)0), ((void*)0));



 while (FUNC_22(*VAR_25))
 {
     VAR_23 = FUNC_12(((void*)0), (char_u *)"\t", VAR_29);
     if (VAR_29 + VAR_23 > VAR_28)
  break;
     if (*VAR_25 != VAR_10)
     {
  *VAR_25 = VAR_10;
  if (VAR_30 < 0)
  {
      VAR_30 = VAR_26.col;

      if (VAR_26.lnum == VAR_4.lnum && VAR_26.col < VAR_4.col)
   VAR_4.col = VAR_26.col;
  }
     }
     ++VAR_26.col;
     ++VAR_25;
     VAR_29 += VAR_23;
 }

 if (VAR_30 >= 0)
 {
     int VAR_32 = 0;
     char_u *VAR_33 = VAR_25;


     while (VAR_29 < VAR_28 && *VAR_25 == ' ')
     {
  VAR_29 += FUNC_12(VAR_33, VAR_25, VAR_29);
  ++VAR_25;
  ++VAR_32;
     }
     if (VAR_29 > VAR_28)
     {

  --VAR_25;
  --VAR_32;
     }
     VAR_26.col += VAR_32;


     VAR_23 = VAR_27->col - VAR_26.col;
     if (VAR_23 > 0)
     {
  FUNC_1(VAR_25, VAR_25 + VAR_23);

  if ((VAR_9 & VAR_8)



   )
      for (VAR_24 = VAR_23; --VAR_24 >= 0; )
   FUNC_18(VAR_32);
     }
     VAR_27->col -= VAR_23;
 }





 VAR_17->w_p_list = VAR_31;
    }

    return VAR_3;
}
