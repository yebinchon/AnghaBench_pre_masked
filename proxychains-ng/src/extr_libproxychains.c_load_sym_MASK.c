
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 void* FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void* FUNC_6(char* VAR_2, void* VAR_3) {

 void *VAR_4 = FUNC_3(VAR_0, VAR_2);

 if(!VAR_4) {
  FUNC_5(VAR_1, "Cannot load symbol '%s' %s\n", VAR_2, FUNC_2());
  FUNC_4(1);
 } else {
  FUNC_0("loaded symbol '%s'" " real addr %p  wrapped addr %p\n", VAR_2, VAR_4, VAR_3);
 }
 if(VAR_4 == VAR_3) {
  FUNC_0("circular reference detected, aborting!\n");
  FUNC_1();
 }
 return VAR_4;
}
