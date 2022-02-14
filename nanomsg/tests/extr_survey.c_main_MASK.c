
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int deadline ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*,int,int ) ;
 int FUNC_3 (int,int ,int ,int*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10 ()
{
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;
    char VAR_13 [7];


    VAR_8 = FUNC_9 (VAR_0, VAR_4);
    VAR_12 = 500;
    VAR_7 = FUNC_3 (VAR_8, VAR_4, VAR_5,
        &VAR_12, sizeof (VAR_12));
    FUNC_0 (VAR_7 == 0);
    FUNC_4 (VAR_8, VAR_6);
    VAR_9 = FUNC_9 (VAR_0, VAR_3);
    FUNC_6 (VAR_9, VAR_6);
    VAR_10 = FUNC_9 (VAR_0, VAR_3);
    FUNC_6 (VAR_10, VAR_6);
    VAR_11 = FUNC_9 (VAR_0, VAR_3);
    FUNC_6 (VAR_11, VAR_6);


    VAR_7 = FUNC_2 (VAR_8, VAR_13, sizeof (VAR_13), 0);
    FUNC_0 (VAR_7 == -1 && FUNC_1 () == VAR_1);


    FUNC_8 (VAR_8, "ABC");


    FUNC_7 (VAR_9, "ABC");
    FUNC_8 (VAR_9, "DEF");


    FUNC_7 (VAR_10, "ABC");
    FUNC_8 (VAR_10, "DEF");


    FUNC_7 (VAR_8, "DEF");
    FUNC_7 (VAR_8, "DEF");


    VAR_7 = FUNC_2 (VAR_8, VAR_13, sizeof (VAR_13), 0);
    FUNC_0 (VAR_7 == -1 && FUNC_1 () == VAR_2);


    FUNC_7 (VAR_11, "ABC");
    FUNC_8 (VAR_11, "GHI");


    FUNC_8 (VAR_8, "ABC");


    VAR_7 = FUNC_2 (VAR_8, VAR_13, sizeof (VAR_13), 0);
    FUNC_0 (VAR_7 == -1 && FUNC_1 () == VAR_2);


    VAR_7 = FUNC_2 (VAR_8, VAR_13, sizeof (VAR_13), 0);
    FUNC_0 (VAR_7 == -1 && FUNC_1 () == VAR_1);

    FUNC_5 (VAR_8);
    FUNC_5 (VAR_9);
    FUNC_5 (VAR_10);
    FUNC_5 (VAR_11);

    return 0;
}
