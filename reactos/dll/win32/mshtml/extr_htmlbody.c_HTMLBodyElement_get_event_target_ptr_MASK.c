
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int event_target_t ;
struct TYPE_9__ {int * ptr; } ;
struct TYPE_10__ {TYPE_2__ event_target; TYPE_1__* doc; } ;
struct TYPE_11__ {TYPE_3__ node; } ;
struct TYPE_12__ {TYPE_4__ element; } ;
struct TYPE_13__ {TYPE_5__ textcont; } ;
struct TYPE_8__ {int * body_event_target; } ;
typedef int HTMLDOMNode ;
typedef TYPE_6__ HTMLBodyElement ;


 TYPE_6__* FUNC_0 (int *) ;

__attribute__((used)) static event_target_t **FUNC_1(HTMLDOMNode *VAR_0)
{
    HTMLBodyElement *VAR_1 = FUNC_0(VAR_0);

    return VAR_1->textcont.element.node.doc
        ? &VAR_1->textcont.element.node.doc->body_event_target
        : &VAR_1->textcont.element.node.event_target.ptr;
}
