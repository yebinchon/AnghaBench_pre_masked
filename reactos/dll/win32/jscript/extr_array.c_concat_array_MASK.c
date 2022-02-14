
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_3__ {scalar_t__ length; int dispex; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ ArrayInstance ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static HRESULT FUNC_4(jsdisp_t *VAR_2, ArrayInstance *VAR_3, DWORD *VAR_4)
{
    jsval_t VAR_5;
    DWORD VAR_6;
    HRESULT VAR_7;

    for(VAR_6=0; VAR_6 < VAR_3->length; VAR_6++) {
        VAR_7 = FUNC_1(&VAR_3->dispex, VAR_6, &VAR_5);
        if(VAR_7 == VAR_0)
            continue;
        if(FUNC_0(VAR_7))
            return VAR_7;

        VAR_7 = FUNC_2(VAR_2, *VAR_4+VAR_6, VAR_5);
        FUNC_3(VAR_5);
        if(FUNC_0(VAR_7))
            return VAR_7;
    }

    *VAR_4 += VAR_3->length;
    return VAR_1;
}
