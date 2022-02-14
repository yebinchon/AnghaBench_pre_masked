
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int top; int bottom; int right; int left; } ;
struct TYPE_6__ {int top; int bottom; int right; int left; } ;
struct TYPE_7__ {TYPE_1__ rcChannel; } ;
typedef TYPE_2__ TRACKBAR_INFO ;
typedef int LRESULT ;
typedef TYPE_3__* LPRECT ;



__attribute__((used)) static inline LRESULT
FUNC_0 (const TRACKBAR_INFO *VAR_0, LPRECT VAR_1)
{
    if (VAR_1 == ((void*)0)) return 0;

    VAR_1->left = VAR_0->rcChannel.left;
    VAR_1->right = VAR_0->rcChannel.right;
    VAR_1->bottom = VAR_0->rcChannel.bottom;
    VAR_1->top = VAR_0->rcChannel.top;

    return 0;
}
