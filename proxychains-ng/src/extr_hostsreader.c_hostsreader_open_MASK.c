
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostsreader {int f; } ;


 int FUNC_0 (char*,char*) ;

int FUNC_1(struct hostsreader *VAR_0) {
 if(!(VAR_0->f = FUNC_0("/etc/hosts", "r"))) return 0;
 return 1;
}
