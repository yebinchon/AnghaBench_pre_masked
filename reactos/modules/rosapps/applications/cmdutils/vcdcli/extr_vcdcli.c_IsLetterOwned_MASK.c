
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_3__ {size_t Count; scalar_t__* Drives; } ;
typedef scalar_t__ HANDLE ;
typedef int Drives ;
typedef size_t DWORD ;
typedef TYPE_1__ DRIVES_LIST ;
typedef int BOOLEAN ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int *,int ,TYPE_1__*,int,size_t*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int VAR_4 ;

BOOLEAN
FUNC_6(WCHAR VAR_5)
{
    HANDLE VAR_6;
    BOOLEAN VAR_7;
    DRIVES_LIST VAR_8;
    DWORD VAR_9, VAR_10;


    VAR_6 = FUNC_3();
    if (VAR_6 == VAR_1)
    {
        FUNC_5(VAR_4, FUNC_4("Failed to open VCD: %x\n"), FUNC_2());
        return VAR_0;
    }


    VAR_7 = FUNC_1(VAR_6, VAR_2, ((void*)0), 0, &VAR_8, sizeof(VAR_8), &VAR_10, ((void*)0));
    if (!VAR_7)
    {
        FUNC_5(VAR_4, FUNC_4("Failed to enumerate drives: %x\n"), FUNC_2());
        FUNC_0(VAR_6);
        return VAR_0;
    }


    FUNC_0(VAR_6);


    for (VAR_9 = 0; VAR_9 < VAR_8.Count; ++VAR_9)
    {
        if (VAR_8.Drives[VAR_9] == VAR_5)
        {
            break;
        }
    }


    if (VAR_9 == VAR_8.Count)
    {
        FUNC_5(VAR_4, FUNC_4("%c is not a drive owned by VCD\n"), VAR_5);
        return VAR_0;
    }


    return VAR_3;
}
