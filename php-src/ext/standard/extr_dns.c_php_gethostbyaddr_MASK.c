
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
struct in_addr {int s_addr; } ;
struct in6_addr {int s_addr; } ;
struct hostent {char* h_name; } ;
typedef int addr6 ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 struct hostent* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*,struct in_addr*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static zend_string *FUNC_5(char *VAR_2)
{



 struct in_addr VAR_3;
 struct hostent *VAR_4;
 VAR_3.s_addr = FUNC_1(VAR_2);

 if (VAR_3.s_addr == -1) {
  return ((void*)0);
 }

 VAR_4 = FUNC_0((char *) &VAR_3, sizeof(VAR_3), VAR_0);


 if (!VAR_4 || VAR_4->h_name == ((void*)0) || VAR_4->h_name[0] == '\0') {
  return FUNC_4(VAR_2, FUNC_3(VAR_2), 0);
 }

 return FUNC_4(VAR_4->h_name, FUNC_3(VAR_4->h_name), 0);
}
