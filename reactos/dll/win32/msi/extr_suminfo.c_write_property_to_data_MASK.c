
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int pszVal; int filetime; int lVal; int iVal; } ;
struct TYPE_5__ {TYPE_1__ u; int vt; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef int LPBYTE ;
typedef int DWORD ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static UINT FUNC_3( const PROPVARIANT *VAR_1, LPBYTE VAR_2 )
{
    DWORD VAR_3 = 0;

    if( VAR_1->vt == VAR_0 )
        return VAR_3;


    VAR_3 += FUNC_0( VAR_2, VAR_3, VAR_1->vt );
    switch( VAR_1->vt )
    {
    case 130:
        VAR_3 += FUNC_0( VAR_2, VAR_3, VAR_1->u.iVal );
        break;
    case 129:
        VAR_3 += FUNC_0( VAR_2, VAR_3, VAR_1->u.lVal );
        break;
    case 131:
        VAR_3 += FUNC_1( VAR_2, VAR_3, &VAR_1->u.filetime );
        break;
    case 128:
        VAR_3 += FUNC_2( VAR_2, VAR_3, VAR_1->u.pszVal );
        break;
    }
    return VAR_3;
}
