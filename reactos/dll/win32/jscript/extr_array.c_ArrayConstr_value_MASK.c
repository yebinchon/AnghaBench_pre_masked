
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int HRESULT ;
typedef unsigned int DWORD ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned int,int **) ;
 double FUNC_4 (int ) ;
 int FUNC_5 (double) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    jsdisp_t *VAR_9;
    DWORD VAR_10;
    HRESULT VAR_11;

    FUNC_2("\n");

    switch(VAR_5) {
    case 128:
    case 129: {
        if(VAR_6 == 1 && FUNC_6(VAR_7[0])) {
            double VAR_12 = FUNC_4(VAR_7[0]);

            if(VAR_12 < 0 || !FUNC_5(VAR_12))
                return FUNC_10(VAR_3, VAR_1, ((void*)0));

            VAR_11 = FUNC_3(VAR_3, VAR_12, &VAR_9);
            if(FUNC_0(VAR_11))
                return VAR_11;

            *VAR_8 = FUNC_9(VAR_9);
            return VAR_2;
        }

        VAR_11 = FUNC_3(VAR_3, VAR_6, &VAR_9);
        if(FUNC_0(VAR_11))
            return VAR_11;

        for(VAR_10=0; VAR_10 < VAR_6; VAR_10++) {
            VAR_11 = FUNC_7(VAR_9, VAR_10, VAR_7[VAR_10]);
            if(FUNC_0(VAR_11))
                break;
        }
        if(FUNC_0(VAR_11)) {
            FUNC_8(VAR_9);
            return VAR_11;
        }

        *VAR_8 = FUNC_9(VAR_9);
        break;
    }
    default:
        FUNC_1("unimplemented flags: %x\n", VAR_5);
        return VAR_0;
    }

    return VAR_2;
}
