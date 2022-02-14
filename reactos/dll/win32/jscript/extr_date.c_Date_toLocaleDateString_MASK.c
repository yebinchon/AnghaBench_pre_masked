
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_11__ {int lcid; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_13__ {int time; } ;
struct TYPE_12__ {int wYear; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef int HRESULT ;
typedef TYPE_3__ DateInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_2__*,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 TYPE_2__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int,int **) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    SYSTEMTIME VAR_10;
    DateInstance *VAR_11;
    jsstr_t *VAR_12;
    int VAR_13;

    FUNC_1("\n");

    if(!(VAR_11 = FUNC_3(VAR_5)))
        return FUNC_10(VAR_4, VAR_2, ((void*)0));

    if(FUNC_5(VAR_11->time)) {
        if(VAR_9)
            *VAR_9 = FUNC_8(FUNC_7());
        return VAR_3;
    }

    VAR_10 = FUNC_2(FUNC_9(VAR_11->time, VAR_11));

    if(VAR_10.wYear<1601 || VAR_10.wYear>9999)
        return FUNC_4(VAR_11, VAR_9);

    if(VAR_9) {
        WCHAR *VAR_14;

        VAR_13 = FUNC_0(VAR_4->lcid, VAR_0, &VAR_10, ((void*)0), ((void*)0), 0);
        VAR_12 = FUNC_6(VAR_13-1, &VAR_14);
        if(!VAR_12)
            return VAR_1;
        FUNC_0(VAR_4->lcid, VAR_0, &VAR_10, ((void*)0), VAR_14, VAR_13);

        *VAR_9 = FUNC_8(VAR_12);
    }
    return VAR_3;
}
