
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mountinfo {unsigned long major; unsigned long minor; struct mountinfo* next; } ;


 scalar_t__ FUNC_0 (int) ;

struct mountinfo *FUNC_1(struct mountinfo *VAR_0, unsigned long VAR_1, unsigned long VAR_2) {
    struct mountinfo *VAR_3;

    for(VAR_3 = VAR_0; VAR_3 ; VAR_3 = VAR_3->next)
        if(FUNC_0(VAR_3->major == VAR_1 && VAR_3->minor == VAR_2))
            return VAR_3;

    return ((void*)0);
}
