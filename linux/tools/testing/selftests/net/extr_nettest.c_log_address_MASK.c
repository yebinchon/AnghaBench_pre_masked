
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int addrstr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *,char*,int) ;
 int FUNC_2 (char*,char const*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(const char *VAR_4, struct sockaddr *VAR_5)
{
 char VAR_6[64];

 if (VAR_2)
  return;

 if (VAR_5->sa_family == VAR_0) {
  struct sockaddr_in *VAR_7 = (struct sockaddr_in *) VAR_5;

  FUNC_2("%s %s:%d",
   VAR_4,
   FUNC_1(VAR_0, &VAR_7->sin_addr, VAR_6,
      sizeof(VAR_6)),
   FUNC_3(VAR_7->sin_port));

 } else if (VAR_5->sa_family == VAR_1) {
  struct sockaddr_in6 *VAR_8 = (struct sockaddr_in6 *) VAR_5;

  FUNC_2("%s [%s]:%d",
   VAR_4,
   FUNC_1(VAR_1, &VAR_8->sin6_addr, VAR_6,
      sizeof(VAR_6)),
   FUNC_3(VAR_8->sin6_port));
 }

 FUNC_4("\n");

 FUNC_0(VAR_3);
}
