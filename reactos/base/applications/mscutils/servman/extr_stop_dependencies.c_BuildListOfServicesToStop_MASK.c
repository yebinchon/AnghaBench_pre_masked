
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dwCurrentState; } ;
struct TYPE_6__ {int lpServiceName; TYPE_1__ ServiceStatus; } ;
typedef int LPWSTR ;
typedef TYPE_2__* LPENUM_SERVICE_STATUS ;
typedef size_t DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (int ,size_t*) ;

__attribute__((used)) static BOOL
FUNC_4(LPWSTR *VAR_4,
                          LPWSTR VAR_5)
{
    LPENUM_SERVICE_STATUS VAR_6;
    DWORD VAR_7, VAR_8;
    BOOL VAR_9 = VAR_0;


    VAR_6 = FUNC_3(VAR_5, &VAR_7);
    if (VAR_6)
    {
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        {

            if (VAR_6[VAR_8].ServiceStatus.dwCurrentState != VAR_1 &&
                VAR_6[VAR_8].ServiceStatus.dwCurrentState != VAR_2)
            {

                *VAR_4 = FUNC_0(VAR_4, VAR_6[VAR_8].lpServiceName);


                VAR_9 = VAR_3;
            }
        }

        FUNC_2(FUNC_1(),
                 0,
                 VAR_6);
    }

    return VAR_9;
}
