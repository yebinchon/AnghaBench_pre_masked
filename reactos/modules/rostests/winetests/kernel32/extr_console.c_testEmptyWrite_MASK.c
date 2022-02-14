
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ X; scalar_t__ Y; } ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ COORD ;


 scalar_t__ FUNC_0 (int ,TYPE_1__) ;
 scalar_t__ FUNC_1 (int ,char const*,int,int*,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,TYPE_1__) ;

__attribute__((used)) static void FUNC_4(HANDLE VAR_0)
{
    static const char VAR_1[16];
    COORD VAR_2;
    DWORD VAR_3;

    VAR_2.X = VAR_2.Y = 0;
    FUNC_2(FUNC_0(VAR_0, VAR_2) != 0, "Cursor in upper-left\n");

    VAR_3 = -1;
    FUNC_2(FUNC_1(VAR_0, ((void*)0), 0, &VAR_3, ((void*)0)) != 0 && VAR_3 == 0, "WriteConsole\n");
    FUNC_3(VAR_0, VAR_2);




    if (0)
    {
        VAR_3 = -1;
        FUNC_2(!FUNC_1(VAR_0, ((void*)0), 16, &VAR_3, ((void*)0)) && VAR_3 == -1, "WriteConsole\n");
        FUNC_3(VAR_0, VAR_2);


        VAR_3 = -1;
        FUNC_2(FUNC_1(VAR_0, ((void*)0), 128, &VAR_3, ((void*)0)) != 0 && VAR_3 == 128, "WriteConsole\n");
    }

    VAR_3 = -1;
    FUNC_2(FUNC_1(VAR_0, VAR_1, 0, &VAR_3, ((void*)0)) != 0 && VAR_3 == 0, "WriteConsole\n");
    FUNC_3(VAR_0, VAR_2);



    VAR_3 = -1;
    FUNC_2(FUNC_1(VAR_0, VAR_1, 16, &VAR_3, ((void*)0)) != 0 && VAR_3 == 16, "WriteConsole\n");
    VAR_2.X += 16;
    FUNC_3(VAR_0, VAR_2);
}
