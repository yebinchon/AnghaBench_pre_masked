
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v6only ;
struct sockaddr_in6 {int sin6_family; int sin6_addr; int sin6_port; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; TYPE_1__ sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int reuseaddr ;
typedef int addr6 ;
typedef int addr4 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int,int ,int ) ;

int FUNC_9(int VAR_11, int VAR_12)
{
 int VAR_13 = -1;
 int VAR_14 = 1;
 int VAR_15 = 1;
 int VAR_16;
 int VAR_17 = -1;
 struct sockaddr *VAR_18;
 int VAR_19 = VAR_11 ? VAR_1 : VAR_0;

 struct sockaddr_in6 VAR_20 = {
  .sin6_family = VAR_1,
  .sin6_port = FUNC_3(VAR_6),
  .sin6_addr = VAR_10
 };
 struct sockaddr_in VAR_21 = {
  .sin_family = VAR_0,
  .sin_port = FUNC_3(VAR_6),
  .sin_addr.s_addr = VAR_12 ? FUNC_2(VAR_2) : FUNC_4("127.0.0.1"),
 };


 if (VAR_11) {
  VAR_18 = (struct sockaddr*)&VAR_20;
  VAR_16 = sizeof(VAR_20);
 } else {
  VAR_18 = (struct sockaddr*)&VAR_21;
  VAR_16 = sizeof(VAR_21);
 }

 if ((VAR_13 = FUNC_8(VAR_19, VAR_7, VAR_4)) < 0) {
  FUNC_6("socket");
  goto out;
 }

 if (VAR_11 && FUNC_7(VAR_13, VAR_3, VAR_5, (void*)&VAR_15,
          sizeof(VAR_15)) < 0) {
  FUNC_6("setsockopt IPV6_V6ONLY");
  goto out;
 }

 if (FUNC_7(VAR_13, VAR_8, VAR_9, &VAR_14,
         sizeof(VAR_14)) < 0) {
  FUNC_6("setsockopt SO_REUSEADDR");
  goto out;
 }

 if (FUNC_0(VAR_13, VAR_18, VAR_16) < 0) {
  FUNC_6("bind");
  goto out;
 }

 if (VAR_12)
  return VAR_13;

 if (FUNC_5(VAR_13, 1) < 0) {
  FUNC_6("listen");
  goto out;
 }
 return VAR_13;
out:
 FUNC_1(VAR_13);
 return VAR_17;
}
