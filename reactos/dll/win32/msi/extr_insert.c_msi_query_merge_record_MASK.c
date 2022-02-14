
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {struct TYPE_15__* next; TYPE_2__* val; } ;
typedef TYPE_3__ column_info ;
typedef int UINT ;
struct TYPE_16__ {int hdr; } ;
struct TYPE_13__ {int ival; int sval; } ;
struct TYPE_14__ {int type; TYPE_1__ u; } ;
typedef TYPE_4__ MSIRECORD ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;



 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

MSIRECORD *FUNC_8( UINT VAR_0, const column_info *VAR_1, MSIRECORD *VAR_2 )
{
    MSIRECORD *VAR_3;
    DWORD VAR_4 = 1, VAR_5;

    VAR_3 = FUNC_1( VAR_0 );
    for( VAR_5=1; VAR_5 <= VAR_0; VAR_5++ )
    {
        if( !VAR_1 )
        {
            FUNC_5("Not enough elements in the list to insert\n");
            goto err;
        }
        switch( VAR_1->val->type )
        {
        case 129:
            FUNC_5("field %d -> %s\n", VAR_5, FUNC_6(VAR_1->val->u.sval));
            FUNC_4( VAR_3, VAR_5, VAR_1->val->u.sval );
            break;
        case 130:
            FUNC_3( VAR_3, VAR_5, VAR_1->val->u.ival );
            break;
        case 128:
            if( !VAR_2 )
                goto err;
            FUNC_2( VAR_2, VAR_4, VAR_3, VAR_5 );
            VAR_4++;
            break;
        default:
            FUNC_0("Unknown expression type %d\n", VAR_1->val->type);
        }
        VAR_1 = VAR_1->next;
    }

    return VAR_3;
err:
    FUNC_7( &VAR_3->hdr );
    return ((void*)0);
}
