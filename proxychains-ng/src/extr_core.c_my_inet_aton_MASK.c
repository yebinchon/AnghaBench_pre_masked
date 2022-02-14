
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_family; int sin6_addr; } ;
struct sockaddr_in {int sin_addr; int sin_family; } ;
struct addrinfo_data {int sockaddr_space; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, struct addrinfo_data* VAR_3)
{
 int VAR_4;
 ((struct sockaddr_in *) &VAR_3->sockaddr_space)->sin_family = VAR_0;
 VAR_4 = FUNC_0(VAR_2, &((struct sockaddr_in *) &VAR_3->sockaddr_space)->sin_addr);
 if(VAR_4 || !FUNC_2(VAR_2)) return VAR_4;
 VAR_4 = FUNC_1(VAR_1, VAR_2, &((struct sockaddr_in6 *) &VAR_3->sockaddr_space)->sin6_addr);
 if(VAR_4) ((struct sockaddr_in6 *) &VAR_3->sockaddr_space)->sin6_family = VAR_1;
 return VAR_4;
}
