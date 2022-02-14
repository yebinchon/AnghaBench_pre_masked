
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pusNumberOfHandles ;
typedef scalar_t__ UINT16 ;
struct TYPE_2__ {int NumberOfReleasedPackets; int usNumberOfFreeBuffers; } ;
typedef scalar_t__ INT32 ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,scalar_t__) ;
 TYPE_1__ VAR_4 ;

INT32 FUNC_1(CHAR *VAR_5)
{

 INT32 VAR_6, VAR_7;
 UINT16 VAR_8;
 UINT16 VAR_9=0;
 CHAR *VAR_10;

 FUNC_0((CHAR *)VAR_5,VAR_3,VAR_9);
 VAR_10 = ((CHAR *)VAR_5 +
  VAR_3 + sizeof(VAR_9));
 VAR_6 = 0;

 for(VAR_8 = 0; VAR_8 < VAR_9 ; VAR_8++)
 {
  FUNC_0(VAR_10, VAR_1, VAR_7);
  VAR_6 += VAR_7;
  VAR_10 += VAR_2;
 }

 VAR_4.usNumberOfFreeBuffers += VAR_6;
 VAR_4.NumberOfReleasedPackets += VAR_6;

 return(VAR_0);
}
