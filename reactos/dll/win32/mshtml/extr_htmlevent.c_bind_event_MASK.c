
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int eventid_t ;
struct TYPE_10__ {TYPE_2__* data; } ;
struct TYPE_9__ {TYPE_4__ dispex; } ;
struct TYPE_8__ {TYPE_1__* vtbl; } ;
struct TYPE_7__ {int (* bind_event ) (TYPE_4__*,int ) ;} ;
typedef TYPE_3__ EventTarget ;


 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_2(EventTarget *VAR_0, eventid_t VAR_1)
{
    if(VAR_0->dispex.data->vtbl->bind_event)
        VAR_0->dispex.data->vtbl->bind_event(&VAR_0->dispex, VAR_1);
    else
        FUNC_0("Unsupported event binding on target %p\n", VAR_0);
}
