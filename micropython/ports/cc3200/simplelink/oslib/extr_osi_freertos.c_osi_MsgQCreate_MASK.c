
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * QueueHandle_t ;
typedef int OsiReturnVal_e ;
typedef scalar_t__ OsiMsgQ_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (unsigned long,unsigned long) ;

OsiReturnVal_e FUNC_2(OsiMsgQ_t* VAR_1 ,
         char* VAR_2,
         unsigned long VAR_3,
         unsigned long VAR_4)
{
 QueueHandle_t VAR_5;


 VAR_5 = FUNC_1( VAR_4, VAR_3 );
 FUNC_0 (VAR_5 != ((void*)0));

 *VAR_1 = (OsiMsgQ_t)VAR_5;
 return VAR_0;
}
