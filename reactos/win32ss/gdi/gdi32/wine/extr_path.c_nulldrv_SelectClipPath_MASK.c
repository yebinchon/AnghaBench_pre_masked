
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hdc; } ;
typedef TYPE_1__* PHYSDEV ;
typedef int INT ;
typedef scalar_t__ HRGN ;
typedef int BOOL ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

BOOL FUNC_4( PHYSDEV VAR_2, INT VAR_3 )
{
    BOOL VAR_4 = VAR_1;
    HRGN VAR_5 = FUNC_3( VAR_2->hdc );
    FUNC_0("nulldrv_SelectClipPath dev %p\n",VAR_2);
    if (VAR_5)
    {
        VAR_4 = FUNC_2( VAR_2->hdc, VAR_5, VAR_3 ) != VAR_0;
        FUNC_1( VAR_5 );
    }
    return VAR_4;

}
