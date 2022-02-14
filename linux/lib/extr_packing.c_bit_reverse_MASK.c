
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static u64 FUNC_0(u64 VAR_0, unsigned int VAR_1)
{
 u64 VAR_2 = 0;
 unsigned int VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = (VAR_0 & (1 << VAR_4)) != 0;
  VAR_2 |= (VAR_3 << (VAR_1 - VAR_4 - 1));
 }
 return VAR_2;
}
