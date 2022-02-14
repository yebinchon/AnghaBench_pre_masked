
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_family; int ai_flags; int ai_socktype; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static struct addrinfo *FUNC_4(char *VAR_3, int VAR_4)
{
 struct addrinfo VAR_5, *VAR_6;
 int VAR_7;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.ai_family = VAR_4;
 VAR_5.ai_socktype = VAR_1;
 VAR_5.ai_flags = VAR_0;

 VAR_7 = FUNC_2(VAR_3, VAR_2, &VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_0("failed to get a network address %s: %s", VAR_2,
      FUNC_1(VAR_7));
  return ((void*)0);
 }

 return VAR_6;
}
