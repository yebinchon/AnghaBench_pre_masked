
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {scalar_t__ rlim_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct rlimit*) ;

int
FUNC_1()
{




 static int VAR_2;
 struct rlimit VAR_3;

 if (VAR_2) {
  return (VAR_2);
 }
 if (FUNC_0(VAR_0, &VAR_3) == 0) {
  return (VAR_2 = (int)VAR_3.rlim_max);
 }




 return (32);

}
