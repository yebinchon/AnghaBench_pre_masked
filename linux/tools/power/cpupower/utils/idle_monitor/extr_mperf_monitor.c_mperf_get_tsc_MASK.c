
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned long long) ;
 int FUNC_1 (int ,int ,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(unsigned long long *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3)
  FUNC_0("Reading TSC MSR failed, returning %llu\n", *VAR_2);
 return VAR_3;
}
