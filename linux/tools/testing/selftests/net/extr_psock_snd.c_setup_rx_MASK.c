
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tv ;
struct timeval {int tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; int member_0; } ;
typedef int raddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int ,int ,struct timeval*,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct timeval VAR_8 = { .tv_usec = 100 * 1000 };
 struct sockaddr_in VAR_9 = {0};
 int VAR_10;

 VAR_10 = FUNC_5(VAR_2, VAR_3, 0);
 if (VAR_10 == -1)
  FUNC_1(1, VAR_7, "socket r");

 if (FUNC_4(VAR_10, VAR_4, VAR_5, &VAR_8, sizeof(VAR_8)))
  FUNC_1(1, VAR_7, "setsockopt rcv timeout");

 VAR_9.sin_family = VAR_0;
 VAR_9.sin_port = FUNC_3(VAR_6);
 VAR_9.sin_addr.s_addr = FUNC_2(VAR_1);

 if (FUNC_0(VAR_10, (void *)&VAR_9, sizeof(VAR_9)))
  FUNC_1(1, VAR_7, "bind r");

 return VAR_10;
}
