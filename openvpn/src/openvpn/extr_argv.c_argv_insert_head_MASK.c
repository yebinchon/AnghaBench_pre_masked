
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {int * argv; } ;


 struct argv FUNC_0 (struct argv const*,int) ;
 int FUNC_1 (char const*,int *) ;

struct argv
FUNC_2(const struct argv *VAR_0, const char *VAR_1)
{
    struct argv VAR_2;
    VAR_2 = FUNC_0(VAR_0, 1);
    VAR_2.argv[0] = FUNC_1(VAR_1, ((void*)0));
    return VAR_2;
}
