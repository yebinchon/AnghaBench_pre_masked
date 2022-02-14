
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* WORD ;
typedef int VOID ;
struct TYPE_3__ {void* wMinute; void* wHour; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int PWSTR ;
typedef int INT ;


 int FUNC_0 (int ,int ,TYPE_1__*,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
VOID
FUNC_1(
    PWSTR VAR_2,
    INT VAR_3,
    WORD VAR_4,
    WORD VAR_5)
{
    SYSTEMTIME VAR_6 = {0, 0, 0, 0, 0, 0, 0, 0};

    VAR_6.wHour = VAR_4;
    VAR_6.wMinute = VAR_5;

    FUNC_0(VAR_0,
                  VAR_1,
                  &VAR_6,
                  ((void*)0),
                  VAR_2,
                  VAR_3);
}
