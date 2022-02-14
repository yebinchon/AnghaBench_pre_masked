
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* desc; } ;
typedef TYPE_2__ vbdisp_t ;
typedef int VARIANT ;
struct TYPE_4__ {int ctx; } ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *,int,int *,int *) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int **) ;

__attribute__((used)) static HRESULT FUNC_9(vbdisp_t *VAR_2, VARIANT *VAR_3, unsigned VAR_4, VARIANT *VAR_5)
{
    BSTR VAR_6, VAR_7 = ((void*)0);
    int VAR_8 = VAR_1;
    HRESULT VAR_9;

    FUNC_4("\n");

    FUNC_5(1 <= VAR_4 && VAR_4 <= 5);

    VAR_9 = FUNC_8(VAR_3, &VAR_6);
    if(FUNC_0(VAR_9))
        return VAR_9;

    if(VAR_4 > 1)
        VAR_9 = FUNC_7(VAR_3+1, &VAR_8);

    if(FUNC_2(VAR_9) && VAR_4 > 2)
        VAR_9 = FUNC_8(VAR_3+2, &VAR_7);

    if(FUNC_2(VAR_9) && VAR_4 > 3) {
        FUNC_1("unsupported arg_cnt %d\n", VAR_4);
        VAR_9 = VAR_0;
    }

    if(FUNC_2(VAR_9))
        VAR_9 = FUNC_6(VAR_2->desc->ctx, VAR_6, VAR_8, VAR_7, VAR_5);

    FUNC_3(VAR_6);
    FUNC_3(VAR_7);
    return VAR_9;
}
