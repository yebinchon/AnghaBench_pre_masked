
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sql_str {int dummy; } ;
struct TYPE_2__ {int sval; } ;
struct expr {TYPE_1__ u; int type; } ;
typedef int LPWSTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,struct sql_str const*,int *) ;
 struct expr* FUNC_1 (void*,int) ;

__attribute__((used)) static struct expr * FUNC_2( void *VAR_2, const struct sql_str *VAR_3 )
{
    struct expr *VAR_4 = FUNC_1( VAR_2, sizeof *VAR_4 );
    if( VAR_4 )
    {
        VAR_4->type = VAR_1;
        if( FUNC_0( VAR_2, VAR_3, (LPWSTR *)&VAR_4->u.sval ) != VAR_0 )
            return ((void*)0);
    }
    return VAR_4;
}
