
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,char*,char*,int) ;
 int * FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(int VAR_1)
{
 char VAR_2[VAR_0];
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, "stat", VAR_2, sizeof(VAR_2));
 if (VAR_3 == -1) {
  FUNC_0("Can't get %d stat\n", VAR_1);
  return -1;
 }

 if (FUNC_2(VAR_2, "(test_freezer) T ") == ((void*)0)) {
  FUNC_0("Process %d in the unexpected state: %s\n", VAR_1, VAR_2);
  return -1;
 }

 return 0;
}
