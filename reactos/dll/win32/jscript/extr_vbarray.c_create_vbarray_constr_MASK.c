
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsdisp_t ;
typedef char WCHAR ;
struct TYPE_3__ {int dispex; } ;
typedef TYPE_1__ VBArrayInstance ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,TYPE_1__**) ;
 int FUNC_2 (int *,int ,char const*,int *,int,int *,int **) ;
 int FUNC_3 (int *) ;

HRESULT FUNC_4(script_ctx_t *VAR_2, jsdisp_t *VAR_3, jsdisp_t **VAR_4)
{
    VBArrayInstance *VAR_5;
    HRESULT VAR_6;

    static const WCHAR VAR_7[] = {'V','B','A','r','r','a','y',0};

    VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_2(VAR_2, VAR_1, VAR_7, ((void*)0), VAR_0|1, &VAR_5->dispex, VAR_4);

    FUNC_3(&VAR_5->dispex);
    return VAR_6;
}
