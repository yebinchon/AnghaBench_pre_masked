
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {char* ai_canonname; int ai_flags; int ai_socktype; int ai_family; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct addrinfo*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 int FUNC_5 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_6(char *VAR_3, int VAR_4)
{
 struct addrinfo VAR_5, *VAR_6 ;
 int VAR_7 = 0;

 FUNC_3(VAR_3, VAR_4);
 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.ai_family = VAR_0;
 VAR_5.ai_socktype = VAR_2;
 VAR_5.ai_flags = VAR_1;

 VAR_7 = FUNC_2(VAR_3, ((void*)0), &VAR_5, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_5(VAR_3, VAR_4, "getaddrinfo failed: 0x%x %s",
   VAR_7, FUNC_1(VAR_7));
  return;
 }
 FUNC_5(VAR_3, VAR_4, "%s", VAR_6->ai_canonname);
 FUNC_0(VAR_6);
}
