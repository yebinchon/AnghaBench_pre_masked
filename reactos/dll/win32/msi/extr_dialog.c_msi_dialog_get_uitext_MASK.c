
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* package; } ;
typedef TYPE_2__ msi_dialog ;
typedef char WCHAR ;
struct TYPE_9__ {int hdr; } ;
struct TYPE_7__ {int db; } ;
typedef TYPE_3__ MSIRECORD ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;


 TYPE_3__* FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static LPWSTR FUNC_4( msi_dialog *VAR_0, LPCWSTR VAR_1 )
{
    MSIRECORD *VAR_2;
    LPWSTR VAR_3;

    static const WCHAR VAR_4[] = {
        's','e','l','e','c','t',' ','*',' ',
        'f','r','o','m',' ','`','U','I','T','e','x','t','`',' ',
        'w','h','e','r','e',' ','`','K','e','y','`',' ','=',' ','\'','%','s','\'',0
    };

    VAR_2 = FUNC_0( VAR_0->package->db, VAR_4, VAR_1 );
    if (!VAR_2) return ((void*)0);
    VAR_3 = FUNC_3( FUNC_1( VAR_2, 2 ) );
    FUNC_2( &VAR_2->hdr );
    return VAR_3;
}
