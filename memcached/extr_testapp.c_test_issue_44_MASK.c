
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int in_port_t ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static enum test_return FUNC_4(void) {
    in_port_t VAR_3;
    pid_t VAR_4 = FUNC_3(&VAR_3, 1, 15);
    FUNC_0(FUNC_1(VAR_4, VAR_0) == 0);
    FUNC_2(1);
    FUNC_0(FUNC_1(VAR_4, VAR_1) == 0);

    return VAR_2;
}
