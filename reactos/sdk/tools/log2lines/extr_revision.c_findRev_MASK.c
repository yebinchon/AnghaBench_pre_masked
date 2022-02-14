
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,int,int,int *) ;
 int FUNC_1 (int *,int,int ) ;

unsigned long
FUNC_2(FILE *VAR_1, int *VAR_2)
{
    unsigned long VAR_3 = 0L;

    while (!FUNC_1(VAR_1, (*VAR_2) * sizeof(unsigned long), VAR_0))
    {
        FUNC_0(&VAR_3, sizeof(long), 1, VAR_1);
        (*VAR_2)--;
        if (VAR_3)
            break;
    }
    return VAR_3;
}
