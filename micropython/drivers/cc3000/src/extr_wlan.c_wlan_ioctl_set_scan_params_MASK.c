
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int * pucTxCommandBuffer; } ;
typedef int INT32 ;


 int FUNC_0 (int *,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int*) ;
 int * FUNC_2 (int *,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;
 TYPE_1__ VAR_4 ;

INT32 FUNC_4(UINT32 VAR_5, UINT32 VAR_6,
 UINT32 VAR_7,
 UINT32 VAR_8,
 UINT32 VAR_9,INT32 VAR_10,
 UINT32 VAR_11,
 UINT32 VAR_12,
 UINT32 *VAR_13)
{
 UINT32 VAR_14;
 UINT8 *VAR_15;
 UINT8 *VAR_16;

 VAR_15 = VAR_4.pucTxCommandBuffer;
 VAR_16 = (VAR_15 + VAR_1);


 VAR_16 = FUNC_2(VAR_16, 36);
 VAR_16 = FUNC_2(VAR_16, VAR_5);
 VAR_16 = FUNC_2(VAR_16, VAR_6);
 VAR_16 = FUNC_2(VAR_16, VAR_7);
 VAR_16 = FUNC_2(VAR_16, VAR_8);
 VAR_16 = FUNC_2(VAR_16, VAR_9);
 VAR_16 = FUNC_2(VAR_16, VAR_10);
 VAR_16 = FUNC_2(VAR_16, VAR_11);
 VAR_16 = FUNC_2(VAR_16, VAR_12);
 FUNC_0(VAR_16, VAR_13, sizeof(UINT32) *
  VAR_2);


 FUNC_3(VAR_0,
  VAR_15, VAR_3);


 FUNC_1(VAR_0, &VAR_14);

 return(VAR_14);
}
