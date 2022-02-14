
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_12__ {int lcid; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef char WCHAR ;
struct TYPE_14__ {int time; } ;
struct TYPE_13__ {int wYear; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef int HRESULT ;
typedef TYPE_3__ DateInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_2__*,int *,char*,int) ;
 int FUNC_1 (int ,int ,TYPE_2__*,int *,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 TYPE_2__ FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int,char**) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,TYPE_3__*) ;
 int FUNC_11 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    SYSTEMTIME VAR_10;
    DateInstance *VAR_11;
    jsstr_t *VAR_12;
    int VAR_13, VAR_14;

    FUNC_2("\n");

    if(!(VAR_11 = FUNC_4(VAR_5)))
        return FUNC_11(VAR_4, VAR_2, ((void*)0));

    if(FUNC_6(VAR_11->time)) {
        if(VAR_9)
            *VAR_9 = FUNC_9(FUNC_8());
        return VAR_3;
    }

    VAR_10 = FUNC_3(FUNC_10(VAR_11->time, VAR_11));

    if(VAR_10.wYear<1601 || VAR_10.wYear>9999)
        return FUNC_5(VAR_11, VAR_9);

    if(VAR_9) {
        WCHAR *VAR_15;

        VAR_13 = FUNC_0(VAR_4->lcid, VAR_0, &VAR_10, ((void*)0), ((void*)0), 0);
        VAR_14 = FUNC_1(VAR_4->lcid, 0, &VAR_10, ((void*)0), ((void*)0), 0);

        VAR_12 = FUNC_7(VAR_13+VAR_14-1, &VAR_15);
        if(!VAR_12)
            return VAR_1;

        FUNC_0(VAR_4->lcid, VAR_0, &VAR_10, ((void*)0), VAR_15, VAR_13);
        FUNC_1(VAR_4->lcid, 0, &VAR_10, ((void*)0), VAR_15+VAR_13, VAR_14);
        VAR_15[VAR_13-1] = ' ';

        *VAR_9 = FUNC_9(VAR_12);
    }
    return VAR_3;
}
