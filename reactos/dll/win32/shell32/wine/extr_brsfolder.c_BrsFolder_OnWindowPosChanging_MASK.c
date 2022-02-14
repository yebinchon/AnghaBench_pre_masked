
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_9__ {TYPE_2__ szMin; TYPE_1__* lpBrowseInfo; } ;
typedef TYPE_3__ browse_info ;
struct TYPE_10__ {int flags; scalar_t__ cx; scalar_t__ cy; } ;
typedef TYPE_4__ WINDOWPOS ;
struct TYPE_7__ {int ulFlags; } ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static LRESULT FUNC_0(browse_info *VAR_2, WINDOWPOS *VAR_3)
{
    if ((VAR_2->lpBrowseInfo->ulFlags & VAR_0) && !(VAR_3->flags & VAR_1))
    {
        if (VAR_3->cx < VAR_2->szMin.cx)
            VAR_3->cx = VAR_2->szMin.cx;
        if (VAR_3->cy < VAR_2->szMin.cy)
            VAR_3->cy = VAR_2->szMin.cy;
    }
    return 0;
}
