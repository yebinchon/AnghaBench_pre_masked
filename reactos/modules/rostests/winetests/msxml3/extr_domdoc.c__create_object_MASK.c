
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IID ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int *,int ,int const*,void**) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,char const*,scalar_t__) ;

__attribute__((used)) static void* FUNC_2(const GUID *VAR_2, const char *VAR_3, const IID *VAR_4, int VAR_5)
{
    void *VAR_6 = ((void*)0);
    HRESULT VAR_7;

    VAR_7 = FUNC_0(VAR_2, ((void*)0), VAR_0, VAR_4, &VAR_6);
    FUNC_1(VAR_7 == VAR_1, "failed to create %s instance: 0x%08x\n", VAR_3, VAR_7);

    return VAR_6;
}
