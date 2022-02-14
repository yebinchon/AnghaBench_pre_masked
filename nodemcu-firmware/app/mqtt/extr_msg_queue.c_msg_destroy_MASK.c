
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
struct TYPE_6__ {TYPE_1__ msg; } ;
typedef TYPE_2__ msg_queue_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(msg_queue_t *VAR_0){
  if(!VAR_0) return;
  if(VAR_0->msg.data){
    FUNC_0(VAR_0->msg.data);
    VAR_0->msg.data = ((void*)0);
  }
  FUNC_0(VAR_0);
}
