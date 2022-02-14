
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int XtInputMask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int,int ,int,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *,long,int *,int ) ;
 int VAR_10 ;
 int * FUNC_6 (int ,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int*,int*) ;

void
FUNC_8()
{
    char_u VAR_12[64];
    int VAR_13 = VAR_0;
    int VAR_14, VAR_15;
    XtInputMask VAR_16;




    FUNC_1(VAR_12, VAR_9);
    if (FUNC_6(VAR_9, VAR_2) == ((void*)0))
    {
 FUNC_0(VAR_12, "m");
 VAR_13 = VAR_4;
    }
    if (FUNC_6(VAR_9, VAR_3) == ((void*)0))
    {
 FUNC_0(VAR_12, "T");
 VAR_13 = VAR_4;
    }
    if (FUNC_6(VAR_9, VAR_1) == ((void*)0))
    {
 FUNC_0(VAR_12, "F");
 VAR_13 = VAR_4;
    }
    if (VAR_13)
 FUNC_5((char_u *)"go", 0L, VAR_12, 0);




    VAR_14 = VAR_15 = 0;
    if (FUNC_7(&VAR_14, &VAR_15))
    {
 FUNC_4(VAR_10,
  VAR_6, VAR_14,
  VAR_5, VAR_15,
  ((void*)0));
    }




    while ((VAR_16 = FUNC_2(VAR_8))
     && (VAR_16 & VAR_7) && !VAR_11)
 FUNC_3(VAR_8, (XtInputMask)VAR_7);
}
