
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* mqh_buffer; int mqh_queue; scalar_t__ mqh_segment; } ;
typedef TYPE_1__ shm_mq_handle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

void
FUNC_4(shm_mq_handle *VAR_1)
{

 FUNC_3(VAR_1->mqh_queue);


 if (VAR_1->mqh_segment)
  FUNC_1(VAR_1->mqh_segment,
        VAR_0,
        FUNC_0(VAR_1->mqh_queue));


 if (VAR_1->mqh_buffer != ((void*)0))
  FUNC_2(VAR_1->mqh_buffer);
 FUNC_2(VAR_1);
}
