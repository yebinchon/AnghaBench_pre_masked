
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
struct in_addr {struct in_addr* s_addr; } ;
struct hostent {struct in_addr* h_addr_list; } ;


 char* FUNC_0 (struct in_addr) ;
 int FUNC_1 (struct in_addr**,struct in_addr*,int) ;
 struct hostent* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static zend_string *FUNC_5(char *VAR_0)
{
 struct hostent *VAR_1;
 struct in_addr *VAR_2;
 struct in_addr VAR_3;
 char *VAR_4;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1) {
  return FUNC_4(VAR_0, FUNC_3(VAR_0), 0);
 }


 FUNC_1(&VAR_2, &VAR_1->h_addr_list[0], sizeof(struct in_addr *));
 if (!VAR_2) {
  return FUNC_4(VAR_0, FUNC_3(VAR_0), 0);
 }

 FUNC_1(&VAR_3.s_addr, VAR_2, sizeof(VAR_3.s_addr));

 VAR_4 = FUNC_0(VAR_3);
 return FUNC_4(VAR_4, FUNC_3(VAR_4), 0);
}
