
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IVariantChangeType ;
typedef int IServiceProvider ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,...) ;
 int * VAR_3 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(IServiceProvider *VAR_4, IDispatch *VAR_5)
{
    IVariantChangeType *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(VAR_4, &VAR_1, &VAR_0, (void**)&VAR_6);
    FUNC_2(VAR_7 == VAR_2, "Could not get SID_VariantConversion service: %08x\n", VAR_7);

    FUNC_2(VAR_6 == VAR_3, "change_type != script_change_type\n");
    FUNC_3(VAR_6, VAR_5);

    FUNC_1(VAR_6);
}
