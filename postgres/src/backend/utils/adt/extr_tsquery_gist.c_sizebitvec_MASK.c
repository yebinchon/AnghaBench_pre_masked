
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TSQuerySign ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(TSQuerySign VAR_1)
{
 int VAR_2 = 0,
    VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2 += 0x01 & (VAR_1 >> VAR_3);

 return VAR_2;
}
