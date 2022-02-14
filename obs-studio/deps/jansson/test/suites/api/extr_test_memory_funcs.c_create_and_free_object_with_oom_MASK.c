
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_5()
{
    int VAR_0;
    char VAR_1[4];
    json_t *VAR_2 = FUNC_2();

    for (VAR_0 = 0; VAR_0 < 10; VAR_0++)
    {
        FUNC_4(VAR_1, sizeof VAR_1, "%d", VAR_0);
        FUNC_3(VAR_2, VAR_1, FUNC_1(VAR_0));
    }

    FUNC_0(VAR_2);
}
