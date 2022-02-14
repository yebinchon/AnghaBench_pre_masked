
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_stat {scalar_t__ sortlist; } ;
typedef size_t pid_t ;


 struct pid_stat** VAR_0 ;

__attribute__((used)) static int FUNC_0(const void *VAR_1, const void *VAR_2) {

    struct pid_stat *VAR_3 = VAR_0[*((pid_t *)VAR_1)];
    struct pid_stat *VAR_4 = VAR_0[*((pid_t *)VAR_2)];

    if(VAR_3->sortlist > VAR_4->sortlist)
        return -1;
    else
        return 1;
}
