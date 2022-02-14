
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t tid_t ;
typedef char WCHAR ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (void**,int *,int *) ;
 int FUNC_6 (char const*,int **) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 int * VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;

HRESULT FUNC_8(tid_t VAR_4, ITypeInfo **VAR_5)
{
    HRESULT VAR_6;

    if (!VAR_3) {
        ITypeLib *VAR_7;

        static const WCHAR VAR_8[] = {'v','b','s','c','r','i','p','t','.','d','l','l','\\','1',0};

        VAR_6 = FUNC_6(VAR_8, &VAR_7);
        if(FUNC_1(VAR_6)) {
            FUNC_0("LoadRegTypeLib failed: %08x\n", VAR_6);
            return VAR_6;
        }

        if(FUNC_5((void**)&VAR_3, VAR_7, ((void*)0)))
            FUNC_4(VAR_7);
    }

    if(!VAR_2[VAR_4]) {
        ITypeInfo *VAR_9;

        VAR_6 = FUNC_3(VAR_3, VAR_1[VAR_4], &VAR_9);
        if(FUNC_1(VAR_6)) {
            FUNC_0("GetTypeInfoOfGuid(%s) failed: %08x\n", FUNC_7(VAR_1[VAR_4]), VAR_6);
            return VAR_6;
        }

        if(FUNC_5((void**)(VAR_2+VAR_4), VAR_9, ((void*)0)))
            FUNC_2(VAR_9);
    }

    *VAR_5 = VAR_2[VAR_4];
    return VAR_0;
}
