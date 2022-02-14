
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct addrinfo* ai_addr; } ;


 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (struct addrinfo*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct addrinfo*) ;

void
FUNC_4(struct addrinfo *VAR_0)
{
 if (VAR_0)
 {
  if (VAR_0->ai_addr)
   FUNC_0(VAR_0->ai_addr);
  FUNC_0(VAR_0);
 }
}
