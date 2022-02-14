
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITypeLib ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void**,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int,int,int ,int **) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_5(void)
{
    HRESULT VAR_3;
    ITypeLib *VAR_4;

    VAR_3 = FUNC_4(&VAR_0, 1, 1, VAR_1, &VAR_4);
    if(FUNC_1(VAR_3)) {
        FUNC_0("LoadRegTypeLib failed: %08x\n", VAR_3);
        return VAR_3;
    }

    if(FUNC_3((void**)&VAR_2, VAR_4, ((void*)0)))
        FUNC_2(VAR_4);
    return VAR_3;
}
