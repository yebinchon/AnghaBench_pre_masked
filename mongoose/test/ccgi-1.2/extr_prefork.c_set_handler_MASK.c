
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;int sa_mask; scalar_t__ sa_flags; } ;


 int FUNC_0 (int,struct sigaction*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, void (*VAR_1)(int VAR_2)) {
    struct sigaction VAR_3;
    VAR_3.sa_handler = VAR_1;
    VAR_3.sa_flags = 0;
    FUNC_1(&VAR_3.sa_mask);
    return FUNC_0(VAR_0, &VAR_3, 0);
}
