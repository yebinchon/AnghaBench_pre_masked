
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sql_str {size_t len; int * data; } ;
struct TYPE_3__ {size_t n; size_t len; int * command; } ;
typedef TYPE_1__ SQL_input ;


 int VAR_0 ;
 size_t FUNC_0 (int *,int*,int*) ;

__attribute__((used)) static int FUNC_1( void *VAR_1, SQL_input *VAR_2 )
{
    int VAR_3, VAR_4;
    struct sql_str * VAR_5 = VAR_1;

    do
    {
        VAR_2->n += VAR_2->len;
        if( ! VAR_2->command[VAR_2->n] )
            return 0;


        VAR_2->len = FUNC_0( &VAR_2->command[VAR_2->n], &VAR_3, &VAR_4 );
        if( VAR_2->len==0 )
            break;
        VAR_5->data = &VAR_2->command[VAR_2->n];
        VAR_5->len = VAR_2->len;
        VAR_2->n += VAR_4;
    }
    while( VAR_3 == VAR_0 );



    return VAR_3;
}
