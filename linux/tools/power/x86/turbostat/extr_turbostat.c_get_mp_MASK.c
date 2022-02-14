
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_counter {scalar_t__ msr_num; int flags; char* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,scalar_t__,unsigned long long*) ;
 unsigned long long FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int,char*) ;

int FUNC_3(int VAR_2, struct msr_counter *VAR_3, unsigned long long *VAR_4)
{
 if (VAR_3->msr_num != 0) {
  if (FUNC_0(VAR_2, VAR_3->msr_num, VAR_4))
   return -1;
 } else {
  char VAR_5[128 + VAR_0];

  if (VAR_3->flags & VAR_1) {
   FUNC_2(VAR_5, "/sys/devices/system/cpu/cpu%d/%s",
     VAR_2, VAR_3->path);

   *VAR_4 = FUNC_1(VAR_5);
  } else {
   *VAR_4 = FUNC_1(VAR_3->path);
  }
 }

 return 0;
}
