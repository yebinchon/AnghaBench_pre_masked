
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum install_res { ____Placeholder_install_res } install_res ;
typedef int WCHAR ;
typedef scalar_t__ ULONG ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int const*,int *) ;

__attribute__((used)) static enum install_res FUNC_2(const WCHAR *VAR_3)
{
    ULONG VAR_4;

    VAR_4 = FUNC_1(VAR_3, ((void*)0));
    if(VAR_4 != VAR_0) {
        FUNC_0("MsiInstallProduct failed: %u\n", VAR_4);
        return VAR_1;
    }

    return VAR_2;
}
