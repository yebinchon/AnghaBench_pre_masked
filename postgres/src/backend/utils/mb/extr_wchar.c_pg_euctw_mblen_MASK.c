
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;

__attribute__((used)) static int
FUNC_1(const unsigned char *VAR_2)
{
 int VAR_3;

 if (*VAR_2 == VAR_0)
  VAR_3 = 4;
 else if (*VAR_2 == VAR_1)
  VAR_3 = 3;
 else if (FUNC_0(*VAR_2))
  VAR_3 = 2;
 else
  VAR_3 = 1;
 return VAR_3;
}
