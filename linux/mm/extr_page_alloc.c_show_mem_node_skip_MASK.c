
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nodemask_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(unsigned int VAR_2, int VAR_3, nodemask_t *VAR_4)
{
 if (!(VAR_2 & VAR_0))
  return 0;






 if (!VAR_4)
  VAR_4 = &VAR_1;

 return !FUNC_0(VAR_3, *VAR_4);
}
