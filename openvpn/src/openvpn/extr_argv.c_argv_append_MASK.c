
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {char** argv; int argc; } ;


 int FUNC_0 (struct argv*,int) ;

__attribute__((used)) static void
FUNC_1(struct argv *VAR_0, char *VAR_1)
{
    FUNC_0(VAR_0, 1);
    VAR_0->argv[VAR_0->argc++] = VAR_1;
}
