
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {void* bottom; void* right; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_6__ {TYPE_1__ rcDesktop; } ;
typedef TYPE_2__* PPREVIEW_DATA ;
typedef void* INT ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static VOID
FUNC_1(INT VAR_0, INT VAR_1, PPREVIEW_DATA VAR_2)
{

    VAR_2->rcDesktop.left = 0;
    VAR_2->rcDesktop.top = 0;
    VAR_2->rcDesktop.right = VAR_0;
    VAR_2->rcDesktop.bottom = VAR_1;

    FUNC_0(VAR_2);
}
