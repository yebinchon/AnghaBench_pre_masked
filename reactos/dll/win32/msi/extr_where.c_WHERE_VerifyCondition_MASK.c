
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct expr* left; int op; struct expr* right; } ;
struct TYPE_4__ {int ival; int uval; TYPE_1__ expr; int column; } ;
struct expr {int type; TYPE_2__ u; } ;
typedef int UINT ;
typedef int MSIWHEREVIEW ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;


 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int FUNC_1 (int *,int *,int*) ;

__attribute__((used)) static UINT FUNC_2( MSIWHEREVIEW *VAR_10, struct expr *VAR_11,
                                   UINT *VAR_12 )
{
    UINT VAR_13;

    switch( VAR_11->type )
    {
    case 135:
    {
        UINT VAR_14;

        *VAR_12 = VAR_7;

        VAR_13 = FUNC_1(VAR_10, &VAR_11->u.column, &VAR_14);
        if (VAR_13 != VAR_1)
            break;

        if (VAR_14&VAR_8)
            VAR_11->type = VAR_4;
        else if ((VAR_14&0xff) == 4)
            VAR_11->type = VAR_3;
        else
            VAR_11->type = VAR_2;

        *VAR_12 = VAR_9;
        break;
    }
    case 134:
        VAR_13 = FUNC_2( VAR_10, VAR_11->u.expr.left, VAR_12 );
        if( VAR_13 != VAR_1 )
            return VAR_13;
        if( !*VAR_12 )
            return VAR_1;
        VAR_13 = FUNC_2( VAR_10, VAR_11->u.expr.right, VAR_12 );
        if( VAR_13 != VAR_1 )
            return VAR_13;


        if( ( VAR_11->u.expr.left->type == 132 ) ||
            ( VAR_11->u.expr.left->type == VAR_4 ) ||
            ( VAR_11->u.expr.right->type == 132 ) ||
            ( VAR_11->u.expr.right->type == VAR_4 ) )
        {
            switch( VAR_11->u.expr.op )
            {
            case 129:
            case 128:
                break;
            default:
                *VAR_12 = VAR_7;
                return VAR_0;
            }



            VAR_11->type = VAR_5;
        }

        break;
    case 131:
        if ( VAR_11->u.expr.left->type != 135 )
        {
            *VAR_12 = VAR_7;
            return VAR_0;
        }
        VAR_13 = FUNC_2( VAR_10, VAR_11->u.expr.left, VAR_12 );
        if( VAR_13 != VAR_1 )
            return VAR_13;
        break;
    case 133:
        *VAR_12 = 1;
        VAR_11->type = VAR_6;
        VAR_11->u.uval = VAR_11->u.ival;
        break;
    case 130:
        *VAR_12 = 1;
        break;
    case 132:
        *VAR_12 = 1;
        break;
    default:
        FUNC_0("Invalid expression type\n");
        *VAR_12 = 0;
        break;
    }

    return VAR_1;
}
