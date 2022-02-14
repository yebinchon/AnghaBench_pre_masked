
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {struct nls_table* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nls_table* VAR_2 ;

int FUNC_2(struct nls_table * VAR_3)
{
    struct nls_table ** VAR_4 = &VAR_2;

    FUNC_0(&VAR_1);
    while (*VAR_4) {
        if (VAR_3 == *VAR_4) {
            *VAR_4 = VAR_3->next;
            FUNC_1(&VAR_1);
            return 0;
        }
        VAR_4 = &(*VAR_4)->next;
    }
    FUNC_1(&VAR_1);
    return -VAR_0;
}
