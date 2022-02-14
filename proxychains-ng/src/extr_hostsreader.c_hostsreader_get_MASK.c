
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostsreader {char* ip; char* name; int f; } ;


 int FUNC_0 (char*,size_t,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;

int FUNC_3(struct hostsreader *VAR_0, char* VAR_1, size_t VAR_2) {
 while(1) {
  if(!FUNC_0(VAR_1, VAR_2, VAR_0->f)) return 0;
  if(*VAR_1 == '#') continue;
  char *VAR_3 = VAR_1;
  size_t VAR_4 = VAR_2;
  VAR_0->ip = VAR_3;
  while(*VAR_3 && !FUNC_2(*VAR_3) && VAR_4) {
   VAR_3++;
   VAR_4--;
  }
  if(!VAR_4 || !*VAR_3 || VAR_3 == VAR_0->ip) continue;
  *VAR_3 = 0;
  VAR_3++;
  while(*VAR_3 && FUNC_2(*VAR_3) && VAR_4) {
   VAR_3++;
   VAR_4--;
  }
  if(!VAR_4 || !*VAR_3) continue;
  VAR_0->name = VAR_3;
  while(*VAR_3 && !FUNC_2(*VAR_3) && VAR_4) {
   VAR_3++;
   VAR_4--;
  }
  if(!VAR_4 || !*VAR_3) continue;
  *VAR_3 = 0;
  if(FUNC_1(VAR_0->ip)) return 1;
 }
}
