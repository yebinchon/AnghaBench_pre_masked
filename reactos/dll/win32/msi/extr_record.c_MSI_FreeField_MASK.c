
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream; int szwVal; } ;
struct TYPE_5__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ MSIFIELD ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;





 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3( MSIFIELD *VAR_0 )
{
    switch( VAR_0->type )
    {
    case 130:
    case 132:
    case 131:
        break;
    case 128:
        FUNC_2( VAR_0->u.szwVal);
        break;
    case 129:
        FUNC_1( VAR_0->u.stream );
        break;
    default:
        FUNC_0("Invalid field type %d\n", VAR_0->type);
    }
}
