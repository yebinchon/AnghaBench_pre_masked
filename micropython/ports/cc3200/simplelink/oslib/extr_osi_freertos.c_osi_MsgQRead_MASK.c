
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
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,void*,int ) ;

OsiReturnVal_e FUNC_1(OsiMsgQ_t* VAR_3, void* VAR_4 , OsiTime_t VAR_5)
{

 if( VAR_2 == FUNC_0((QueueHandle_t)*VAR_3,VAR_4,VAR_5) )
 {
  return VAR_0;
 }
 else
 {
  return VAR_1;
 }
}
