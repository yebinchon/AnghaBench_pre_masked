
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int InformHostOnTxComplete; int * pucTxCommandBuffer; } ;
typedef int INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int ) ;
 TYPE_1__ VAR_6 ;

INT32 FUNC_3(UINT32 VAR_7)
{
 INT32 VAR_8;
 UINT8 *VAR_9;
 UINT8 *VAR_10;


 if ((VAR_7 & VAR_2) == VAR_2)
 {
  VAR_6.InformHostOnTxComplete = 0;



  if (VAR_7 == VAR_2)
  {
   return 0;
  }

  VAR_7 &= ~VAR_2;
  VAR_7 |= VAR_3;
 }
 else
 {
  VAR_6.InformHostOnTxComplete = 1;
 }

 VAR_8 = VAR_0;
 VAR_9 = VAR_6.pucTxCommandBuffer;
 VAR_10 = (UINT8 *)(VAR_9 + VAR_4);


 VAR_10 = FUNC_1(VAR_10, VAR_7);


 FUNC_2(VAR_1,
  VAR_9, VAR_5);


 FUNC_0(VAR_1, &VAR_8);

 return(VAR_8);
}
