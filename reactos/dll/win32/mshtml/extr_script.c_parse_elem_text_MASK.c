
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int excepinfo ;
typedef int VARIANT ;
struct TYPE_3__ {int parse; } ;
typedef TYPE_1__ ScriptHost ;
typedef int LPCWSTR ;
typedef int HTMLScriptElement ;
typedef int HRESULT ;
typedef int EXCEPINFO ;


 int FUNC_0 (int ,int ,int ,int *,int ,int ,int ,int,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_3 ;
 int FUNC_7 (int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(ScriptHost *VAR_5, HTMLScriptElement *VAR_6, LPCWSTR VAR_7)
{
    EXCEPINFO VAR_8;
    VARIANT VAR_9;
    HRESULT VAR_10;

    FUNC_2("%s\n", FUNC_5(VAR_7));

    FUNC_7(VAR_6, VAR_0);

    FUNC_3(&VAR_9);
    FUNC_6(&VAR_8, 0, sizeof(VAR_8));
    FUNC_2(">>>\n");
    VAR_10 = FUNC_0(VAR_5->parse, VAR_7, VAR_4, ((void*)0), VAR_3,
                                              0, 0, VAR_2|VAR_1,
                                              &VAR_9, &VAR_8);
    if(FUNC_1(VAR_10))
        FUNC_2("<<<\n");
    else
        FUNC_4("<<< %08x\n", VAR_10);

}
