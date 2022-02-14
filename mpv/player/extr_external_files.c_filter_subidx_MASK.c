
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subfn {char* fname; int priority; } ;


 int FUNC_0 (struct subfn*,int,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct subfn **VAR_0, int *VAR_1)
{
    const char *VAR_2 = ((void*)0);
    for (int VAR_3 = 0; VAR_3 < *VAR_1; VAR_3++) {
        const char *VAR_4 = (*VAR_0)[VAR_3].fname;
        if (FUNC_1(VAR_4, ".idx")) {
            VAR_2 = VAR_4;
        } else if (FUNC_1(VAR_4, ".sub")) {
            if (VAR_2 && FUNC_3(VAR_2, VAR_4, FUNC_2(VAR_4) - 4) == 0)
                (*VAR_0)[VAR_3].priority = -1;
        }
    }
    for (int VAR_5 = *VAR_1 - 1; VAR_5 >= 0; VAR_5--) {
        if ((*VAR_0)[VAR_5].priority < 0)
            FUNC_0(*VAR_0, *VAR_1, VAR_5);
    }
}
