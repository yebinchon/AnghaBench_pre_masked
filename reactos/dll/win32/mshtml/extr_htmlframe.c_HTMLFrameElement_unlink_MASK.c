
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsIDOMHTMLFrameElement ;
struct TYPE_4__ {int * nsframe; } ;
struct TYPE_5__ {TYPE_1__ framebase; } ;
typedef TYPE_2__ HTMLFrameElement ;
typedef int HTMLDOMNode ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(HTMLDOMNode *VAR_0)
{
    HTMLFrameElement *VAR_1 = FUNC_0(VAR_0);

    if(VAR_1->framebase.nsframe) {
        nsIDOMHTMLFrameElement *VAR_2 = VAR_1->framebase.nsframe;

        VAR_1->framebase.nsframe = ((void*)0);
        FUNC_1(VAR_2);
    }
}
