
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_9__ {TYPE_1__ droppedRect; int self; } ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_2__* LPRECT ;
typedef TYPE_3__* LPHEADCOMBO ;


 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( LPHEADCOMBO VAR_0, LPRECT VAR_1)
{



    FUNC_0(VAR_0->self, VAR_1);

    VAR_1->right = VAR_1->left + VAR_0->droppedRect.right - VAR_0->droppedRect.left;
    VAR_1->bottom = VAR_1->top + VAR_0->droppedRect.bottom - VAR_0->droppedRect.top;

}
