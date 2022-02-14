
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 char VAR_0 ;
 int FUNC_2 (char*,int,char*,double) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3()
{
    char VAR_2[8];

    FUNC_2(VAR_2, sizeof(VAR_2), "%g", 0.5);



    if (VAR_2[0] != '0' || VAR_2[2] != '5' || VAR_2[3] != 0) {
        FUNC_1(VAR_1, "Error: wide characters found or printf() bug.");
        FUNC_0();
    }

    VAR_0 = VAR_2[1];
}
