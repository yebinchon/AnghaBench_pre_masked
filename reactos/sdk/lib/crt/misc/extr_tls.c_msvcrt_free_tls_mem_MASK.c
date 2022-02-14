
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* time_buffer; struct TYPE_4__* wcserror_buffer; struct TYPE_4__* strerror_buffer; struct TYPE_4__* wasctime_buffer; struct TYPE_4__* asctime_buffer; struct TYPE_4__* efcvt_buffer; int handle; } ;
typedef TYPE_1__ thread_data_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int VAR_0 ;

void FUNC_4(void)
{
  thread_data_t *VAR_1 = FUNC_3(VAR_0);

  if (VAR_1)
  {
    FUNC_0(VAR_1->handle);
    FUNC_2(FUNC_1(),0,VAR_1->efcvt_buffer);
    FUNC_2(FUNC_1(),0,VAR_1->asctime_buffer);
    FUNC_2(FUNC_1(),0,VAR_1->wasctime_buffer);
    FUNC_2(FUNC_1(),0,VAR_1->strerror_buffer);
    FUNC_2(FUNC_1(),0,VAR_1->wcserror_buffer);
    FUNC_2(FUNC_1(),0,VAR_1->time_buffer);




  }
  FUNC_2(FUNC_1(), 0, VAR_1);
}
