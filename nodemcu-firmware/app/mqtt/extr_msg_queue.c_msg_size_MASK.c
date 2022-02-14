
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ msg_queue_t ;



int FUNC_0(msg_queue_t **VAR_0){
  if(!VAR_0 || !*VAR_0){
    return 0;
  }
  int VAR_1 = 1;
  msg_queue_t *VAR_2 = *VAR_0;
  if(VAR_2){
    while(VAR_2->next!=((void*)0)){
      VAR_2 = VAR_2->next;
      VAR_1++;
    }
  }
  return VAR_1;
}
