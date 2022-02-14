
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_queue {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct int_queue*) ;
 int FUNC_2 (struct int_queue*) ;
 int FUNC_3 (struct int_queue*,int) ;
 int FUNC_4 (struct int_queue*,int*) ;

__attribute__((used)) static void FUNC_5(void) {
    struct int_queue VAR_0;
    FUNC_1(&VAR_0);

    FUNC_0(FUNC_2(&VAR_0));

    bool VAR_1 = FUNC_3(&VAR_0, 42);
    FUNC_0(VAR_1);
    FUNC_0(!FUNC_2(&VAR_0));

    int VAR_2;
    bool VAR_3 = FUNC_4(&VAR_0, &VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(FUNC_2(&VAR_0));

    bool VAR_4 = FUNC_4(&VAR_0, &VAR_2);
    FUNC_0(!VAR_4);
}
