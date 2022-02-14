
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _u32 ;
typedef int _i8 ;



_u32 FUNC_0( _u32 VAR_0 )
{
  _u32 VAR_1 = 1;
  _i8 *VAR_2 = (_i8 *)&VAR_1;
  if (VAR_2[0] == 1)
  {
    VAR_2[0] = ((_i8* )&VAR_0)[3];
    VAR_2[1] = ((_i8* )&VAR_0)[2];
    VAR_2[2] = ((_i8* )&VAR_0)[1];
    VAR_2[3] = ((_i8* )&VAR_0)[0];
    return VAR_1;
  }
  else
  {
    return VAR_0;
  }
}
