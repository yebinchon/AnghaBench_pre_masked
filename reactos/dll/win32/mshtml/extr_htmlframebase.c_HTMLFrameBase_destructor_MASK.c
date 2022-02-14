
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int node; } ;
struct TYPE_7__ {TYPE_2__ element; TYPE_1__* content_window; } ;
struct TYPE_5__ {int * frame_element; } ;
typedef TYPE_3__ HTMLFrameBase ;


 int FUNC_0 (int *) ;

void FUNC_1(HTMLFrameBase *VAR_0)
{
    if(VAR_0->content_window)
        VAR_0->content_window->frame_element = ((void*)0);

    FUNC_0(&VAR_0->element.node);
}
