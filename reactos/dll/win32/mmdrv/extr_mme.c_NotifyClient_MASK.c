
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int app_user_data; int mme_handle; int flags; int callback; } ;
typedef TYPE_1__ SessionInfo ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

BOOL
FUNC_2(
    SessionInfo* VAR_0,
    DWORD VAR_1,
    DWORD_PTR VAR_2,
    DWORD_PTR VAR_3)
{
    return FUNC_0(VAR_0->callback,
                          FUNC_1(VAR_0->flags),
                          VAR_0->mme_handle,
                          VAR_1,
                          VAR_0->app_user_data,
                          VAR_2,
                          VAR_3);
}
