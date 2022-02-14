
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int tv_usec; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int,int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ,struct timeval*,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sockaddr *VAR_4, socklen_t VAR_5)
{
 struct timeval VAR_6 = { .tv_usec = 100 * 1000 };
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4->sa_family, VAR_0, 0);
 if (VAR_7 == -1)
  FUNC_1(1, VAR_3, "socket r");

 if (FUNC_0(VAR_7, VAR_4, VAR_5))
  FUNC_1(1, VAR_3, "bind");

 if (FUNC_2(VAR_7, VAR_1, VAR_2, &VAR_6, sizeof(VAR_6)))
  FUNC_1(1, VAR_3, "setsockopt rcv timeout");

 return VAR_7;
}
