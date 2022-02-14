
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_flags; int sa_handler; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct sigaction*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(int VAR_1) {
    struct sigaction VAR_2 = { .sa_handler = VAR_0, .sa_flags = 0 };

    if (FUNC_1(&VAR_2.sa_mask) == -1 || FUNC_0(VAR_1, &VAR_2, 0) == -1) {
        return -1;
    }
    return 0;
}
