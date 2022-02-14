
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tid_t { ____Placeholder_tid_t } tid_t ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int **) ;
 scalar_t__ FUNC_5 (void**,int *,int *) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int,int **) ;
 int ** VAR_2 ;

HRESULT FUNC_9(enum tid_t VAR_3, ITypeInfo **VAR_4)
{
    unsigned VAR_5 = FUNC_6(VAR_3);
    ITypeLib *VAR_6;
    HRESULT VAR_7;

    if (FUNC_1(VAR_7 = FUNC_8(VAR_5, &VAR_6)))
        return VAR_7;

    if(!VAR_2[VAR_3]) {
        ITypeInfo *VAR_8;

        VAR_7 = FUNC_4(VAR_6, FUNC_7(VAR_3), &VAR_8);
        if(FUNC_1(VAR_7)) {

            if (FUNC_1(VAR_7 = FUNC_8(VAR_0, &VAR_6)))
                return VAR_7;
            VAR_7 = FUNC_4(VAR_6, FUNC_7(VAR_3), &VAR_8);
            if(FUNC_1(VAR_7)) {
                FUNC_0("GetTypeInfoOfGuid failed: %08x\n", VAR_7);
                return VAR_7;
            }
        }

        if(FUNC_5((void**)(VAR_2+VAR_3), VAR_8, ((void*)0)))
            FUNC_3(VAR_8);
    }

    *VAR_4 = VAR_2[VAR_3];

    FUNC_2(VAR_2[VAR_3]);
    return VAR_1;
}
