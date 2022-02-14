
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {scalar_t__ usEventOrDataReceived; scalar_t__* pucReceivedData; } ;
typedef int INT32 ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;

INT32 FUNC_2(void)
{
 UINT32 VAR_2 = 0;
 UINT8 *VAR_3;

 if (VAR_1.usEventOrDataReceived != 0)
 {
  VAR_3 = (VAR_1.pucReceivedData);

  if (*VAR_3 == VAR_0)
  {


   if (FUNC_1((CHAR *)VAR_3) == 1)
   {



    VAR_1.usEventOrDataReceived = 0;

    VAR_2 = 1;
    FUNC_0();
   }
  }
 }

 return VAR_2;
}
