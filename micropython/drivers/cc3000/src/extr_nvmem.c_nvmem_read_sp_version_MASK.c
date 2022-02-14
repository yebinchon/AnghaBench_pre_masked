
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_2__ {int * pucTxCommandBuffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 TYPE_1__ VAR_1 ;

UINT8 FUNC_2(UINT8* VAR_2)
{
 UINT8 *VAR_3;

 UINT8 VAR_4[5];

 VAR_3 = VAR_1.pucTxCommandBuffer;


 FUNC_1(VAR_0, VAR_3, 0);
 FUNC_0(VAR_0, VAR_4);


 *VAR_2 = VAR_4[3];

 *(VAR_2+1) = VAR_4[4];

 return(VAR_4[0]);
}
