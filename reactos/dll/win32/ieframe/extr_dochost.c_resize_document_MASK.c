
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ view; } ;
struct TYPE_6__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int LRESULT ;
typedef int LONG ;
typedef TYPE_2__ DocHost ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static LRESULT FUNC_2(DocHost *VAR_0, LONG VAR_1, LONG VAR_2)
{
    RECT VAR_3 = {0, 0, VAR_1, VAR_2};

    FUNC_1("(%p)->(%d %d)\n", VAR_0, VAR_1, VAR_2);

    if(VAR_0->view)
        FUNC_0(VAR_0->view, &VAR_3);

    return 0;
}
