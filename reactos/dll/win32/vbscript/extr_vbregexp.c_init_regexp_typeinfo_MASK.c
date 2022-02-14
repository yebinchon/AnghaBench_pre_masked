
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t regexp_tid_t ;
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
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_8(regexp_tid_t VAR_4)
{
    HRESULT VAR_5;

    if(!VAR_3) {
        static const WCHAR VAR_6[] = {'v','b','s','c','r','i','p','t','.','d','l','l','\\','3',0};
        ITypeLib *VAR_7;

        VAR_5 = FUNC_6(VAR_6, &VAR_7);
        if(FUNC_1(VAR_5)) {
            FUNC_0("LoadRegTypeLib failed: %08x\n", VAR_5);
            return VAR_5;
        }

        if(FUNC_5((void**)&VAR_3, VAR_7, ((void*)0)))
            FUNC_4(VAR_7);
    }

    if(!VAR_2[VAR_4]) {
        ITypeInfo *VAR_8;

        VAR_5 = FUNC_3(VAR_3, VAR_1[VAR_4], &VAR_8);
        if(FUNC_1(VAR_5)) {
            FUNC_0("GetTypeInfoOfGuid(%s) failed: %08x\n", FUNC_7(VAR_1[VAR_4]), VAR_5);
            return VAR_5;
        }

        if(FUNC_5((void**)(VAR_2+VAR_4), VAR_8, ((void*)0)))
            FUNC_2(VAR_8);
    }

    return VAR_0;
}
