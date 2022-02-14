
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


struct TYPE_19__ {int col; int lnum; } ;
struct TYPE_20__ {int w_p_rl; TYPE_2__ w_cursor; void* w_p_fen; } ;
typedef TYPE_3__ win_T ;
struct cmdline_info {int cmdpos; int cmdlen; int cmdbufflen; int * cmdbuff; int * cmdprompt; } ;
typedef scalar_t__ linenr_T ;
typedef int garray_T ;
typedef int colnr_T ;
typedef scalar_t__ char_u ;
struct TYPE_18__ {int ml_line_count; } ;
struct TYPE_21__ {TYPE_1__ b_ml; scalar_t__ b_p_tw; int b_p_ma; } ;
typedef TYPE_4__ buf_T ;
struct TYPE_22__ {int * hisstr; } ;
struct TYPE_17__ {scalar_t__ tab; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (int ,scalar_t__*,scalar_t__*,void*,TYPE_4__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 struct cmdline_info VAR_25 ;
 int FUNC_10 () ;
 int FUNC_11 (int *,TYPE_4__*,int ,void*) ;
 scalar_t__ VAR_26 ;
 TYPE_12__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 TYPE_4__* VAR_31 ;
 TYPE_3__* VAR_32 ;
 int FUNC_12 (int ,int *,int *,int *,int ,int ,int *) ;
 int VAR_33 ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 () ;
 int* VAR_34 ;
 int VAR_35 ;
 int FUNC_15 (scalar_t__) ;
 TYPE_9__** VAR_36 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,void*) ;
 int FUNC_19 (int ,int *,int ,void*) ;
 scalar_t__* FUNC_20 () ;
 int FUNC_21 (int ,int *,int ) ;
 void* VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_22 (int ) ;
 int FUNC_23 () ;
 int VAR_40 ;
 int FUNC_24 () ;
 int FUNC_25 (scalar_t__*,long,scalar_t__*,int ) ;
 int FUNC_26 (TYPE_4__*,scalar_t__*,int *,int ) ;
 int FUNC_27 () ;
 int FUNC_28 (scalar_t__*) ;
 int FUNC_29 (char) ;
 int FUNC_30 () ;
 int FUNC_31 (int *) ;
 void* FUNC_32 (scalar_t__*) ;
 int FUNC_33 (TYPE_3__*,int ) ;
 int FUNC_34 (TYPE_3__*) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 scalar_t__ FUNC_37 (int,int ) ;
 int FUNC_38 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_39()
{
    struct cmdline_info VAR_41;
    buf_T *VAR_42 = VAR_31;
    win_T *VAR_43 = VAR_32;
    buf_T *VAR_44;
    win_T *VAR_45;
    int VAR_46;
    linenr_T VAR_47;
    int VAR_48;
    garray_T VAR_49;



    int VAR_50 = VAR_40;
    int VAR_51 = VAR_21;
    int VAR_52 = VAR_33;





    if (VAR_30 != 0



     )
    {
 FUNC_7();
 return VAR_12;
    }


    FUNC_36(&VAR_49);






    VAR_27.tab = 0;


    if (FUNC_37((int)VAR_38, VAR_24) == VAR_7)
    {
 FUNC_7();



 return VAR_12;
    }
    VAR_30 = FUNC_14();


    (void)FUNC_12(0, ((void*)0), ((void*)0), ((void*)0), VAR_4, VAR_3, ((void*)0));
    (void)FUNC_26(VAR_31, (char_u *)"[Command Line]", ((void*)0), VAR_23);
    FUNC_25((char_u *)"bt", 0L, (char_u *)"nofile", VAR_18);
    FUNC_25((char_u *)"swf", 0L, ((void*)0), VAR_18);
    VAR_31->b_p_ma = VAR_23;







    FUNC_1(VAR_32);







    VAR_37 = VAR_8;

    VAR_48 = FUNC_15(VAR_30);
    if (VAR_48 == VAR_9 || VAR_48 == VAR_10)
    {
 if (VAR_39 == VAR_22)
 {
     FUNC_5((char_u *)"<buffer> <Tab> <C-X><C-V>", VAR_11);
     FUNC_5((char_u *)"<buffer> <Tab> a<C-X><C-V>", VAR_16);
 }
 FUNC_25((char_u *)"ft", 0L, (char_u *)"vim", VAR_18);
    }



    VAR_31->b_p_tw = 0;


    FUNC_16();
    if (VAR_35 > 0)
    {
 VAR_46 = VAR_34[VAR_48];
 if (VAR_46 >= 0)
 {
     VAR_47 = 0;
     do
     {
  if (++VAR_46 == VAR_35)
      VAR_46 = 0;
  if (VAR_36[VAR_48][VAR_46].hisstr != ((void*)0))
      FUNC_19(VAR_47++, VAR_36[VAR_48][VAR_46].hisstr,
          (colnr_T)0, VAR_8);
     }
     while (VAR_46 != VAR_34[VAR_48]);
 }
    }



    FUNC_21(VAR_31->b_ml.ml_line_count, VAR_25.cmdbuff, VAR_23);
    VAR_32->w_cursor.lnum = VAR_31->b_ml.ml_line_count;
    VAR_32->w_cursor.col = VAR_25.cmdpos;
    FUNC_10();
    FUNC_17();
    FUNC_22(VAR_20);


    VAR_41 = VAR_25;
    VAR_25.cmdbuff = ((void*)0);
    VAR_25.cmdprompt = ((void*)0);


    VAR_33 = 0;

    VAR_21 = VAR_16;
    VAR_46 = VAR_19;
    VAR_19 = 0;




    VAR_29 = 0;
    FUNC_18(VAR_23, VAR_8);

    VAR_19 = VAR_46;







    VAR_25 = VAR_41;
    VAR_30 = 0;

    VAR_33 = VAR_52;



    if (!FUNC_38(VAR_43) || !FUNC_9(VAR_42))
    {
 VAR_29 = VAR_1;
 FUNC_0(FUNC_3("E199: Active window or buffer deleted"));
    }
    else
    {






 FUNC_31(VAR_25.cmdbuff);
 if (VAR_29 == VAR_14 || VAR_29 == VAR_15)
 {
     char *VAR_53 = (VAR_29 == VAR_15) ? "qa" : "qa!";

     if (VAR_48 == VAR_9)
     {

  VAR_25.cmdbuff = FUNC_32((char_u *)VAR_53);
  VAR_29 = VAR_0;
     }
     else
     {

  VAR_25.cmdbuff = ((void*)0);
  FUNC_29(':');
  FUNC_28((char_u *)VAR_53);
  FUNC_29(VAR_0);
     }
 }
 else if (VAR_29 == VAR_15)
 {
     VAR_25.cmdbuff = FUNC_32((char_u *)"qa");
     VAR_29 = VAR_0;
 }
 else if (VAR_29 == VAR_1)
 {


     VAR_25.cmdbuff = ((void*)0);
 }
 else
     VAR_25.cmdbuff = FUNC_32(FUNC_20());
 if (VAR_25.cmdbuff == ((void*)0))
     VAR_29 = VAR_1;
 else
 {
     VAR_25.cmdlen = (int)FUNC_2(VAR_25.cmdbuff);
     VAR_25.cmdbufflen = VAR_25.cmdlen + 1;
     VAR_25.cmdpos = VAR_32->w_cursor.col;
     if (VAR_25.cmdpos > VAR_25.cmdlen)
  VAR_25.cmdpos = VAR_25.cmdlen;
     if (VAR_29 == VAR_12)
     {
  FUNC_24();
  FUNC_23();
     }
 }





 VAR_45 = VAR_32;
 VAR_44 = VAR_31;
 FUNC_34(VAR_43);
 FUNC_33(VAR_45, VAR_23);



 if (FUNC_9(VAR_44))
     FUNC_11(((void*)0), VAR_44, VAR_2, VAR_8);


 FUNC_35(&VAR_49);




    }

    FUNC_13(&VAR_49);
    VAR_40 = VAR_50;




    VAR_21 = VAR_51;




    return VAR_29;
}
