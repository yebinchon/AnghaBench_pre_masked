
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(void)
{
 if (!VAR_1)
  return -1;

 if (VAR_0)
  return 0;

 if (!VAR_2[0])
  return -1;

 VAR_0 = FUNC_0(VAR_2, "w+");
 if (!VAR_0) {
  VAR_1 = 0;
  return -1;
 }

 return 0;
}
