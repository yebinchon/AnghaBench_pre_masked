
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int data ;
struct TYPE_3__ {int member_0; int cbSize; } ;
typedef scalar_t__ BOOL ;
typedef TYPE_1__ ACTCTX_SECTION_KEYED_DATA ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int ,int *,int,int *,TYPE_1__*) ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_3(void)
{
    ACTCTX_SECTION_KEYED_DATA VAR_6 = {sizeof(VAR_6)};
    BOOL VAR_7;

    VAR_7 = FUNC_2(0, ((void*)0), 100, VAR_5, &VAR_6);
    FUNC_1(!VAR_7, "FindActCtxSectionStringW succeeded\n");
    FUNC_1(FUNC_0() == VAR_3, "GetLastError()=%u\n", FUNC_0());

    VAR_7 = FUNC_2(0, ((void*)0), VAR_0,
                                    VAR_4, &VAR_6);
    FUNC_1(!VAR_7, "FindActCtxSectionStringW succeeded\n");
    FUNC_1(FUNC_0() == VAR_2, "GetLastError()=%u\n", FUNC_0());

    VAR_7 = FUNC_2(0, ((void*)0), VAR_0,
                                    VAR_5, ((void*)0));
    FUNC_1(!VAR_7, "FindActCtxSectionStringW succeeded\n");
    FUNC_1(FUNC_0() == VAR_1, "GetLastError()=%u\n", FUNC_0());

    VAR_7 = FUNC_2(0, ((void*)0), VAR_0,
                                    ((void*)0), &VAR_6);
    FUNC_1(!VAR_7, "FindActCtxSectionStringW succeeded\n");
    FUNC_1(FUNC_0() == VAR_1, "GetLastError()=%u\n", FUNC_0());

    VAR_6.cbSize = 0;
    VAR_7 = FUNC_2(0, ((void*)0), VAR_0,
                                    VAR_5, &VAR_6);
    FUNC_1(!VAR_7, "FindActCtxSectionStringW succeeded\n");
    FUNC_1(FUNC_0() == VAR_1, "GetLastError()=%u\n", FUNC_0());

    VAR_6.cbSize = 35;
    VAR_7 = FUNC_2(0, ((void*)0), VAR_0,
                                    VAR_5, &VAR_6);
    FUNC_1(!VAR_7, "FindActCtxSectionStringW succeeded\n");
    FUNC_1(FUNC_0() == VAR_1, "GetLastError()=%u\n", FUNC_0());
}
