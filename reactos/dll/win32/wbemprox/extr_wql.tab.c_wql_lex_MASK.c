
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {size_t len; int * data; } ;
struct parser {size_t idx; size_t len; int * cmd; } ;


 int VAR_0 ;
 size_t FUNC_0 (int *,int*) ;

__attribute__((used)) static int FUNC_1( void *VAR_1, struct parser *VAR_2 )
{
    struct string *VAR_3 = VAR_1;
    int VAR_4 = -1;
    do
    {
        VAR_2->idx += VAR_2->len;
        if (!VAR_2->cmd[VAR_2->idx]) return 0;
        VAR_2->len = FUNC_0( &VAR_2->cmd[VAR_2->idx], &VAR_4 );
        if (!VAR_2->len) break;

        VAR_3->data = &VAR_2->cmd[VAR_2->idx];
        VAR_3->len = VAR_2->len;
    } while (VAR_4 == VAR_0);
    return VAR_4;
}
