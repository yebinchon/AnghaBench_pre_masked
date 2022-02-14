
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int (* func ) (int,int **) ;scalar_t__ name; } ;
typedef TYPE_1__* PCOMMAND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int *,scalar_t__) ;
 TYPE_1__* VAR_6 ;
 int * VAR_7 ;
 int FUNC_10 (int,int **) ;
 int FUNC_11 (int *,char*) ;

int FUNC_12(int VAR_8, WCHAR **VAR_9)
{
    WCHAR VAR_10[VAR_1];
    PCOMMAND VAR_11;
    int VAR_12 = 0;
    BOOL VAR_13 = VAR_0;


    FUNC_1();


    FUNC_5(VAR_10, FUNC_0(VAR_10));
    FUNC_11(VAR_10, L"\\netmsg.dll");

    VAR_7 = FUNC_6(VAR_10);
    if (VAR_7 == ((void*)0))
    {
        FUNC_2(VAR_3, L"Failed to load netmsg.dll\n");
        return 1;
    }

    if (VAR_8 < 2)
    {
        VAR_12 = 1;
        goto done;
    }


    for (VAR_11 = VAR_6; VAR_11->name; VAR_11++)
    {
        if (FUNC_9(VAR_9[1], VAR_11->name) == 0)
        {
            VAR_12 = VAR_11->func(VAR_8, VAR_9);
            VAR_13 = VAR_5;
            break;
        }
    }

done:
    if (VAR_13 == VAR_0)
    {
        FUNC_7(4381);
        FUNC_3(VAR_4, L"\n");
        FUNC_8(VAR_2);
    }

    if (VAR_7 != ((void*)0))
        FUNC_4(VAR_7);

    return VAR_12;
}
