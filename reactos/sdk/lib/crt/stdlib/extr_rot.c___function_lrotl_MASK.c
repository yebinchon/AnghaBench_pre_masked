
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long,int) ;

unsigned long FUNC_1( unsigned long VAR_0, int VAR_1 )
{
 int VAR_2 = sizeof(unsigned long)<<3;
 if ( VAR_1 < 0 )
  return FUNC_0(VAR_0,-VAR_1);

 if ( VAR_1 > VAR_2 )
  VAR_1 = VAR_1 % VAR_2;
 return (VAR_0 << VAR_1) | (VAR_0 >> (VAR_2-VAR_1));
}
