
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int HKEY ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static
BOOL
FUNC_6(HANDLE VAR_4)
{
    UNICODE_STRING VAR_5;
    HKEY VAR_6;

    FUNC_0("CheckForLoadedProfile() called\n");


    if (!FUNC_2(VAR_4, &VAR_5))
    {
        FUNC_1("GetUserSidStringFromToken() failed\n");
        return VAR_0;
    }

    if (FUNC_4(VAR_1,
                      VAR_5.Buffer,
                      0,
                      VAR_2,
                      &VAR_6))
    {
        FUNC_0("Profile not loaded\n");
        FUNC_5(&VAR_5);
        return VAR_0;
    }

    FUNC_3(VAR_6);

    FUNC_5(&VAR_5);

    FUNC_0("Profile already loaded\n");

    return VAR_3;
}
