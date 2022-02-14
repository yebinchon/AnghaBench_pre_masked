
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; int sin6_port; int sin6_family; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (struct sockaddr_in6*,int ,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, const char *VAR_2,
         struct sockaddr_in6 *VAR_3)
{
 FUNC_4(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->sin6_family = VAR_0;
 VAR_3->sin6_port = FUNC_0(1025);

 if (FUNC_2(VAR_0, VAR_1, &VAR_3->sin6_addr) != 1) {
  FUNC_3("Invalid IPv6: %s", VAR_1);
  return -1;
 }

 VAR_3->sin6_scope_id = FUNC_1(VAR_2);
 if (!VAR_3->sin6_scope_id) {
  FUNC_3("Failed to get index of iface: %s", VAR_2);
  return -1;
 }

 return 0;
}
