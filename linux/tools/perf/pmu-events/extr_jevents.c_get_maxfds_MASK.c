
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {scalar_t__ rlim_max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct rlimit*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct rlimit VAR_1;

 if (FUNC_0(VAR_0, &VAR_1) == 0)
  return FUNC_1((int)VAR_1.rlim_max / 2, 512);

 return 512;
}
