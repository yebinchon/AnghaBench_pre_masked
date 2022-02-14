
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int pid_t ;
typedef int map_file_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,size_t,char*,int) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static bool FUNC_7(bool VAR_3)
{
 uid_t VAR_4;
 char VAR_5[32];
 size_t VAR_6 = sizeof(VAR_5);
 pid_t VAR_7;
 bool VAR_8;

 VAR_4 = FUNC_1();

 int VAR_9 = VAR_0;
 VAR_7 = FUNC_5(VAR_2, VAR_9, ((void*)0));
 if (VAR_7 == -1) {
     FUNC_2("clone failed");
     return 0;
 }

 if (VAR_7 == 0) {

  FUNC_3(1);
  FUNC_0(VAR_1);
 } else {
  if(FUNC_4(VAR_5, VAR_6, "/proc/%d/uid_map", VAR_7) < 0) {
   FUNC_2("preparing file name string failed");
   return 0;
  }
  VAR_8 = FUNC_6(VAR_5, "0 0 1", VAR_4);
  return VAR_8 == VAR_3;
 }

 FUNC_2("should not reach here");
 return 0;
}
