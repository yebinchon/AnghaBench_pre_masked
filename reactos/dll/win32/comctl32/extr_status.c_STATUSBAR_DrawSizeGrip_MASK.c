
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {void* bottom; void* top; void* right; void* left; } ;
struct TYPE_10__ {void* cy; void* cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ RECT ;
typedef TYPE_2__* LPRECT ;
typedef scalar_t__ HTHEME ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,TYPE_2__*,int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,TYPE_2__*,int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_5 ;
 void* FUNC_6 (void*,void*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8 (HTHEME VAR_6, HDC VAR_7, LPRECT VAR_8)
{
    RECT VAR_9 = *VAR_8;

    FUNC_5("draw size grip %s\n", FUNC_7(VAR_8));

    if (VAR_6)
    {
        SIZE VAR_10;
        if (FUNC_4 (FUNC_3 (VAR_6, VAR_7, VAR_4, 0, VAR_8,
            VAR_5, &VAR_10)))
        {
            VAR_9.left = VAR_9.right - VAR_10.cx;
            VAR_9.top = VAR_9.bottom - VAR_10.cy;
            if (FUNC_4 (FUNC_1(VAR_6, VAR_7, VAR_4, 0, &VAR_9, ((void*)0))))
                return;
        }
    }

    VAR_9.left = FUNC_6( VAR_9.left, VAR_9.right - FUNC_2(VAR_2) - 1 );
    VAR_9.top = FUNC_6( VAR_9.top, VAR_9.bottom - FUNC_2(VAR_3) - 1 );
    FUNC_0( VAR_7, &VAR_9, VAR_1, VAR_0 );
}
