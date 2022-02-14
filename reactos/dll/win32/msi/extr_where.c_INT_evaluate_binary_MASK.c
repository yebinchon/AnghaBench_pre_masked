
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct complex_expr {int op; int right; int left; } ;
typedef scalar_t__ UINT ;
typedef int MSIWHEREVIEW ;
typedef int MSIRECORD ;
typedef scalar_t__ INT ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,scalar_t__ const*,int ,scalar_t__*,int *) ;

__attribute__((used)) static INT FUNC_2( MSIWHEREVIEW *VAR_5, const UINT VAR_6[],
                                const struct complex_expr *VAR_7, INT *VAR_8, MSIRECORD *VAR_9 )
{
    UINT VAR_10, VAR_11;
    INT VAR_12, VAR_13;

    VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7->left, &VAR_12, VAR_9);
    if (VAR_10 != VAR_2 && VAR_10 != VAR_0)
        return VAR_10;
    VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7->right, &VAR_13, VAR_9);
    if (VAR_11 != VAR_2 && VAR_11 != VAR_0)
        return VAR_11;

    if (VAR_10 == VAR_0 || VAR_11 == VAR_0)
    {
        if (VAR_10 == VAR_11)
        {
            *VAR_8 = VAR_4;
            return VAR_0;
        }

        if (VAR_7->op == 135)
        {
            if ((VAR_10 == VAR_0 && !VAR_13) || (VAR_11 == VAR_0 && !VAR_12))
            {
                *VAR_8 = VAR_3;
                return VAR_2;
            }
        }
        else if (VAR_7->op == 128)
        {
            if ((VAR_10 == VAR_0 && VAR_13) || (VAR_11 == VAR_0 && VAR_12))
            {
                *VAR_8 = VAR_4;
                return VAR_2;
            }
        }

        *VAR_8 = VAR_4;
        return VAR_0;
    }

    switch( VAR_7->op )
    {
    case 134:
        *VAR_8 = ( VAR_12 == VAR_13 );
        break;
    case 135:
        *VAR_8 = ( VAR_12 && VAR_13 );
        break;
    case 128:
        *VAR_8 = ( VAR_12 || VAR_13 );
        break;
    case 132:
        *VAR_8 = ( VAR_12 > VAR_13 );
        break;
    case 130:
        *VAR_8 = ( VAR_12 < VAR_13 );
        break;
    case 131:
        *VAR_8 = ( VAR_12 <= VAR_13 );
        break;
    case 133:
        *VAR_8 = ( VAR_12 >= VAR_13 );
        break;
    case 129:
        *VAR_8 = ( VAR_12 != VAR_13 );
        break;
    default:
        FUNC_0("Unknown operator %d\n", VAR_7->op );
        return VAR_1;
    }

    return VAR_2;
}
