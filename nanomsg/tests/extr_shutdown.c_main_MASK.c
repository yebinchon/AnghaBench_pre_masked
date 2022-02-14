
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*,char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7 (int VAR_2, const char *VAR_3[])
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    char VAR_7[128];

    FUNC_3(VAR_7, "tcp", "127.0.0.1",
            FUNC_1(VAR_2, VAR_3));


    VAR_4 = FUNC_6 (VAR_0, VAR_1);
    VAR_6 = FUNC_5 (VAR_4, VAR_7);
    VAR_5 = FUNC_2 (VAR_4, VAR_6);
    FUNC_0 (VAR_5 == 0);
    FUNC_4 (VAR_4);

    return 0;
}
