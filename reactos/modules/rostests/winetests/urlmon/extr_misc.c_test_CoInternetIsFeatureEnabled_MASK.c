
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void) {
    HRESULT VAR_3;

    VAR_3 = FUNC_1(VAR_1, VAR_2);
    FUNC_0(VAR_3 == VAR_0, "CoInternetIsFeatureEnabled returned %08x, expected E_FAIL\n", VAR_3);
}
