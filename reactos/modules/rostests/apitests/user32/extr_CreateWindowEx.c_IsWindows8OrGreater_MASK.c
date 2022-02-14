
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int osvi ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {int member_0; int dwMinorVersion; int dwMajorVersion; int member_7; int member_6; TYPE_1__ member_5; int member_4; int member_3; int member_2; int member_1; } ;
typedef TYPE_2__ OSVERSIONINFOEXW ;
typedef int DWORDLONG ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,int const) ;
 int VAR_5 ;

__attribute__((used)) static BOOL
FUNC_4()
{
    OSVERSIONINFOEXW VAR_6 = { sizeof(VAR_6), 0, 0, 0, 0, {0}, 0, 0 };
    DWORDLONG const VAR_7 = FUNC_2(FUNC_2(
        FUNC_2(0, VAR_2, VAR_1),
            VAR_3, VAR_1),
            VAR_4, VAR_1);

    VAR_6.dwMajorVersion = FUNC_0(VAR_5);
    VAR_6.dwMinorVersion = FUNC_1(VAR_5);

    return FUNC_3(&VAR_6, VAR_2 | VAR_3 | VAR_4, VAR_7) != VAR_0;
}
