
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_3__ {int dispex; int safearray; } ;
typedef TYPE_1__ VBArrayInstance ;
typedef int HRESULT ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,TYPE_1__**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_13(script_ctx_t *VAR_5, vdisp_t *VAR_6, WORD VAR_7, unsigned VAR_8, jsval_t *VAR_9,
        jsval_t *VAR_10)
{
    VBArrayInstance *VAR_11;
    HRESULT VAR_12;

    FUNC_3("\n");

    switch(VAR_7) {
    case 128:
        if(VAR_8<1 || !FUNC_8(VAR_9[0]) || FUNC_5(FUNC_7(VAR_9[0])) != (VAR_3|VAR_4))
            return FUNC_12(VAR_5, VAR_1, ((void*)0));

        return FUNC_10(VAR_9[0], VAR_10);

    case 129:
        if(VAR_8<1 || !FUNC_8(VAR_9[0]) || FUNC_5(FUNC_7(VAR_9[0])) != (VAR_3|VAR_4))
            return FUNC_12(VAR_5, VAR_1, ((void*)0));

        VAR_12 = FUNC_6(VAR_5, ((void*)0), &VAR_11);
        if(FUNC_0(VAR_12))
            return VAR_12;

        VAR_12 = FUNC_2(FUNC_4(FUNC_7(VAR_9[0])), &VAR_11->safearray);
        if(FUNC_0(VAR_12)) {
            FUNC_9(&VAR_11->dispex);
            return VAR_12;
        }

        *VAR_10 = FUNC_11(&VAR_11->dispex);
        break;

    default:
        FUNC_1("unimplemented flags: %x\n", VAR_7);
        return VAR_0;
    }

    return VAR_2;
}
