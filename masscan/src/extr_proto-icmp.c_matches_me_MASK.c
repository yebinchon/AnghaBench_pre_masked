
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Output {int * src; } ;


 scalar_t__ FUNC_0 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct Output *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    unsigned VAR_3;

    for (VAR_3=0; VAR_3<8; VAR_3++) {
        if (FUNC_0(&VAR_0->src[VAR_3], VAR_1, VAR_2))
            return 1;
    }
    return 0;
}
