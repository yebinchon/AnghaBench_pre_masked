
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


 int FUNC_0 (TYPE_1__*,int *,int ,unsigned int,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,TYPE_2__*,int *,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 TYPE_2__ FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int,int **) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    SYSTEMTIME VAR_9;
    DateInstance *VAR_10;
    jsstr_t *VAR_11;
    int VAR_12;

    FUNC_2("\n");

    if(!(VAR_10 = FUNC_4(VAR_4)))
        return FUNC_10(VAR_3, VAR_1, ((void*)0));

    if(FUNC_5(VAR_10->time)) {
        if(VAR_8)
            *VAR_8 = FUNC_8(FUNC_7());
        return VAR_2;
    }

    VAR_9 = FUNC_3(FUNC_9(VAR_10->time, VAR_10));

    if(VAR_9.wYear<1601 || VAR_9.wYear>9999)
        return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

    if(VAR_8) {
        WCHAR *VAR_13;

        VAR_12 = FUNC_1(VAR_3->lcid, 0, &VAR_9, ((void*)0), ((void*)0), 0);
        VAR_11 = FUNC_6(VAR_12-1, &VAR_13);
        if(!VAR_11)
            return VAR_0;
        FUNC_1(VAR_3->lcid, 0, &VAR_9, ((void*)0), VAR_13, VAR_12);

        *VAR_8 = FUNC_8(VAR_11);
    }
    return VAR_2;
}
