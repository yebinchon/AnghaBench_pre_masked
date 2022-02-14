
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iNumberOfBytes; } ;
typedef TYPE_1__ tBsdReadReturnParams ;
typedef int socklen_t ;
typedef int sockaddr ;
typedef int UINT8 ;
struct TYPE_5__ {int * pucTxCommandBuffer; } ;
typedef int INT32 ;
typedef scalar_t__ INT16 ;
typedef scalar_t__ CC3000_EXPORT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static INT16 FUNC_4(INT32 VAR_3, void *VAR_4, INT32 VAR_5, INT32 VAR_6, sockaddr *VAR_7,
 socklen_t *VAR_8, INT32 VAR_9)
{
 UINT8 *VAR_10, *VAR_11;
 tBsdReadReturnParams VAR_12;

 VAR_10 = VAR_2.pucTxCommandBuffer;
 VAR_11 = (VAR_10 + VAR_0);


 VAR_11 = FUNC_2(VAR_11, VAR_3);
 VAR_11 = FUNC_2(VAR_11, VAR_5);
 VAR_11 = FUNC_2(VAR_11, VAR_6);


 FUNC_3(VAR_9, VAR_10, VAR_1);


 FUNC_1(VAR_9, &VAR_12);


 if (VAR_12.iNumberOfBytes > 0)
 {


  FUNC_0(VAR_4, (UINT8 *)VAR_7, (UINT8 *)VAR_8);
 }

 CC3000_EXPORT(VAR_13) = VAR_12.iNumberOfBytes;

 return(VAR_12.iNumberOfBytes);
}
