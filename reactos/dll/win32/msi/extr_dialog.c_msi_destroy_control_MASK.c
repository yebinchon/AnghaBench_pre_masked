
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hDll; struct TYPE_4__* type; struct TYPE_4__* tabnext; scalar_t__ hIcon; scalar_t__ hBitmap; struct TYPE_4__* value; struct TYPE_4__* property; int entry; } ;
typedef TYPE_1__ msi_control ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5( msi_control *VAR_0 )
{
    FUNC_3( &VAR_0->entry );

    FUNC_4( VAR_0->property );
    FUNC_4( VAR_0->value );
    if( VAR_0->hBitmap )
        FUNC_0( VAR_0->hBitmap );
    if( VAR_0->hIcon )
        FUNC_1( VAR_0->hIcon );
    FUNC_4( VAR_0->tabnext );
    FUNC_4( VAR_0->type );
    if (VAR_0->hDll)
        FUNC_2( VAR_0->hDll );
    FUNC_4( VAR_0 );
}
