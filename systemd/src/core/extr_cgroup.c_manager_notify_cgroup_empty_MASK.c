
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;
typedef char const Manager ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int *) ;

int FUNC_4(Manager *VAR_0, const char *VAR_1) {
        Unit *VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);




        FUNC_1("Got cgroup empty notification for: %s", VAR_1);

        VAR_2 = FUNC_2(VAR_0, VAR_1);
        if (!VAR_2)
                return 0;

        FUNC_3(VAR_2);
        return 1;
}
