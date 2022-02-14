
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_2__ {int * pucTxCommandBuffer; } ;
typedef int INT32 ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int*) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_4 (int ,int *,int) ;
 TYPE_1__ VAR_6 ;

INT32 FUNC_5(UINT32 VAR_7,
 UINT8* VAR_8,
 UINT32 VAR_9,
 UINT8 *VAR_10,
 UINT32 VAR_11,
 UINT32 VAR_12,
 UINT32 VAR_13,
 UINT32 VAR_14,
 UINT8* VAR_15,
 UINT32 VAR_16)
{
 UINT16 VAR_17=0;
 INT32 VAR_18;
 UINT8 *VAR_19;
 INT32 VAR_20 = 0;
 UINT8 *VAR_21;
 UINT8 VAR_22[] = {0, 0, 0, 0, 0, 0};

 VAR_19 = VAR_6.pucTxCommandBuffer;
 VAR_21 = (VAR_19 + VAR_2);

 VAR_21 = FUNC_3(VAR_21, VAR_7);


 switch (VAR_7)
 {

 case 131:
  {
   VAR_21 = FUNC_3(VAR_21, 0x00000014);
   VAR_21 = FUNC_3(VAR_21, VAR_9);
   VAR_21 = FUNC_2(VAR_21, 0);
   if(VAR_10)
   {
    FUNC_0(VAR_21, VAR_10, VAR_0);
   }
   else
   {
    FUNC_0(VAR_21, VAR_22, VAR_0);
   }
   VAR_21 = FUNC_3(VAR_21, VAR_11);
   FUNC_0(VAR_21, VAR_8, VAR_9);

   VAR_17 = VAR_3 + VAR_9;
  }
  break;


 case 130:
  {
   VAR_21 = FUNC_3(VAR_21, 0x00000020);
   VAR_21 = FUNC_3(VAR_21, VAR_9);
   VAR_21 = FUNC_2(VAR_21, 0);
   if(VAR_10)
   {
    FUNC_0(VAR_21, VAR_10, VAR_0);
   }
   else
   {
    FUNC_0(VAR_21, VAR_22, VAR_0);
   }
   VAR_21 = FUNC_3(VAR_21, VAR_11);
   VAR_21 = FUNC_3(VAR_21, 0x0000000C + VAR_9);
   VAR_21 = FUNC_3(VAR_21, VAR_12);
   VAR_21 = FUNC_3(VAR_21, VAR_13);
   FUNC_0(VAR_21, VAR_8, VAR_9);

   for(VAR_20 = 0; VAR_20 < 4; VAR_20++)
   {
    UINT8 *VAR_23 = &VAR_15[VAR_20 * VAR_12];

    FUNC_0(VAR_21, VAR_23, VAR_12);
   }

   VAR_17 = VAR_4 + VAR_9 +
    VAR_12 * 4;

  }
  break;



 case 129:
 case 128:
  {
   VAR_21 = FUNC_3(VAR_21, 0x00000028);
   VAR_21 = FUNC_3(VAR_21, VAR_9);
   VAR_21 = FUNC_2(VAR_21, 0);
   if(VAR_10)
   {
    FUNC_0(VAR_21, VAR_10, VAR_0);
   }
   else
   {
    FUNC_0(VAR_21, VAR_22, VAR_0);
   }
   VAR_21 = FUNC_3(VAR_21, VAR_11);
   VAR_21 = FUNC_3(VAR_21, VAR_12);
   VAR_21 = FUNC_3(VAR_21, VAR_13);
   VAR_21 = FUNC_3(VAR_21, VAR_14);
   VAR_21 = FUNC_3(VAR_21, 0x00000008 + VAR_9);
   VAR_21 = FUNC_3(VAR_21, VAR_16);
   FUNC_0(VAR_21, VAR_8, VAR_9);
   FUNC_0(VAR_21, VAR_15, VAR_16);

   VAR_17 = VAR_5 + VAR_9 + VAR_16;
  }

  break;
 }


 FUNC_4(VAR_1,
  VAR_19, VAR_17);


 FUNC_1(VAR_1, &VAR_18);

 return(VAR_18);
}
