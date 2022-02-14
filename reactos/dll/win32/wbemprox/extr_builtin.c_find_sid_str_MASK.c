
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ op; struct expr* right; struct expr* left; } ;
struct TYPE_6__ {int * sval; TYPE_2__* propval; TYPE_1__ expr; } ;
struct expr {scalar_t__ type; TYPE_3__ u; } ;
typedef int WCHAR ;
struct TYPE_5__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static const WCHAR *FUNC_1( const struct expr *VAR_5 )
{
    const struct expr *VAR_6, *VAR_7;
    const WCHAR *VAR_8 = ((void*)0);

    if (!VAR_5 || VAR_5->type != VAR_0 || VAR_5->u.expr.op != VAR_3) return ((void*)0);

    VAR_6 = VAR_5->u.expr.left;
    VAR_7 = VAR_5->u.expr.right;
    if (VAR_6->type == VAR_1 && VAR_7->type == VAR_2 && !FUNC_0( VAR_6->u.propval->name, VAR_4 ))
    {
        VAR_8 = VAR_7->u.sval;
    }
    else if (VAR_6->type == VAR_2 && VAR_7->type == VAR_1 && !FUNC_0( VAR_7->u.propval->name, VAR_4 ))
    {
        VAR_8 = VAR_6->u.sval;
    }
    return VAR_8;
}
