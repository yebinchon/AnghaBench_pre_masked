
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Self; } ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ PROGRESS_INFO ;
typedef int LONG ;
typedef scalar_t__ HTHEME ;


 int FUNC_0 (scalar_t__,int ,int ,int ,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_4 ( const PROGRESS_INFO *VAR_2, LONG VAR_3,
                                 const RECT* VAR_4 )
{
    HTHEME VAR_5 = FUNC_1 (VAR_2->Self);
    if (VAR_5)
    {
        int VAR_6;
        if (FUNC_3( FUNC_0( VAR_5, 0, 0, VAR_1, &VAR_6 )))
            return VAR_6;
    }

    if (VAR_3 & VAR_0)
        return FUNC_2 (VAR_4->right - VAR_4->left, 2, 3);
    else
        return FUNC_2 (VAR_4->bottom - VAR_4->top, 2, 3);
}
