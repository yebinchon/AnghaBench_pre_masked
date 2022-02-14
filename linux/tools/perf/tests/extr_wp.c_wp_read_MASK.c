
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,long long*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, long long *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_3 != VAR_2) {
  FUNC_0("failed to read: %d\n", VAR_3);
  return -1;
 }
 return 0;
}
