
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parser {int dummy; } ;
struct TYPE_3__ {struct expr* right; int op; struct expr* left; } ;
struct TYPE_4__ {TYPE_1__ expr; } ;
struct expr {TYPE_2__ u; int type; } ;
typedef int UINT ;


 int VAR_0 ;
 struct expr* FUNC_0 (struct parser*,int) ;

__attribute__((used)) static struct expr *FUNC_1( struct parser *VAR_1, struct expr *VAR_2, UINT VAR_3, struct expr *VAR_4 )
{
    struct expr *VAR_5 = FUNC_0( VAR_1, sizeof(*VAR_5) );
    if (VAR_5)
    {
        VAR_5->type = VAR_0;
        VAR_5->u.expr.left = VAR_2;
        VAR_5->u.expr.op = VAR_3;
        VAR_5->u.expr.right = VAR_4;
    }
    return VAR_5;
}
