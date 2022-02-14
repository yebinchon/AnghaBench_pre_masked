
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int top; int left; } ;
struct TYPE_10__ {TYPE_3__ mines_rect; TYPE_3__ face_rect; TYPE_3__ timer_rect; scalar_t__ time; TYPE_3__ counter_rect; scalar_t__ num_flags; scalar_t__ mines; } ;
struct TYPE_9__ {int rcPaint; } ;
typedef int RECT ;
typedef TYPE_1__ PAINTSTRUCT ;
typedef int HDC ;
typedef TYPE_2__ BOARD ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( HDC VAR_0, HDC VAR_1, PAINTSTRUCT *VAR_2, BOARD *VAR_3 )
{
    RECT VAR_4;

    if( FUNC_3( &VAR_4, &VAR_2->rcPaint, &VAR_3->counter_rect ) )
        FUNC_1( VAR_0, VAR_1, VAR_3, VAR_3->mines - VAR_3->num_flags,
                  VAR_3->counter_rect.left,
                  VAR_3->counter_rect.top );

    if( FUNC_3( &VAR_4, &VAR_2->rcPaint, &VAR_3->timer_rect ) )
        FUNC_1( VAR_0, VAR_1, VAR_3, VAR_3->time,
                  VAR_3->timer_rect.left,
                  VAR_3->timer_rect.top );

    if( FUNC_3( &VAR_4, &VAR_2->rcPaint, &VAR_3->face_rect ) )
        FUNC_0( VAR_0, VAR_1, VAR_3 );

    if( FUNC_3( &VAR_4, &VAR_2->rcPaint, &VAR_3->mines_rect ) )
        FUNC_2( VAR_0, VAR_1, VAR_3 );
}
