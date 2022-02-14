
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {size_t argc; int * argv; } ;


 int FUNC_0 (struct argv*,int *) ;
 int FUNC_1 (struct argv*) ;
 int * FUNC_2 (int ,int *) ;

__attribute__((used)) static struct argv
FUNC_3(const struct argv *VAR_0, const size_t VAR_1)
{
    struct argv VAR_2;
    size_t VAR_3;

    FUNC_1(&VAR_2);
    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
    {
        FUNC_0(&VAR_2, ((void*)0));
    }
    if (VAR_0)
    {
        for (VAR_3 = 0; VAR_3 < VAR_0->argc; ++VAR_3)
        {
            FUNC_0(&VAR_2, FUNC_2(VAR_0->argv[VAR_3], ((void*)0)));
        }
    }
    return VAR_2;
}
