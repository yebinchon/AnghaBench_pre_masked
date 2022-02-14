
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsAString ;
typedef int WCHAR ;
struct TYPE_10__ {int window; } ;
struct TYPE_9__ {int nsscript; scalar_t__ parsed; } ;
struct TYPE_8__ {int parse_proc; } ;
typedef TYPE_1__ ScriptHost ;
typedef int PRUnichar ;
typedef int IDispatch ;
typedef TYPE_2__ HTMLScriptElement ;
typedef TYPE_3__ HTMLDocumentNode ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*,int const*,int ,int *,int *,int ,int ,int ,int,int **) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int const**) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *,int const**) ;
 int VAR_4 ;

__attribute__((used)) static IDispatch *FUNC_15(HTMLDocumentNode *VAR_5, HTMLScriptElement *VAR_6, WCHAR **VAR_7)
{
    ScriptHost *VAR_8;
    WCHAR *VAR_9 = ((void*)0);
    const WCHAR *VAR_10;
    nsAString VAR_11;
    IDispatch *VAR_12;
    nsresult VAR_13;
    HRESULT VAR_14;

    if(VAR_6->parsed)
        return ((void*)0);

    VAR_8 = FUNC_6(VAR_5->window, VAR_6);
    if(!VAR_8 || !VAR_8->parse_proc)
        return ((void*)0);

    FUNC_11(&VAR_11, ((void*)0));
    VAR_13 = FUNC_12(VAR_6->nsscript, &VAR_11);
    if(FUNC_3(VAR_13)) {
        const PRUnichar *VAR_15;

        FUNC_10(&VAR_11, &VAR_15);
        VAR_9 = FUNC_8(VAR_15);
    }
    FUNC_9(&VAR_11);
    if(!VAR_9)
        return ((void*)0);

    if(!FUNC_14(VAR_9, &VAR_10)) {
        FUNC_4("parsing %s failed\n", FUNC_5(VAR_9));
        FUNC_7(VAR_9);
        return ((void*)0);
    }

    FUNC_11(&VAR_11, ((void*)0));
    VAR_13 = FUNC_13(VAR_6->nsscript, &VAR_11);
    if(FUNC_3(VAR_13)) {
        const PRUnichar *VAR_16;

        FUNC_10(&VAR_11, &VAR_16);
        VAR_14 = FUNC_2(VAR_8->parse_proc, VAR_16, VAR_10,
                VAR_3, ((void*)0), ((void*)0), VAR_4, 0, 0,
                VAR_0|VAR_2|VAR_1, &VAR_12);
        if(FUNC_1(VAR_14))
            VAR_12 = ((void*)0);
    }else {
        FUNC_0("GetText failed: %08x\n", VAR_13);
        VAR_12 = ((void*)0);
    }
    FUNC_9(&VAR_11);
    if(!VAR_12) {
        FUNC_7(VAR_9);
        return ((void*)0);
    }

    *VAR_7 = VAR_9;
    return VAR_12;
}
