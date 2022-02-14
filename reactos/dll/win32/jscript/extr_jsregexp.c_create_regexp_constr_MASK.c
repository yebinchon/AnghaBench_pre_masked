
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsdisp_t ;
typedef char WCHAR ;
struct TYPE_3__ {int dispex; } ;
typedef TYPE_1__ RegExpInstance ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,TYPE_1__**) ;
 int FUNC_2 (int *,int ,char const*,int *,int,int *,int **) ;
 int FUNC_3 (int *) ;

HRESULT FUNC_4(script_ctx_t *VAR_3, jsdisp_t *VAR_4, jsdisp_t **VAR_5)
{
    RegExpInstance *VAR_6;
    HRESULT VAR_7;

    static const WCHAR VAR_8[] = {'R','e','g','E','x','p',0};

    VAR_7 = FUNC_1(VAR_3, VAR_4, &VAR_6);
    if(FUNC_0(VAR_7))
        return VAR_7;

    VAR_7 = FUNC_2(VAR_3, VAR_2, VAR_8, &VAR_1,
            VAR_0|2, &VAR_6->dispex, VAR_5);

    FUNC_3(&VAR_6->dispex);
    return VAR_7;
}
