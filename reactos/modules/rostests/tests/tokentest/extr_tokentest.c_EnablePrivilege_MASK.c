
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int member_1; int member_0; } ;
struct TYPE_8__ {int member_1; TYPE_3__ member_0; } ;
struct TYPE_7__ {TYPE_2__ member_0; } ;
struct TYPE_11__ {int member_0; TYPE_4__* Privileges; TYPE_1__ member_1; } ;
struct TYPE_10__ {int Luid; } ;
typedef TYPE_5__ TOKEN_PRIVILEGES ;
typedef int LPWSTR ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,TYPE_5__*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

BOOL
FUNC_6(LPWSTR VAR_4)
{
    HANDLE VAR_5;
    TOKEN_PRIVILEGES VAR_6 = {1, {{{0, 0}, VAR_2}}};
 BOOL VAR_7;

    FUNC_4(0, VAR_4, &VAR_6.Privileges[0].Luid);

    FUNC_5(FUNC_2(), VAR_3, &VAR_5);

    FUNC_0(VAR_5, VAR_1, &VAR_6, sizeof VAR_6, 0, 0);
    VAR_7 = FUNC_3() == VAR_0;

    FUNC_1(VAR_5);
    return VAR_7;
}
