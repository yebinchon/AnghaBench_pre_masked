
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_info {int num_laces; int additions; int * laces; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct block_info *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_laces; VAR_1++)
        FUNC_1(&VAR_0->laces[VAR_1]);
    VAR_0->num_laces = 0;
    FUNC_0(&VAR_0->additions);
}
