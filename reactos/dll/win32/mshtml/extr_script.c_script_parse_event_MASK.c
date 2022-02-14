
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_10__ {TYPE_1__* outer_window; } ;
struct TYPE_12__ {TYPE_2__ base; } ;
struct TYPE_11__ {int parse_proc; } ;
struct TYPE_9__ {scalar_t__ scriptmode; } ;
typedef TYPE_3__ ScriptHost ;
typedef scalar_t__* LPWSTR ;
typedef char const* LPCWSTR ;
typedef int IDispatch ;
typedef TYPE_4__ HTMLInnerWindow ;
typedef int HRESULT ;
typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int *,int ,int *,int *,char const*,int ,int ,int,int **) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (char const*) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (scalar_t__*,int *) ;
 TYPE_3__* FUNC_8 (TYPE_4__*,int *) ;
 scalar_t__* FUNC_9 (int) ;
 int FUNC_10 (scalar_t__*) ;
 scalar_t__ FUNC_11 (char const) ;
 int FUNC_12 (scalar_t__*,char const*,int) ;

IDispatch *FUNC_13(HTMLInnerWindow *VAR_6, LPCWSTR VAR_7)
{
    ScriptHost *VAR_8;
    GUID VAR_9;
    const WCHAR *VAR_10;
    IDispatch *VAR_11;
    HRESULT VAR_12;

    static const WCHAR VAR_13[] = {'\"',0};

    FUNC_3("%s\n", FUNC_5(VAR_7));

    for(VAR_10 = VAR_7; FUNC_11(*VAR_10); VAR_10++);
    if(*VAR_10 == ':') {
        LPWSTR VAR_14;
        BOOL VAR_15;

        VAR_14 = FUNC_9((VAR_10-VAR_7+1)*sizeof(WCHAR));
        if(!VAR_14)
            return ((void*)0);

        FUNC_12(VAR_14, VAR_7, (VAR_10-VAR_7)*sizeof(WCHAR));
        VAR_14[VAR_10-VAR_7] = 0;

        VAR_15 = FUNC_7(VAR_14, &VAR_9);

        FUNC_10(VAR_14);

        if(!VAR_15) {
            FUNC_4("Could not find language\n");
            return ((void*)0);
        }

        VAR_10++;
    }else {
        VAR_10 = VAR_7;
        VAR_9 = FUNC_6(VAR_6);
    }

    if(FUNC_2(&VAR_0, &VAR_9)
       && (!VAR_6->base.outer_window || VAR_6->base.outer_window->scriptmode != VAR_1)) {
        FUNC_3("Ignoring JScript\n");
        return ((void*)0);
    }

    VAR_8 = FUNC_8(VAR_6, &VAR_9);
    if(!VAR_8 || !VAR_8->parse_proc)
        return ((void*)0);

    VAR_12 = FUNC_1(VAR_8->parse_proc, VAR_10, ((void*)0), VAR_5,
            ((void*)0), ((void*)0), VAR_13, 0 , 0,
            VAR_2|VAR_4|VAR_3, &VAR_11);
    if(FUNC_0(VAR_12)) {
        FUNC_4("ParseProcedureText failed: %08x\n", VAR_12);
        return ((void*)0);
    }

    FUNC_3("ret %p\n", VAR_11);
    return VAR_11;
}
