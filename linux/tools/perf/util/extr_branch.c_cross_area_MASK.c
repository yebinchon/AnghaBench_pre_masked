
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static bool FUNC_0(u64 VAR_0, u64 VAR_1, int VAR_2)
{
 u64 VAR_3, VAR_4;

 VAR_3 = VAR_0 & ~(VAR_2 - 1);
 VAR_4 = VAR_1 & ~(VAR_2 - 1);

 return (VAR_3 != VAR_4) ? 1 : 0;
}
