
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ error_lib; } ;
typedef TYPE_1__ OSSL_PROVIDER ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,char const*,int ) ;

__attribute__((used)) static void FUNC_3(const OSSL_PROVIDER *VAR_0,
                            uint32_t VAR_1, const char *VAR_2, va_list VAR_3)
{





    if (FUNC_0(VAR_1) != 0) {
        FUNC_2(FUNC_0(VAR_1), FUNC_1(VAR_1), VAR_2, VAR_3);
    } else {
        FUNC_2(VAR_0->error_lib, (int)VAR_1, VAR_2, VAR_3);
    }
}
