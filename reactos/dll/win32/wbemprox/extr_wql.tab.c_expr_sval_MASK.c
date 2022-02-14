
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string {int dummy; } ;
struct parser {int dummy; } ;
struct TYPE_2__ {int sval; } ;
struct expr {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 struct expr* FUNC_0 (struct parser*,int) ;
 int FUNC_1 (struct parser*,struct string const*) ;

__attribute__((used)) static struct expr *FUNC_2( struct parser *VAR_1, const struct string *VAR_2 )
{
    struct expr *VAR_3 = FUNC_0( VAR_1, sizeof *VAR_3 );
    if (VAR_3)
    {
        VAR_3->type = VAR_0;
        VAR_3->u.sval = FUNC_1( VAR_1, VAR_2 );
        if (!VAR_3->u.sval)
            return ((void*)0);
    }
    return VAR_3;
}
