
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int procfile ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,char*,int ) ;
 int VAR_1 ;

unsigned long FUNC_6(void) {
 static procfile *VAR_2 = ((void*)0);

 VAR_2 = FUNC_5(VAR_2, "/proc/self/status", " \t:,-()/", VAR_0);
 if(!VAR_2) {
  FUNC_3(VAR_1, "Failed to open filename\n");
  FUNC_2(1);
 }

 FUNC_0();
 VAR_2 = FUNC_4(VAR_2);
 unsigned long VAR_3 = FUNC_1();

 if(!VAR_2) {
  FUNC_3(VAR_1, "Failed to read filename\n");
  FUNC_2(1);
 }

 return VAR_3;
}
