
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct in_addr {int s_addr; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; int * h_addr_list; } ;
typedef int php_socket ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char*,struct in_addr*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,char*) ;
 struct hostent* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;

int FUNC_7(struct sockaddr_in *VAR_4, char *VAR_5, php_socket *VAR_6)
{
 struct in_addr VAR_7;
 struct hostent *VAR_8;

 if (FUNC_2(VAR_5, &VAR_7)) {
  VAR_4->sin_addr.s_addr = VAR_7.s_addr;
 } else {
  if (FUNC_6(VAR_5) > VAR_2 || ! (VAR_8 = FUNC_5(VAR_5))) {




   FUNC_0(VAR_6, "Host lookup failed", (-10000 - VAR_3));

   return 0;
  }
  if (VAR_8->h_addrtype != VAR_0) {
   FUNC_4(((void*)0), VAR_1, "Host lookup failed: Non AF_INET domain returned on AF_INET socket");
   return 0;
  }
  FUNC_3(&(VAR_4->sin_addr.s_addr), VAR_8->h_addr_list[0], VAR_8->h_length);
 }

 return 1;
}
