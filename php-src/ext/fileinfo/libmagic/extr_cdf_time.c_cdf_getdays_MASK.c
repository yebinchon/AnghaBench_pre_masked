
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = VAR_0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 += FUNC_0(VAR_3) + 365;

 return VAR_2;
}
