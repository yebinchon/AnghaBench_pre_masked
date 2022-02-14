
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int QueueHandle_t ;
typedef int OsiTime_t ;
typedef int OsiReturnVal_e ;
typedef scalar_t__ OsiMsgQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,void*,int *) ;

OsiReturnVal_e FUNC_2(OsiMsgQ_t* VAR_5, void* VAR_6 , OsiTime_t VAR_7)
{
 VAR_4 = VAR_2;
    if(VAR_3 == FUNC_1((QueueHandle_t) *VAR_5, VAR_6, &VAR_4 ))
    {
  FUNC_0 ();
  return VAR_0;
    }
 else
 {
  return VAR_1;
 }
}
