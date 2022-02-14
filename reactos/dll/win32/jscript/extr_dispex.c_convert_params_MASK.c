
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsval_t ;
struct TYPE_3__ {unsigned int cArgs; unsigned int cNamedArgs; unsigned int rgvarg; } ;
typedef int HRESULT ;
typedef TYPE_1__ DISPPARAMS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int *) ;

__attribute__((used)) static HRESULT FUNC_5(const DISPPARAMS *VAR_2, jsval_t *VAR_3, unsigned *VAR_4, jsval_t **VAR_5)
{
    jsval_t *VAR_6;
    unsigned VAR_7;
    unsigned VAR_8;
    HRESULT VAR_9;

    VAR_7 = VAR_2->cArgs - VAR_2->cNamedArgs;

    if(VAR_7 > 6) {
        VAR_6 = FUNC_1(VAR_7 * sizeof(*VAR_6));
        if(!VAR_6)
            return VAR_0;
    }else {
        VAR_6 = VAR_3;
    }

    for(VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        VAR_9 = FUNC_4(VAR_2->rgvarg+VAR_2->cArgs-VAR_8-1, VAR_6+VAR_8);
        if(FUNC_0(VAR_9)) {
            while(VAR_8--)
                FUNC_3(VAR_6[VAR_8]);
            if(VAR_6 != VAR_3)
                FUNC_2(VAR_6);
            return VAR_9;
        }
    }

    *VAR_4 = VAR_7;
    *VAR_5 = VAR_6;
    return VAR_1;
}
