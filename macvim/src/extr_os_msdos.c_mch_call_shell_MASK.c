
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_2 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (long) ;
 int FUNC_4 (char) ;
 int FUNC_5 () ;
 char* VAR_14 ;
 char* VAR_15 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,char*,char*,char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;

int
FUNC_14(
    char_u *VAR_16,
    int VAR_17)
{
    int VAR_18;
    int VAR_19 = VAR_12;

    char_u *VAR_20;


    FUNC_5();




    if (VAR_17 & VAR_1)
 FUNC_9(VAR_9);
    FUNC_6(VAR_0);
    if (VAR_16 == ((void*)0))
 VAR_18 = FUNC_12((char *)VAR_14);
    else
    {
 VAR_20 = FUNC_2(FUNC_1(VAR_14) + FUNC_1(VAR_15) + FUNC_1(VAR_16) + 3);
 if (VAR_20 == ((void*)0))
     VAR_18 = -1;
 else
 {
     FUNC_11((char *)VAR_20, "%s %s %s", VAR_14, VAR_15, VAR_16);
     VAR_18 = FUNC_12((char *)VAR_20);
     FUNC_13(VAR_20);
 }

    }






    if (VAR_19 == VAR_10)
 FUNC_9(VAR_10);
    FUNC_6(VAR_11);

    if (VAR_18 && !(VAR_17 & VAR_2) && !VAR_13)
    {
 FUNC_0("\nshell returned ");
 FUNC_3((long)VAR_18);
 FUNC_4('\n');
    }

    return VAR_18;
}
