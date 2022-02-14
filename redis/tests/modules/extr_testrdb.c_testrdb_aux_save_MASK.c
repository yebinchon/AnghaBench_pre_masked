
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_3(RedisModuleIO *VAR_5, int VAR_6) {
    if (VAR_4==1) FUNC_2(VAR_6 == VAR_0);
    if (VAR_4==0) FUNC_2(0);
    if (VAR_6 == VAR_1) {
        if (VAR_3) {
            FUNC_0(VAR_5, 1);
            FUNC_1(VAR_5, VAR_3);
        } else {
            FUNC_0(VAR_5, 0);
        }
    } else {
        if (VAR_2) {
            FUNC_0(VAR_5, 1);
            FUNC_1(VAR_5, VAR_2);
        } else {
            FUNC_0(VAR_5, 0);
        }
    }
}
