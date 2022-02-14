
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {TYPE_6__* window; } ;
struct TYPE_17__ {TYPE_7__ bsc; scalar_t__ is_doc_channel; } ;
typedef TYPE_8__ nsChannelBSC ;
struct TYPE_14__ {TYPE_4__* outer_window; } ;
struct TYPE_15__ {TYPE_5__ base; } ;
struct TYPE_12__ {TYPE_2__* inner_window; } ;
struct TYPE_13__ {TYPE_3__ base; } ;
struct TYPE_11__ {TYPE_1__* doc; } ;
struct TYPE_10__ {int skip_mutation_notif; } ;
typedef int HRESULT ;
typedef int BSCallback ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (int *) ;

__attribute__((used)) static HRESULT FUNC_1(BSCallback *VAR_2)
{
    nsChannelBSC *VAR_3 = FUNC_0(VAR_2);

    if(VAR_3->is_doc_channel)
        VAR_3->bsc.window->base.outer_window->base.inner_window->doc->skip_mutation_notif = VAR_0;

    return VAR_1;
}
