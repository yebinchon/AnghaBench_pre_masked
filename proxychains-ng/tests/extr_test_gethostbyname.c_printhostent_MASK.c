
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int h_length; char* h_name; int h_addrtype; int * h_addr_list; int h_aliases; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,int,char*,int *,int,char*) ;

void FUNC_2(struct hostent *VAR_0) {
 char VAR_1[16];
 FUNC_0(VAR_0->h_addr_list[0], VAR_1);
 FUNC_1("alias: %p, len: %d, name: %s, addrlist: %p, addrtype: %d, ip: %s\n",
  VAR_0->h_aliases,
  VAR_0->h_length,
  VAR_0->h_name,
  VAR_0->h_addr_list,
  VAR_0->h_addrtype,
  VAR_1
 );
}
