
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
typedef void* WORD ;
typedef int ULONGLONG ;
struct TYPE_3__ {int member_0; void* dwMinorVersion; void* dwMajorVersion; } ;
typedef TYPE_1__ OSVERSIONINFOEXW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

__attribute__((used)) static BOOL FUNC_2(WORD VAR_3, WORD VAR_4)
{
    OSVERSIONINFOEXW VAR_5 = {sizeof(VAR_5)};
    ULONGLONG VAR_6 = 0;

    VAR_5.dwMajorVersion = VAR_3;
    VAR_5.dwMinorVersion = VAR_4;

    FUNC_0(VAR_6, VAR_1, VAR_0);
    FUNC_0(VAR_6, VAR_2, VAR_0);

    return FUNC_1(&VAR_5, VAR_1 | VAR_2, VAR_6);
}
