
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_family; void* sin6_port; int sin6_addr; int member_0; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; void* sin_port; TYPE_1__ sin_addr; int member_0; } ;
struct sockaddr {int dummy; } ;
typedef int saddr6 ;
typedef int saddr4 ;




 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_5 ;
 int FUNC_1 (int,int ,char*,...) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int,char*,int *) ;
 int FUNC_5 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_6 (int,int,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_7, int VAR_8)
{
 struct sockaddr_in VAR_9 = {0};
 struct sockaddr_in VAR_10 = {0};
 struct sockaddr_in6 VAR_11 = {0};
 struct sockaddr_in6 VAR_12 = {0};
 struct sockaddr *VAR_13, *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 char VAR_18[1];

 switch (VAR_7) {
 case 129:
  VAR_9 = 129;
  VAR_9 = FUNC_2(VAR_0);
  VAR_9 = 0;

  VAR_10 = 129;
  if (!FUNC_4(VAR_7, VAR_1, &VAR_10))
   FUNC_1(1, VAR_5, "inet_pton failed: %s", VAR_1);
  VAR_10 = FUNC_3(VAR_4);

  VAR_16 = sizeof(VAR_9);
  VAR_13 = (struct sockaddr *)&VAR_9;
  VAR_14 = (struct sockaddr *)&VAR_10;
  break;
 case 128:
  VAR_11 = 128;
  VAR_11 = VAR_6;

  VAR_12 = 128;
  if (!FUNC_4(VAR_7, VAR_2, &VAR_12))
   FUNC_1(1, VAR_5, "inet_pton failed: %s", VAR_2);
  VAR_12 = FUNC_3(VAR_4);

  VAR_16 = sizeof(VAR_11);
  VAR_13 = (struct sockaddr *)&VAR_11;
  VAR_14 = (struct sockaddr *)&VAR_12;
  break;
 default:
  FUNC_1(1, 0, "Unsupported family %d", VAR_7);




  return -1;
 }
 VAR_15 = FUNC_6(VAR_7, VAR_8, 0);
 if (VAR_15 < 0)
  FUNC_1(1, VAR_5, "failed to create send socket");
 if (FUNC_0(VAR_15, VAR_13, VAR_16))
  FUNC_1(1, VAR_5, "failed to bind send socket");
 VAR_18[0] = 'a';
 VAR_17 = FUNC_5(VAR_15, VAR_18, 1, VAR_3, VAR_14, VAR_16);
 if (VAR_17 != 1)
  FUNC_1(1, VAR_5, "failed to sendto");

 return VAR_15;
}
