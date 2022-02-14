
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




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int VAR_3 ;
 int FUNC_3 (int,int ,char*,...) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,char*,int,int ) ;
 int FUNC_8 (int,int,int ) ;

__attribute__((used)) static void FUNC_9(int VAR_6, int VAR_7, int VAR_8)
{
 struct sockaddr_storage VAR_9, VAR_10;
 struct sockaddr_in *VAR_11, *VAR_12;
 struct sockaddr_in6 *VAR_13, *VAR_14;
 int VAR_15;

 switch (VAR_7) {
 case 129:
  VAR_11 = (struct sockaddr_in *)&VAR_9;
  VAR_11->sin_family = 129;
  VAR_11->sin_addr.s_addr = FUNC_4(VAR_0);
  VAR_11->sin_port = 0;

  VAR_12 = (struct sockaddr_in *)&VAR_10;
  VAR_12->sin_family = 129;
  VAR_12->sin_addr.s_addr = FUNC_4(VAR_1);
  VAR_12->sin_port = FUNC_5(VAR_2);
  break;
 case 128:
  VAR_13 = (struct sockaddr_in6 *)&VAR_9;
  VAR_13->sin6_family = 128;
  VAR_13->sin6_addr = VAR_4;
  VAR_13->sin6_port = 0;

  VAR_14 = (struct sockaddr_in6 *)&VAR_10;
  VAR_14->sin6_family = 128;
  VAR_14->sin6_addr = VAR_5;
  VAR_14->sin6_port = FUNC_5(VAR_2);
  break;
 default:
  FUNC_3(1, 0, "Unsupported family %d", VAR_7);
 }

 if (FUNC_6(VAR_6) < 0)
  FUNC_3(1, VAR_3, "failed to pin to node");

 VAR_15 = FUNC_8(VAR_7, VAR_8, 0);
 if (VAR_15 < 0)
  FUNC_3(1, VAR_3, "failed to create send socket");

 if (FUNC_0(VAR_15, (struct sockaddr *)&VAR_9, sizeof(VAR_9)))
  FUNC_3(1, VAR_3, "failed to bind send socket");

 if (FUNC_2(VAR_15, (struct sockaddr *)&VAR_10, sizeof(VAR_10)))
  FUNC_3(1, VAR_3, "failed to connect send socket");

 if (FUNC_7(VAR_15, "a", 1, 0) < 0)
  FUNC_3(1, VAR_3, "failed to send message");

 FUNC_1(VAR_15);
}
