
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* command; size_t n; size_t len; } ;
typedef TYPE_1__ SQL_input ;
typedef char* LPCWSTR ;
typedef size_t INT ;


 int FUNC_0 (char*) ;

INT FUNC_1( void *VAR_0 )
{
    SQL_input* VAR_1 = (SQL_input*) VAR_0;
    LPCWSTR VAR_2 = &VAR_1->command[VAR_1->n];
    INT VAR_3, VAR_4 = 0;

    for( VAR_3=0; VAR_3<VAR_1->len; VAR_3++ )
    {
        if( '0' > VAR_2[VAR_3] || '9' < VAR_2[VAR_3] )
        {
            FUNC_0("should only be numbers here!\n");
            break;
        }
        VAR_4 = (VAR_2[VAR_3]-'0') + VAR_4*10;
    }

    return VAR_4;
}
