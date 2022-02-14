
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_type; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,long) ;
 int FUNC_3 (int ,struct statfs*) ;
 int * FUNC_4 (char*) ;
 int VAR_0 ;

int FUNC_5(void)
{
 DIR *VAR_1;
 struct statfs VAR_2;

 VAR_1 = FUNC_4("/proc");
 if (!VAR_1)
  return 4;


 if (FUNC_3(FUNC_0(VAR_1), &VAR_2) == -1) {
  return 1;
 }
 if (VAR_2.f_type != 0x9fa0) {
  FUNC_2(VAR_0, "error: unexpected f_type %lx\n", (long)VAR_2.f_type);
  return 2;
 }

 FUNC_1(VAR_1, 0);

 return 0;
}
