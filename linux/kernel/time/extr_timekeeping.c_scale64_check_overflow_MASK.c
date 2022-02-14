
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(u64 VAR_1, u64 VAR_2, u64 *VAR_3)
{
 u64 VAR_4, VAR_5;

 VAR_4 = FUNC_0(*VAR_3, VAR_2, &VAR_5);

 if (((int)sizeof(u64)*8 - FUNC_2(VAR_1) < FUNC_2(VAR_4)) ||
     ((int)sizeof(u64)*8 - FUNC_2(VAR_1) < FUNC_2(VAR_5)))
  return -VAR_0;
 VAR_4 *= VAR_1;
 VAR_5 *= VAR_1;

 FUNC_1(VAR_5, VAR_2);
 *VAR_3 = VAR_4 + VAR_5;
 return 0;
}
