
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

int FUNC_1( const char *VAR_0, size_t VAR_1 )
{
  if (VAR_0 && *VAR_0 && VAR_1)
  {
    return !FUNC_0((unsigned char)*VAR_0) ? 1 : (VAR_1>1 ? 2 : -1);
  }
  return 0;
}
