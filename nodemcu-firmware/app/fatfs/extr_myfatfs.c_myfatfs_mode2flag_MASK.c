
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static BYTE FUNC_2( const char *VAR_5 )
{
  if (FUNC_1( VAR_5 ) == 1) {
    if(FUNC_0( VAR_5, "w" ) == 0)
      return VAR_4 | VAR_0;
    else if (FUNC_0( VAR_5, "r" ) == 0)
      return VAR_3 | VAR_2;
    else if (FUNC_0( VAR_5, "a" ) == 0)
      return VAR_4 | VAR_1;
    else
      return VAR_3 | VAR_2;
  } else if (FUNC_1( VAR_5 ) == 2) {
    if (FUNC_0( VAR_5, "r+" ) == 0)
      return VAR_3 | VAR_4 | VAR_2;
    else if (FUNC_0( VAR_5, "w+" ) == 0)
      return VAR_3 | VAR_4 | VAR_0;
    else if (FUNC_0( VAR_5, "a+" ) ==0 )
      return VAR_3 | VAR_4 | VAR_1;
    else
      return VAR_3 | VAR_2;
  } else {
    return VAR_3 | VAR_2;
  }
}
