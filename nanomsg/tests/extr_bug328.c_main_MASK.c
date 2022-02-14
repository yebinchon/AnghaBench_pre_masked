
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,char*,int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11 (int VAR_3, const char *VAR_4[])
{
    int VAR_5;
    int VAR_6;
    char VAR_7[128];

    FUNC_4(VAR_7, "tcp", "127.0.0.1",
            FUNC_0(VAR_3, VAR_4));

    VAR_5 = FUNC_10 (VAR_0, VAR_1);
    FUNC_5 (VAR_5, VAR_7);
    VAR_6 = FUNC_10 (VAR_0, VAR_1);
    FUNC_7 (VAR_6, VAR_7);

    FUNC_3(100);
    FUNC_9 (VAR_6, "ABC");
    FUNC_8 (VAR_5, "ABC");
    FUNC_1 (FUNC_2 (VAR_6, VAR_2) == 1);
    FUNC_6 (VAR_5);
    FUNC_3(300);
    FUNC_1 (FUNC_2 (VAR_6, VAR_2) == 0);
    FUNC_6 (VAR_6);

    return 0;
}
