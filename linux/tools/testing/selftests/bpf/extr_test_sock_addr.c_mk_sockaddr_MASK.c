
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_family; int sin6_addr; void* sin6_port; } ;
struct sockaddr_in {int sin_family; int sin_addr; void* sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned short) ;
 int FUNC_1 (int,char const*,void*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct sockaddr*,int ,int) ;

__attribute__((used)) static int FUNC_4(int VAR_2, const char *VAR_3, unsigned short VAR_4,
         struct sockaddr *VAR_5, socklen_t VAR_6)
{
 struct sockaddr_in6 *VAR_7;
 struct sockaddr_in *VAR_8;

 if (VAR_2 != VAR_0 && VAR_2 != VAR_1) {
  FUNC_2("Unsupported address family");
  return -1;
 }

 FUNC_3(VAR_5, 0, VAR_6);

 if (VAR_2 == VAR_0) {
  if (VAR_6 < sizeof(struct sockaddr_in))
   return -1;
  VAR_8 = (struct sockaddr_in *)VAR_5;
  VAR_8->sin_family = VAR_2;
  VAR_8->sin_port = FUNC_0(VAR_4);
  if (FUNC_1(VAR_2, VAR_3, (void *)&VAR_8->sin_addr) != 1) {
   FUNC_2("Invalid IPv4: %s", VAR_3);
   return -1;
  }
 } else if (VAR_2 == VAR_1) {
  if (VAR_6 < sizeof(struct sockaddr_in6))
   return -1;
  VAR_7 = (struct sockaddr_in6 *)VAR_5;
  VAR_7->sin6_family = VAR_2;
  VAR_7->sin6_port = FUNC_0(VAR_4);
  if (FUNC_1(VAR_2, VAR_3, (void *)&VAR_7->sin6_addr) != 1) {
   FUNC_2("Invalid IPv6: %s", VAR_3);
   return -1;
  }
 }

 return 0;
}
