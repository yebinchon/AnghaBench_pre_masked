
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sockaddr_in6 {int sin6_family; void* sin6_port; int sin6_addr; int member_0; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; void* sin_port; TYPE_1__ sin_addr; int member_0; } ;
struct sockaddr {int dummy; } ;
typedef int qlen ;
typedef int opt ;
typedef int addr6 ;
typedef int addr4 ;




 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_8 ;
 int FUNC_2 (int,int ,char*,...) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (int,int ,int ,int*,int) ;
 int FUNC_9 (int,int,int ) ;

__attribute__((used)) static void FUNC_10(int VAR_10, int VAR_11, int *VAR_12)
{
 struct sockaddr_in VAR_13 = {0};
 struct sockaddr_in6 VAR_14 = {0};
 struct sockaddr *VAR_15;
 int VAR_16 = 1, VAR_17, VAR_18;
 int VAR_19 = 100;
 uint32_t VAR_20[8];

 switch (VAR_10) {
 case 129:
  VAR_13 = VAR_10;
  VAR_13 = FUNC_3(VAR_0);
  VAR_13 = FUNC_4(VAR_2);
  VAR_18 = sizeof(VAR_13);
  VAR_15 = (struct sockaddr *)&VAR_13;
  break;
 case 128:
  VAR_14 = 128;
  VAR_14 = VAR_9;
  VAR_14 = FUNC_4(VAR_2);
  VAR_18 = sizeof(VAR_14);
  VAR_15 = (struct sockaddr *)&VAR_14;
  break;
 default:
  FUNC_2(1, 0, "Unsupported family %d", VAR_10);




  return;
 }
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_20); VAR_17++)
  VAR_20[VAR_17] = FUNC_6();
 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  VAR_12[VAR_17] = FUNC_9(VAR_10, VAR_11, 0);
  if (VAR_12[VAR_17] < 0)
   FUNC_2(1, VAR_8, "failed to create receive socket");
  if (FUNC_8(VAR_12[VAR_17], VAR_4, VAR_6, &VAR_16,
          sizeof(VAR_16)))
   FUNC_2(1, VAR_8, "failed to set SO_REUSEPORT");
  if (FUNC_1(VAR_12[VAR_17], VAR_15, VAR_18))
   FUNC_2(1, VAR_8, "failed to bind receive socket");
  if (FUNC_8(VAR_12[VAR_17], VAR_5, VAR_7, &VAR_19,
          sizeof(VAR_19)))
   FUNC_2(1, VAR_8, "failed to set TCP_FASTOPEN");
  FUNC_7(VAR_12[VAR_17], VAR_20);
  if (VAR_11 == VAR_3 && FUNC_5(VAR_12[VAR_17], 10))
   FUNC_2(1, VAR_8, "failed to listen on receive port");
 }
}
