
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int* pucTxCommandBuffer; } ;
typedef int INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (int ,int*) ;
 int* FUNC_2 (int*,int ) ;
 int FUNC_3 (int ,int*,int ) ;
 TYPE_1__ VAR_3 ;

INT32 FUNC_4(UINT32 VAR_4, UINT32 VAR_5, UINT32 VAR_6, UINT8 *VAR_7)
{
 UINT8 VAR_8 = 0xFF;
 UINT8 *VAR_9;
 UINT8 *VAR_10;

 VAR_9 = VAR_3.pucTxCommandBuffer;
 VAR_10 = (VAR_9 + VAR_1);


 VAR_10 = FUNC_2(VAR_10, VAR_4);
 VAR_10 = FUNC_2(VAR_10, VAR_5);
 VAR_10 = FUNC_2(VAR_10, VAR_6);


 FUNC_3(VAR_0, VAR_9, VAR_2);
 FUNC_1(VAR_0, &VAR_8);







 FUNC_0(VAR_7, 0, 0);

 return(VAR_8);
}
