
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 int VAR_3;
 VAR_2--;
 VAR_3 = VAR_2 * VAR_0 + VAR_2 / 4 - VAR_2 / 100 + VAR_2 / 400;
 VAR_3 -= (VAR_1 - 1) * VAR_0 + (VAR_1 - 1) / 4 - (VAR_1 - 1) / 100 + (VAR_1 - 1) / 400;
 return VAR_3;
}
