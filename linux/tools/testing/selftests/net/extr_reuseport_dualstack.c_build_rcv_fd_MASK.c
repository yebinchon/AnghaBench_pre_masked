
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_family; void* sin6_port; int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; void* sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int opt ;
typedef int addr ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_5 ;
 int FUNC_1 (int,int ,char*,...) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;
 int FUNC_6 (int,int,int ) ;

__attribute__((used)) static void FUNC_7(int VAR_7, int VAR_8, int *VAR_9, int VAR_10)
{
 struct sockaddr_storage VAR_11;
 struct sockaddr_in *VAR_12;
 struct sockaddr_in6 *VAR_13;
 int VAR_14, VAR_15;

 switch (VAR_7) {
 case 129:
  VAR_12 = (struct sockaddr_in *)&VAR_11;
  VAR_12->sin_family = 129;
  VAR_12->sin_addr.s_addr = FUNC_2(VAR_0);
  VAR_12->sin_port = FUNC_3(VAR_1);
  break;
 case 128:
  VAR_13 = (struct sockaddr_in6 *)&VAR_11;
  VAR_13->sin6_family = 128;
  VAR_13->sin6_addr = VAR_6;
  VAR_13->sin6_port = FUNC_3(VAR_1);
  break;
 default:
  FUNC_1(1, 0, "Unsupported family %d", VAR_7);
 }

 for (VAR_15 = 0; VAR_15 < VAR_10; ++VAR_15) {
  VAR_9[VAR_15] = FUNC_6(VAR_7, VAR_8, 0);
  if (VAR_9[VAR_15] < 0)
   FUNC_1(1, VAR_5, "failed to create receive socket");

  VAR_14 = 1;
  if (FUNC_5(VAR_9[VAR_15], VAR_3, VAR_4, &VAR_14,
          sizeof(VAR_14)))
   FUNC_1(1, VAR_5, "failed to set SO_REUSEPORT");

  if (FUNC_0(VAR_9[VAR_15], (struct sockaddr *)&VAR_11, sizeof(VAR_11)))
   FUNC_1(1, VAR_5, "failed to bind receive socket");

  if (VAR_8 == VAR_2 && FUNC_4(VAR_9[VAR_15], 10))
   FUNC_1(1, VAR_5, "failed to listen on receive port");
 }
}
