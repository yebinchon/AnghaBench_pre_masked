
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char const*,char const*,struct addrinfo const*,struct addrinfo**) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char const*,char const*,struct addrinfo const*,struct addrinfo**) ;

int FUNC_4(const char *VAR_1, const char *VAR_2, const struct addrinfo *VAR_3, struct addrinfo **VAR_4) {
 FUNC_0();
 FUNC_1("getaddrinfo: %s %s\n", VAR_1 ? VAR_1 : "null", VAR_2 ? VAR_2 : "null");

 if(VAR_0)
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
}
