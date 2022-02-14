
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {int dummy; } ;
struct TYPE_2__ {int ival; int sval; int propval; int expr; } ;
struct expr {int type; TYPE_1__ u; } ;
typedef int UINT ;
typedef int LONGLONG ;
typedef int INT_PTR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct table const*,int ,int *,int*,int *) ;
 int FUNC_2 (struct table const*,int ,int ,int*,int *) ;
 int FUNC_3 (struct table const*,int ,int *,int*,int *) ;

HRESULT FUNC_4( const struct table *VAR_5, UINT VAR_6, const struct expr *VAR_7, LONGLONG *VAR_8, UINT *VAR_9 )
{
    if (!VAR_7)
    {
        *VAR_8 = 1;
        *VAR_9 = VAR_2;
        return VAR_3;
    }
    switch (VAR_7->type)
    {
    case 132:
        return FUNC_1( VAR_5, VAR_6, &VAR_7->u.expr, VAR_8, VAR_9 );

    case 128:
        return FUNC_3( VAR_5, VAR_6, &VAR_7->u.expr, VAR_8, VAR_9 );

    case 130:
        return FUNC_2( VAR_5, VAR_6, VAR_7->u.propval, VAR_8, VAR_9 );

    case 129:
        *VAR_8 = (INT_PTR)VAR_7->u.sval;
        *VAR_9 = VAR_1;
        return VAR_3;

    case 131:
        *VAR_8 = VAR_7->u.ival;
        *VAR_9 = VAR_2;
        return VAR_3;

    case 133:
        *VAR_8 = VAR_7->u.ival;
        *VAR_9 = VAR_0;
        return VAR_3;

    default:
        FUNC_0("invalid expression type\n");
        break;
    }
    return VAR_4;
}
