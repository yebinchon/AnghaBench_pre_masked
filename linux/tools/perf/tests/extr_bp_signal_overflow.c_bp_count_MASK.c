
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,long long*,int) ;

__attribute__((used)) static long long FUNC_2(int VAR_1)
{
 long long VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2, sizeof(long long));
 if (VAR_3 != sizeof(long long)) {
  FUNC_0("failed to read: %d\n", VAR_3);
  return VAR_0;
 }

 return VAR_2;
}
