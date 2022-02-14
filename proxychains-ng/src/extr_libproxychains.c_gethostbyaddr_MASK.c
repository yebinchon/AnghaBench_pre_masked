
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; char** h_addr_list; char** h_aliases; int h_length; int h_addrtype; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,void const*,int) ;
 int FUNC_3 (unsigned char*,char*) ;
 int VAR_1 ;
 struct hostent* FUNC_4 (void const*,int,int) ;

struct hostent *FUNC_5(const void *VAR_2, socklen_t VAR_3, int VAR_4) {
 FUNC_0();
 FUNC_1("TODO: proper gethostbyaddr hook\n");

 static char VAR_5[16];
 static char VAR_6[4];
 static char *VAR_7[2];
 static char *VAR_8[1];
 static struct hostent VAR_9;

 if(!VAR_1)
  return FUNC_4(VAR_2, VAR_3, VAR_4);
 else {

  FUNC_1("len %u\n", VAR_3);
  if(VAR_3 != 4)
   return ((void*)0);
  VAR_9.h_name = VAR_5;
  FUNC_2(VAR_6, VAR_2, 4);
  VAR_7[0] = VAR_6;
  VAR_7[1] = ((void*)0);
  VAR_9.h_addr_list = VAR_7;
  VAR_9.h_addrtype = VAR_0;
  VAR_8[0] = ((void*)0);
  VAR_9.h_aliases = VAR_8;
  VAR_9.h_length = 4;
  FUNC_3((unsigned char *) VAR_2, VAR_5);
  return &VAR_9;
 }
 return ((void*)0);
}
