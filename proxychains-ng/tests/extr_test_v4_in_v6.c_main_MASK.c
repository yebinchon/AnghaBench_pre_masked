
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; int sin6_port; int sin6_family; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {scalar_t__ ai_addr; int ai_family; } ;
typedef int a ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct addrinfo*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int *,struct addrinfo const*,struct addrinfo**) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (int *,int *) ;

int FUNC_9(void) {
 struct addrinfo *VAR_7;
 struct addrinfo *VAR_8;
 const struct addrinfo VAR_9 = { .ai_family = VAR_0 };
 int VAR_10, VAR_11;


 VAR_10 = FUNC_4("www.example.com", ((void*)0), &VAR_9, &VAR_7);
 if (VAR_10 != 0) {
  FUNC_1(VAR_6, "error in getaddrinfo: %s\n", FUNC_3(VAR_10));
  return VAR_2;
 }
 if((VAR_11=FUNC_7(VAR_0, VAR_5, VAR_4)) == -1) {
  FUNC_6("socket");
  return VAR_2;
 }
 struct sockaddr_in6 VAR_12 = { .sin6_family = VAR_1,
                           .sin6_port = FUNC_5(80) };
 FUNC_8(&((struct sockaddr_in *)VAR_7->ai_addr)->sin_addr, &VAR_12.sin6_addr);
 FUNC_2(VAR_7);

 if((VAR_10 = FUNC_0(VAR_11, (struct sockaddr *)&VAR_12, sizeof(VAR_12))) == -1) {
  FUNC_6("connect");
  return VAR_2;
 }

 return VAR_3;
}
