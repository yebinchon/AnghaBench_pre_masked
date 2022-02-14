
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t tid_t ;
typedef int ITypeInfo ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int **) ;
 scalar_t__ FUNC_5 (void**,int *,int *) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int * VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;

HRESULT FUNC_8(tid_t VAR_4, ITypeInfo **VAR_5)
{
    HRESULT VAR_6;

    if (FUNC_1(VAR_6 = FUNC_7()))
        return VAR_6;

    if(!VAR_2[VAR_4]) {
        ITypeInfo *VAR_7;

        VAR_6 = FUNC_4(VAR_3, VAR_1[VAR_4], &VAR_7);
        if(FUNC_1(VAR_6)) {
            FUNC_0("GetTypeInfoOfGuid(%s) failed: %08x\n", FUNC_6(VAR_1[VAR_4]), VAR_6);
            return VAR_6;
        }

        if(FUNC_5((void**)(VAR_2+VAR_4), VAR_7, ((void*)0)))
            FUNC_3(VAR_7);
    }

    *VAR_5 = VAR_2[VAR_4];
    FUNC_2(*VAR_5);
    return VAR_0;
}
