
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int dummy; } ;


 struct entry* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(int VAR_1, int VAR_2)
{
 struct entry VAR_3, *VAR_4 = &VAR_0[VAR_1], *VAR_5 = &VAR_0[VAR_2];

 *(&VAR_3) = *VAR_4;
 *VAR_4 = *VAR_5;
 *VAR_5 = *(&VAR_3);
}
