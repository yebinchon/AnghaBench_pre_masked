
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*) ;

__attribute__((used)) static enum test_return FUNC_2(void) {
    uint32_t VAR_1;
    FUNC_0(FUNC_1("123", &VAR_1));
    FUNC_0(VAR_1 == 123);
    FUNC_0(FUNC_1("+123", &VAR_1));
    FUNC_0(VAR_1 == 123);
    FUNC_0(!FUNC_1("", &VAR_1));
    FUNC_0(!FUNC_1("123BOGUS", &VAR_1));
    FUNC_0(!FUNC_1(" issue221", &VAR_1));





    FUNC_0(FUNC_1("4294967295", &VAR_1));
    FUNC_0(VAR_1 == 4294967295L);



    FUNC_0(!FUNC_1("-1", &VAR_1));
    return VAR_0;
}
