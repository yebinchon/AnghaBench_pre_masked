
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int expr; int uval; int column; } ;
struct expr {int type; TYPE_1__ u; } ;
typedef int UINT ;
struct TYPE_8__ {int rec_index; } ;
typedef TYPE_2__ MSIWHEREVIEW ;
typedef int MSIRECORD ;
typedef int INT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;







 int FUNC_1 (TYPE_2__*,int const*,int *,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int const*,int *,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int const*,int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,int const*,int *) ;

__attribute__((used)) static UINT FUNC_6( MSIWHEREVIEW *VAR_3, const UINT VAR_4[],
                            struct expr *VAR_5, INT *VAR_6, MSIRECORD *VAR_7 )
{
    UINT VAR_8, VAR_9;

    if( !VAR_5 )
    {
        *VAR_6 = VAR_2;
        return VAR_1;
    }

    switch( VAR_5->type )
    {
    case 134:
        VAR_8 = FUNC_5(&VAR_5->u.column, VAR_4, &VAR_9);
        if( VAR_8 != VAR_1 )
            return VAR_8;
        *VAR_6 = VAR_9 - 0x8000;
        return VAR_1;

    case 133:
        VAR_8 = FUNC_5(&VAR_5->u.column, VAR_4, &VAR_9);
        if( VAR_8 != VAR_1 )
            return VAR_8;
        *VAR_6 = VAR_9 - 0x80000000;
        return VAR_8;

    case 129:
        *VAR_6 = VAR_5->u.uval;
        return VAR_1;

    case 132:
        return FUNC_1(VAR_3, VAR_4, &VAR_5->u.expr, VAR_6, VAR_7);

    case 130:
        return FUNC_2( VAR_3, VAR_4, &VAR_5->u.expr, VAR_6, VAR_7 );

    case 131:
        return FUNC_4( VAR_3, VAR_4, &VAR_5->u.expr, VAR_6, VAR_7 );

    case 128:
        *VAR_6 = FUNC_3( VAR_7, ++VAR_3->rec_index );
        return VAR_1;

    default:
        FUNC_0("Invalid expression type\n");
        return VAR_0;
    }

    return VAR_1;
}
