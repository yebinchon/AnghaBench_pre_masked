
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int * pucTxCommandBuffer; } ;
typedef int INT8 ;
typedef int INT32 ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 TYPE_1__ VAR_4 ;

INT32 FUNC_4(UINT32 *VAR_5, UINT32 *VAR_6,UINT32 *VAR_7, UINT32 *VAR_8)
{
 INT8 VAR_9;
 UINT8 *VAR_10;
 UINT8 *VAR_11;

 VAR_9 = VAR_0;
 VAR_10 = VAR_4.pucTxCommandBuffer;
 VAR_11 = (VAR_10 + VAR_2);


 FUNC_0(VAR_11,VAR_5,4);
 FUNC_0(VAR_11,VAR_6,4);
 FUNC_0(VAR_11,VAR_7,4);
 VAR_11 = FUNC_2(VAR_11, 0);
 FUNC_0(VAR_11,VAR_8,4);


 FUNC_3(VAR_1, VAR_10, VAR_3);


 FUNC_1(VAR_1, &VAR_9);

 return(VAR_9);
}
