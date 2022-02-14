
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; void* sin6_port; int sin6_family; int member_0; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; void* sin_port; int sin_family; int member_0; } ;
typedef int addr6 ;
typedef int addr4 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int,char**) ;

int FUNC_4(int VAR_7, char **VAR_8)
{
 FUNC_3(VAR_7, VAR_8);

 if (VAR_4) {
  struct sockaddr_in6 VAR_9 = {0};

  VAR_9 = VAR_1;
  VAR_9 = FUNC_2(VAR_5);
  VAR_9 = VAR_6;
  FUNC_0((void *)&VAR_9, sizeof(VAR_9));
 }

 if (VAR_3) {
  struct sockaddr_in VAR_10 = {0};

  VAR_10 = VAR_0;
  VAR_10 = FUNC_2(VAR_5);
  VAR_10 = FUNC_1(VAR_2);
  FUNC_0((void *)&VAR_10, sizeof(VAR_10));
 }

 return 0;
}
