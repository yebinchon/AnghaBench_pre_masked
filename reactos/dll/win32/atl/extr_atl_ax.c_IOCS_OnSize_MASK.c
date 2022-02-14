
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_13__ {int control; scalar_t__ fInPlace; TYPE_2__ size; } ;
struct TYPE_11__ {scalar_t__ cy; scalar_t__ cx; } ;
typedef TYPE_1__ SIZEL ;
typedef TYPE_2__* LPCRECT ;
typedef int IOleInPlaceObject ;
typedef TYPE_3__ IOCS ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int ,int *,void**) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6( IOCS* VAR_2, LPCRECT VAR_3 )
{
    SIZEL VAR_4, VAR_5;

    VAR_2->size = *VAR_3;

    if ( !VAR_2->control )
        return;

    VAR_4.cx = VAR_3->right - VAR_3->left;
    VAR_4.cy = VAR_3->bottom - VAR_3->top;
    FUNC_0( &VAR_4, &VAR_5 );
    FUNC_4( VAR_2->control, VAR_0, &VAR_5 );

    if ( VAR_2->fInPlace )
    {
        IOleInPlaceObject *VAR_6;

        if ( FUNC_5( FUNC_3( VAR_2->control, &VAR_1, (void**)&VAR_6 ) ) )
        {
            FUNC_2( VAR_6, VAR_3, VAR_3 );
            FUNC_1( VAR_6 );
        }
    }
}
