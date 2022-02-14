
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBsdReadReturnParams ;
typedef int sockaddr ;
typedef int sd ;
typedef int len ;
typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int* pucTxCommandBuffer; int NumberOfSentPackets; } ;
typedef int INT32 ;
typedef int INT16 ;


 int FUNC_0 (int*,int*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int* FUNC_3 (int*,int) ;
 int FUNC_4 (int,int*,int,int,int*,int) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static INT16 FUNC_5(INT32 VAR_6, const void *VAR_7, INT32 VAR_8, INT32 VAR_9,
 const sockaddr *VAR_10, INT32 VAR_11, INT32 VAR_12)
{
 UINT8 VAR_13=0, VAR_14;
 UINT8 *VAR_15, *VAR_16=0, *VAR_17;
 UINT32 VAR_18=0;
 INT16 VAR_19;
 tBsdReadReturnParams VAR_20;


 if (0 != (VAR_19 = FUNC_1(VAR_6)))
 {
  return VAR_19;
 }


 VAR_5.NumberOfSentPackets++;


 VAR_15 = VAR_5.pucTxCommandBuffer;
 VAR_17 = (VAR_15 + VAR_3);


 switch(VAR_12)
 {
 case 128:
  {
   VAR_18 = VAR_8 + sizeof(VAR_8) + sizeof(VAR_8);
   VAR_14 = 8;
   VAR_13 = VAR_4;
   VAR_16 = VAR_15 + VAR_3 + VAR_4;
   break;
  }

 case 129:
  {
   VAR_11 = 0;
   VAR_10 = ((void*)0);
   VAR_13 = VAR_0;
   VAR_16 = VAR_15 + VAR_3 + VAR_0;
   break;
  }

 default:
  {
   break;
  }
 }


 VAR_17 = FUNC_3(VAR_17, VAR_6);
 VAR_17 = FUNC_3(VAR_17, VAR_13 - sizeof(VAR_6));
 VAR_17 = FUNC_3(VAR_17, VAR_8);
 VAR_17 = FUNC_3(VAR_17, VAR_9);

 if (VAR_12 == 128)
 {
  VAR_17 = FUNC_3(VAR_17, VAR_18);
  VAR_17 = FUNC_3(VAR_17, VAR_14);
 }


 FUNC_0(VAR_16, ((UINT8 *)VAR_7), VAR_8);


 if (VAR_12 == 128)
 {
  FUNC_0(VAR_16, ((UINT8 *)VAR_10), VAR_11);
 }


 FUNC_4(VAR_12, VAR_15, VAR_13, VAR_8,(UINT8*)VAR_10, VAR_11);

 if (VAR_12 == 128)
  FUNC_2(VAR_2, &VAR_20);
 else
  FUNC_2(VAR_1, &VAR_20);

 return (VAR_8);
}
