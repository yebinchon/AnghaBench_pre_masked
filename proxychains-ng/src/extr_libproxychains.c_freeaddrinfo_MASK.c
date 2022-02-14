
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,void*) ;
 int FUNC_2 (struct addrinfo*) ;
 int VAR_0 ;
 int FUNC_3 (struct addrinfo*) ;

void FUNC_4(struct addrinfo *VAR_1) {
 FUNC_0();
 FUNC_1("freeaddrinfo %p \n", (void *) VAR_1);

 if(!VAR_0)
  FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1);
}
