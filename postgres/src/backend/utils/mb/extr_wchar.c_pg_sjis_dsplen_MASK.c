
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 int FUNC_1 (unsigned char const*) ;

__attribute__((used)) static int
FUNC_2(const unsigned char *VAR_0)
{
 int VAR_1;

 if (*VAR_0 >= 0xa1 && *VAR_0 <= 0xdf)
  VAR_1 = 1;
 else if (FUNC_0(*VAR_0))
  VAR_1 = 2;
 else
  VAR_1 = FUNC_1(VAR_0);
 return VAR_1;
}
