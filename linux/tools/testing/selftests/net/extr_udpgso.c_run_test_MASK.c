
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int tv_usec; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int ) ;
 int VAR_7 ;
 int FUNC_3 (int,int ,char*,...) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,struct sockaddr*,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int,int ,int ,struct timeval*,int) ;
 int FUNC_10 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct sockaddr *VAR_8, socklen_t VAR_9)
{
 struct timeval VAR_10 = { .tv_usec = 100 * 1000 };
 int VAR_11, VAR_12, VAR_13;

 VAR_11 = FUNC_10(VAR_8->sa_family, VAR_2, 0);
 if (VAR_11 == -1)
  FUNC_3(1, VAR_7, "socket r");

 if (FUNC_0(VAR_11, VAR_8, VAR_9))
  FUNC_3(1, VAR_7, "bind");


 if (FUNC_9(VAR_11, VAR_3, VAR_4, &VAR_10, sizeof(VAR_10)))
  FUNC_3(1, VAR_7, "setsockopt rcv timeout");

 VAR_12 = FUNC_10(VAR_8->sa_family, VAR_2, 0);
 if (VAR_12 == -1)
  FUNC_3(1, VAR_7, "socket t");


 FUNC_7(VAR_12, VAR_8->sa_family == VAR_0);

 if (VAR_6) {
  FUNC_6(VAR_12, VAR_1);
  FUNC_5(VAR_12, VAR_11, VAR_8, VAR_9);
 }

 if (VAR_5) {
  FUNC_6(VAR_12, VAR_1 + 100);
  FUNC_8(VAR_1, VAR_8->sa_family == VAR_0);

  if (FUNC_2(VAR_12, VAR_8, VAR_9))
   FUNC_3(1, VAR_7, "connect");

  VAR_13 = FUNC_4(VAR_12, VAR_8->sa_family == VAR_0);
  if (VAR_13 != VAR_1)
   FUNC_3(1, 0, "bad path mtu %u\n", VAR_13);

  FUNC_5(VAR_12, VAR_11, VAR_8, 0 );
 }

 if (FUNC_1(VAR_12))
  FUNC_3(1, VAR_7, "close t");
 if (FUNC_1(VAR_11))
  FUNC_3(1, VAR_7, "close r");
}
