
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock_args {int expected_raddr; scalar_t__ has_expected_raddr; int expected_laddr; scalar_t__ has_expected_laddr; } ;
typedef int socklen_t ;
typedef int local_addr ;


 int FUNC_0 (struct sockaddr*,int *,char*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (char const*,struct sockaddr*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_5(int VAR_1, struct sock_args *VAR_2)
{
 struct sockaddr_in6 VAR_3, VAR_4;
 socklen_t VAR_5 = sizeof(VAR_3);
 struct sockaddr *VAR_6;
 const char *VAR_7;
 int VAR_8 = 0;

 VAR_7 = VAR_0 ? "server local:" : "client local:";
 VAR_6 = (struct sockaddr *) &VAR_3;
 if (FUNC_2(VAR_1, VAR_6, &VAR_5) == 0) {
  FUNC_3(VAR_7, VAR_6);

  if (VAR_2->has_expected_laddr) {
   VAR_8 = FUNC_0(VAR_6, &VAR_2->expected_laddr,
       "local");
  }
 } else {
  FUNC_4("getsockname failed");
 }

 VAR_6 = (struct sockaddr *) &VAR_4;
 VAR_7 = VAR_0 ? "server peer:" : "client peer:";
 if (FUNC_1(VAR_1, VAR_6, &VAR_5) == 0) {
  FUNC_3(VAR_7, VAR_6);

  if (VAR_2->has_expected_raddr) {
   VAR_8 |= FUNC_0(VAR_6, &VAR_2->expected_raddr,
       "remote");
  }
 } else {
  FUNC_4("getpeername failed");
 }

 return VAR_8;
}
