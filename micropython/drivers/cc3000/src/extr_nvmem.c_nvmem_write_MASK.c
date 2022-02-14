
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int * pucTxCommandBuffer; } ;
typedef int INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *,int,int) ;
 int FUNC_3 (int *,int *,int) ;
 TYPE_1__ VAR_6 ;

INT32 FUNC_4(UINT32 VAR_7, UINT32 VAR_8, UINT32 VAR_9, UINT8 *VAR_10)
{
 INT32 VAR_11;
 UINT8 *VAR_12;
 UINT8 *VAR_13;

 VAR_11 = VAR_0;

 VAR_12 = VAR_6.pucTxCommandBuffer;
 VAR_13 = (VAR_12 + VAR_5 + VAR_2);


 VAR_13 = FUNC_1(VAR_13, VAR_7);
 VAR_13 = FUNC_1(VAR_13, 12);
 VAR_13 = FUNC_1(VAR_13, VAR_8);
 VAR_13 = FUNC_1(VAR_13, VAR_9);

 FUNC_3((VAR_12 + VAR_5 + VAR_2 +
  VAR_4),VAR_10,VAR_8);


 FUNC_2(VAR_1, VAR_12, VAR_4,
  VAR_8);

 FUNC_0(VAR_3, &VAR_11);

 return(VAR_11);
}
