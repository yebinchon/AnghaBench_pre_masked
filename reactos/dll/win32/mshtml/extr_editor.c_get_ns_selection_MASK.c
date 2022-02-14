
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsISelection ;
struct TYPE_5__ {TYPE_1__* window; } ;
struct TYPE_4__ {int nswindow; } ;
typedef TYPE_2__ HTMLDocument ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int **) ;

__attribute__((used)) static nsISelection *FUNC_3(HTMLDocument *VAR_0)
{
    nsISelection *VAR_1 = ((void*)0);
    nsresult VAR_2;

    VAR_2 = FUNC_2(VAR_0->window->nswindow, &VAR_1);
    if(FUNC_1(VAR_2))
        FUNC_0("GetSelection failed %08x\n", VAR_2);

    return VAR_1;

}
