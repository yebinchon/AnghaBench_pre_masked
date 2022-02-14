
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sfi ;
typedef int UINT ;
struct TYPE_4__ {scalar_t__ scripts; int* wszFont; } ;
typedef TYPE_1__ SCRIPTFONTINFO ;
typedef int IMLangFontLink2 ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,int ,int*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(IMLangFontLink2 *VAR_4)
{
    HRESULT VAR_5;
    UINT VAR_6;
    SCRIPTFONTINFO VAR_7[1];

    VAR_6 = 0;
    VAR_5 = FUNC_1(VAR_4, VAR_3, 0, &VAR_6, ((void*)0));
    FUNC_3(VAR_5 == VAR_2, "GetScriptFontInfo failed %u\n", FUNC_0());
    FUNC_3(VAR_6, "unexpected result\n");

    VAR_6 = 0;
    VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_0, &VAR_6, ((void*)0));
    FUNC_3(VAR_5 == VAR_2, "GetScriptFontInfo failed %u\n", FUNC_0());
    FUNC_3(VAR_6, "unexpected result\n");

    VAR_6 = 0;
    VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_1, &VAR_6, ((void*)0));
    FUNC_3(VAR_5 == VAR_2, "GetScriptFontInfo failed %u\n", FUNC_0());
    FUNC_3(VAR_6, "unexpected result\n");

    VAR_6 = 1;
    FUNC_2(VAR_7, 0, sizeof(VAR_7));
    VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_0, &VAR_6, VAR_7);
    FUNC_3(VAR_5 == VAR_2, "GetScriptFontInfo failed %u\n", FUNC_0());
    FUNC_3(VAR_6 == 1, "got %u, expected 1\n", VAR_6);
    FUNC_3(VAR_7[0].scripts != 0, "unexpected result\n");
    FUNC_3(VAR_7[0].wszFont[0], "unexpected result\n");

    VAR_6 = 1;
    FUNC_2(VAR_7, 0, sizeof(VAR_7));
    VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_1, &VAR_6, VAR_7);
    FUNC_3(VAR_5 == VAR_2, "GetScriptFontInfo failed %u\n", FUNC_0());
    FUNC_3(VAR_6 == 1, "got %u, expected 1\n", VAR_6);
    FUNC_3(VAR_7[0].scripts != 0, "unexpected result\n");
    FUNC_3(VAR_7[0].wszFont[0], "unexpected result\n");
}
