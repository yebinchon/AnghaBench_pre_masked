
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int right; int bottom; int top; int left; } ;
struct TYPE_9__ {int hWnd; TYPE_1__ size; int control; int fWindowless; } ;
struct TYPE_8__ {int right; int bottom; int top; int left; } ;
typedef TYPE_2__ RECTL ;
typedef int IViewObject ;
typedef TYPE_3__ IOCS ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,void**) ;
 int FUNC_2 (int *,int ,int ,int *,int *,int ,int ,TYPE_2__*,TYPE_2__*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6( IOCS *VAR_2 )
{
    IViewObject *VAR_3;

    if ( !VAR_2->control || !VAR_2->fWindowless )
        return;

    if ( FUNC_5( FUNC_1( VAR_2->control, &VAR_1, (void**)&VAR_3 ) ) )
    {
        HDC VAR_4 = FUNC_0( VAR_2->hWnd );
        RECTL VAR_5;

        VAR_5.left = VAR_2->size.left; VAR_5.top = VAR_2->size.top;
        VAR_5.bottom = VAR_2->size.bottom; VAR_5.right = VAR_2->size.right;

        FUNC_2( VAR_3, VAR_0, ~0, ((void*)0), ((void*)0), 0, VAR_4, &VAR_5, &VAR_5, ((void*)0), 0 );
        FUNC_3( VAR_3 );
        FUNC_4( VAR_2->hWnd, VAR_4 );
    }
}
