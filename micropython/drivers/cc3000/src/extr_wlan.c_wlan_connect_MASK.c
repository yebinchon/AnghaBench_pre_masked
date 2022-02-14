
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int * pucTxCommandBuffer; } ;
typedef int INT32 ;
typedef int CHAR ;
typedef int CC3000_EXPORT ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int*) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 TYPE_1__ VAR_5 ;

INT32 FUNC_5(UINT32 VAR_6, CHAR *VAR_7, INT32 VAR_8,
 UINT8 *VAR_9, UINT8 *VAR_10, INT32 VAR_11)
{
 INT32 VAR_12;
 UINT8 *VAR_13;
 UINT8 *VAR_14;
 UINT8 VAR_15[] = {0, 0, 0, 0, 0, 0};

 VAR_12 = VAR_0;
 VAR_13 = VAR_5.pucTxCommandBuffer;
 VAR_14 = (VAR_13 + VAR_3);


 VAR_14 = FUNC_3(VAR_14, 0x0000001c);
 VAR_14 = FUNC_3(VAR_14, VAR_8);
 VAR_14 = FUNC_3(VAR_14, VAR_6);
 VAR_14 = FUNC_3(VAR_14, 0x00000010 + VAR_8);
 VAR_14 = FUNC_3(VAR_14, VAR_11);
 VAR_14 = FUNC_2(VAR_14, 0);


 if(VAR_9)
 {
  FUNC_0(VAR_14, VAR_9, VAR_1);
 }
 else
 {
  FUNC_0(VAR_14, VAR_15, VAR_1);
 }

 FUNC_0(VAR_14, VAR_7, VAR_8);

 if(VAR_11 && VAR_10)
 {
  FUNC_0(VAR_14, VAR_10, VAR_11);
 }


 FUNC_4(VAR_2, VAR_13, VAR_4 +
  VAR_8 + VAR_11 - 1);


 FUNC_1(VAR_2, &VAR_12);
 CC3000_EXPORT(VAR_16) = VAR_12;

 return(VAR_12);
}
