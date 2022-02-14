
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CMUnitTest {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,struct CMUnitTest const*,int *,int *) ;
 struct CMUnitTest const FUNC_3 (int ) ;
 int VAR_0 ;

int
FUNC_4(void) {
    const struct CMUnitTest VAR_1[] = {
        FUNC_3(VAR_0),
    };





    int VAR_2 = FUNC_2("crypto tests", VAR_1, ((void*)0), ((void*)0));





    return VAR_2;
}
