
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 scalar_t__ FUNC_2 (unsigned char const) ;
 scalar_t__ FUNC_3 (unsigned char const) ;

int
FUNC_4(const unsigned char *VAR_0)
{
 int VAR_1;

 if (FUNC_0(*VAR_0))
  VAR_1 = 2;
 else if (FUNC_2(*VAR_0))
  VAR_1 = 3;
 else if (FUNC_1(*VAR_0))
  VAR_1 = 3;
 else if (FUNC_3(*VAR_0))
  VAR_1 = 4;
 else
  VAR_1 = 1;
 return VAR_1;
}
