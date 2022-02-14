
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int Context; int (* ParentResize ) (int ,scalar_t__,scalar_t__) ;int hParent; TYPE_1__* rcRebar; int * hRebar; } ;
struct TYPE_7__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; int member_0; } ;
struct TYPE_6__ {void* right; void* bottom; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PTOOLBAR_DOCKS ;
typedef void* LONG ;
typedef size_t DOCK_POSITION ;



 int FUNC_0 (int ,TYPE_2__*) ;

 int VAR_0 ;

 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static VOID
FUNC_3(PTOOLBAR_DOCKS VAR_1,
                   DOCK_POSITION VAR_2)
{
    LONG VAR_3;

    VAR_1->rcRebar[VAR_2].left = 0;
    VAR_1->rcRebar[VAR_2].top = 0;

    VAR_3 = (LONG)FUNC_1(VAR_1->hRebar[VAR_2],
                               VAR_0,
                               0,
                               0);

    switch (VAR_2)
    {
        case 128:
        case 131:
            VAR_1->rcRebar[VAR_2].bottom = VAR_3;
            break;

        case 130:
        case 129:
            VAR_1->rcRebar[VAR_2].right = VAR_3;
            break;

        default:
            break;
    }

    if (VAR_1->ParentResize != ((void*)0))
    {
        RECT VAR_4 = {0};

        FUNC_0(VAR_1->hParent,
                      &VAR_4);

        VAR_1->ParentResize(VAR_1->Context,
                              VAR_4.right - VAR_4.left,
                              VAR_4.bottom - VAR_4.top);
    }
}
