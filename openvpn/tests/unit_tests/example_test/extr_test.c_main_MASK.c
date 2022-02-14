
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CMUnitTest {int dummy; } ;


 int FUNC_0 (char*,struct CMUnitTest const*,int *,int *) ;
 struct CMUnitTest const FUNC_1 (int ) ;
 struct CMUnitTest const FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(void) {
    const struct CMUnitTest VAR_4[] = {
        FUNC_1(VAR_1),
        FUNC_2(VAR_0, VAR_2, VAR_3),

    };

    return FUNC_0("success_test", VAR_4, ((void*)0), ((void*)0));
}
