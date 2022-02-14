
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int package; } ;
typedef TYPE_1__ msi_dialog ;
struct TYPE_9__ {int attributes; int name; int hwnd; int property; } ;
typedef TYPE_2__ msi_control ;
typedef int LPWSTR ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_10( msi_dialog *VAR_3, msi_control *VAR_4 )
{
    LPWSTR VAR_5, VAR_6;
    BOOL VAR_7;
    BOOL VAR_8;

    VAR_7 = VAR_4->attributes & VAR_2;
    VAR_6 = FUNC_4( VAR_3, VAR_4->property, VAR_7 );

    VAR_5 = FUNC_9( VAR_4->hwnd );

    if ( !FUNC_7( VAR_5 ) )
    {

        FUNC_0("Invalid path %s\n", FUNC_3( VAR_5 ));
        VAR_8 = VAR_0;
        FUNC_1( VAR_4->hwnd );
    }
    else
    {
        VAR_8 = VAR_1;
        FUNC_5( VAR_3->package, VAR_6, VAR_5 );
    }

    FUNC_6( VAR_3, VAR_4 );

    FUNC_2("edit %s contents changed, set %s\n", FUNC_3(VAR_4->name),
          FUNC_3(VAR_6));

    FUNC_8( VAR_5 );
    FUNC_8( VAR_6 );

    return VAR_8;
}
