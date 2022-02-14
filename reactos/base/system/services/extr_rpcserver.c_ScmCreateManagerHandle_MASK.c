
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Tag; } ;
struct TYPE_5__ {int DatabaseName; TYPE_1__ Handle; } ;
typedef scalar_t__ SC_HANDLE ;
typedef TYPE_2__* PMANAGER_HANDLE ;
typedef int * LPWSTR ;
typedef int DWORD ;


 int FUNC_0 (char*,int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_5 ;
 TYPE_2__* FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static DWORD
FUNC_7(LPWSTR VAR_10,
                       SC_HANDLE *VAR_11)
{
    PMANAGER_HANDLE VAR_12;

    if (VAR_10 == ((void*)0))
        VAR_10 = VAR_8;

    if (FUNC_4(VAR_10, VAR_9) == 0)
    {
        FUNC_0("Database %S, does not exist\n", VAR_10);
        return VAR_1;
    }
    else if (FUNC_4(VAR_10, VAR_8) != 0)
    {
        FUNC_0("Invalid Database name %S.\n", VAR_10);
        return VAR_2;
    }

    VAR_12 = FUNC_3(FUNC_2(),
                    VAR_5,
                    FUNC_1(VAR_6, VAR_0[FUNC_6(VAR_10) + 1]));
    if (VAR_12 == ((void*)0))
        return VAR_3;

    VAR_12->Handle.Tag = VAR_7;

    FUNC_5(VAR_12->DatabaseName, VAR_10);

    *VAR_11 = (SC_HANDLE)VAR_12;

    return VAR_4;
}
