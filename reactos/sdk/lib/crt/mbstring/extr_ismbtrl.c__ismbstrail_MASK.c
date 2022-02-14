
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*) ;

int FUNC_1( const unsigned char *VAR_0, const unsigned char *VAR_1)
{

  if ((VAR_1 > VAR_0) && FUNC_0(VAR_0, VAR_1-1))
    return -1;
  else
    return 0;
}
