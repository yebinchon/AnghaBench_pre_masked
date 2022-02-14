
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

unsigned char * FUNC_3(const unsigned char *VAR_0)
{
 unsigned char *VAR_1;
 if (VAR_0 == 0)
  return 0;
 VAR_1 = (unsigned char *)FUNC_2(FUNC_1(VAR_0) + 1);
 if (VAR_1 == 0)
  return 0;
 FUNC_0(VAR_1, VAR_0);
 return VAR_1;
}
