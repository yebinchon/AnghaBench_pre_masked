
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 unsigned char FUNC_2 (unsigned char) ;

unsigned char
FUNC_3(unsigned char VAR_0)
{
 if (VAR_0 >= 'A' && VAR_0 <= 'Z')
  VAR_0 += 'a' - 'A';
 else if (FUNC_0(VAR_0) && FUNC_1(VAR_0))
  VAR_0 = FUNC_2(VAR_0);
 return VAR_0;
}
