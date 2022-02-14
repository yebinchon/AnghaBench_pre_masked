
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_12__ {TYPE_2__ ptMaxPosition; TYPE_1__ ptMaxSize; } ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ left; int bottom; int right; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ MINMAXINFO ;
typedef int HWND ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5( HWND VAR_2, HWND VAR_3, MINMAXINFO* VAR_4 )
{
    RECT VAR_5;

    FUNC_1( VAR_2, &VAR_5 );
    FUNC_0( &VAR_5, FUNC_2( VAR_3, VAR_1 ),
                        0, FUNC_2( VAR_3, VAR_0 ));

    VAR_4->ptMaxSize.x = VAR_5.right -= VAR_5.left;
    VAR_4->ptMaxSize.y = VAR_5.bottom -= VAR_5.top;

    VAR_4->ptMaxPosition.x = VAR_5.left;
    VAR_4->ptMaxPosition.y = VAR_5.top;

    FUNC_3("max rect %s\n", FUNC_4(&VAR_5));
}
