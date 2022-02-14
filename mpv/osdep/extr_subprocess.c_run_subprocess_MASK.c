
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_args {int log; int args; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *,int *,char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct subprocess_args*) ;

__attribute__((used)) static void *FUNC_6(void *VAR_0)
{
    struct subprocess_args *VAR_1 = VAR_0;
    FUNC_3(FUNC_4());

    FUNC_1(VAR_1->log);

    char *VAR_2 = ((void*)0);
    if (FUNC_2(VAR_1->args, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_2) < 0)
        FUNC_0(VAR_1->log, "Running subprocess failed: %s\n", VAR_2);

    FUNC_5(VAR_1);
    return ((void*)0);
}
