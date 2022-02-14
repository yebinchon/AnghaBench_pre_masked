
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*,char*,char*,int ) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

int FUNC_10(char *VAR_3, char *VAR_4)
{
 struct addrinfo VAR_5, *VAR_6, *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.ai_family = VAR_0;
 VAR_5.ai_socktype = VAR_2;


 VAR_9 = FUNC_5(VAR_3, VAR_4, &VAR_5, &VAR_6);
 if (VAR_9 < 0) {
  FUNC_2("getaddrinfo: %s service %s: %s", VAR_3, VAR_4,
      FUNC_4(VAR_9));
  return VAR_9;
 }


 for (VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->ai_next) {
  VAR_8 = FUNC_7(VAR_7->ai_family, VAR_7->ai_socktype,
    VAR_7->ai_protocol);
  if (VAR_8 < 0)
   continue;


  FUNC_9(VAR_8);

  FUNC_8(VAR_8);

  if (FUNC_1(VAR_8, VAR_7->ai_addr, VAR_7->ai_addrlen) == 0)
   break;

  FUNC_0(VAR_8);
 }

 FUNC_3(VAR_6);

 if (!VAR_7)
  return VAR_1;

 return VAR_8;
}
