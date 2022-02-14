
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_family; void* sin6_port; int sin6_addr; } ;
struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {int sin_family; void* sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int saddr ;
typedef int daddr ;
typedef int cpu_set_t ;
typedef int cpu_set ;




 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 int VAR_3 ;
 int FUNC_4 (int,int ,char*,...) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int ,int,int *) ;
 scalar_t__ FUNC_9 (int,char*,int,int ) ;
 int FUNC_10 (int,int,int ) ;

__attribute__((used)) static void FUNC_11(int VAR_6, int VAR_7, int VAR_8)
{
 struct sockaddr_storage VAR_9, VAR_10;
 struct sockaddr_in *VAR_11, *VAR_12;
 struct sockaddr_in6 *VAR_13, *VAR_14;
 cpu_set_t VAR_15;
 int VAR_16;

 switch (VAR_7) {
 case 129:
  VAR_11 = (struct sockaddr_in *)&VAR_9;
  VAR_11->sin_family = 129;
  VAR_11->sin_addr.s_addr = FUNC_5(VAR_0);
  VAR_11->sin_port = 0;

  VAR_12 = (struct sockaddr_in *)&VAR_10;
  VAR_12->sin_family = 129;
  VAR_12->sin_addr.s_addr = FUNC_5(VAR_1);
  VAR_12->sin_port = FUNC_6(VAR_2);
  break;
 case 128:
  VAR_13 = (struct sockaddr_in6 *)&VAR_9;
  VAR_13->sin6_family = 128;
  VAR_13->sin6_addr = VAR_4;
  VAR_13->sin6_port = 0;

  VAR_14 = (struct sockaddr_in6 *)&VAR_10;
  VAR_14->sin6_family = 128;
  VAR_14->sin6_addr = VAR_5;
  VAR_14->sin6_port = FUNC_6(VAR_2);
  break;
 default:
  FUNC_4(1, 0, "Unsupported family %d", VAR_7);
 }

 FUNC_7(&VAR_15, 0, sizeof(VAR_15));
 FUNC_0(VAR_6, &VAR_15);
 if (FUNC_8(0, sizeof(VAR_15), &VAR_15) < 0)
  FUNC_4(1, VAR_3, "failed to pin to cpu");

 VAR_16 = FUNC_10(VAR_7, VAR_8, 0);
 if (VAR_16 < 0)
  FUNC_4(1, VAR_3, "failed to create send socket");

 if (FUNC_1(VAR_16, (struct sockaddr *)&VAR_9, sizeof(VAR_9)))
  FUNC_4(1, VAR_3, "failed to bind send socket");

 if (FUNC_3(VAR_16, (struct sockaddr *)&VAR_10, sizeof(VAR_10)))
  FUNC_4(1, VAR_3, "failed to connect send socket");

 if (FUNC_9(VAR_16, "a", 1, 0) < 0)
  FUNC_4(1, VAR_3, "failed to send message");

 FUNC_2(VAR_16);
}
