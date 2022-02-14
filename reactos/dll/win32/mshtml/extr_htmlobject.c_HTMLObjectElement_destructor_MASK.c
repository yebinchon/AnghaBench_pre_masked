
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_1__ element; scalar_t__ plugin_host; } ;
struct TYPE_7__ {TYPE_2__ plugin_container; } ;
typedef TYPE_3__ HTMLObjectElement ;
typedef int HTMLDOMNode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(HTMLDOMNode *VAR_0)
{
    HTMLObjectElement *VAR_1 = FUNC_2(VAR_0);

    if(VAR_1->plugin_container.plugin_host)
        FUNC_1(VAR_1->plugin_container.plugin_host);

    FUNC_0(&VAR_1->plugin_container.element.node);
}
