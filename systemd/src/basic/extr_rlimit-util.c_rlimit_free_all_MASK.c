
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int dummy; } ;


 int VAR_0 ;
 struct rlimit* FUNC_0 (struct rlimit*) ;

void FUNC_1(struct rlimit **VAR_1) {
        int VAR_2;

        if (!VAR_1)
                return;

        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
                VAR_1[VAR_2] = FUNC_0(VAR_1[VAR_2]);
}
