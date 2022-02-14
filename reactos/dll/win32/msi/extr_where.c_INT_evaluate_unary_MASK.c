
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct complex_expr {int op; TYPE_2__* left; } ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int column; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
typedef int MSIWHEREVIEW ;
typedef int MSIRECORD ;
typedef int INT ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ FUNC_1 (int *,scalar_t__ const*,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_2( MSIWHEREVIEW *VAR_2, const UINT VAR_3[],
                                const struct complex_expr *VAR_4, INT *VAR_5, MSIRECORD *VAR_6 )
{
    UINT VAR_7;
    UINT VAR_8;

    VAR_7 = FUNC_1(&VAR_4->left->u.column, VAR_3, &VAR_8);
    if(VAR_7 != VAR_1)
        return VAR_7;

    switch( VAR_4->op )
    {
    case 129:
        *VAR_5 = !VAR_8;
        break;
    case 128:
        *VAR_5 = VAR_8;
        break;
    default:
        FUNC_0("Unknown operator %d\n", VAR_4->op );
        return VAR_0;
    }
    return VAR_1;
}
