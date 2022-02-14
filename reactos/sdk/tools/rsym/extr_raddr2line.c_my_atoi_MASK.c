
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,int*) ;

long
FUNC_1 ( const char* VAR_0 )
{
 int VAR_1 = 0;
 const char* VAR_2 = "%x";

 if ( *VAR_0 == '0' )
 {
  switch ( *++VAR_0 )
  {
  case 'x':
   VAR_2 = "%x";
   ++VAR_0;
   break;
  case 'd':
   VAR_2 = "%d";
   ++VAR_0;
   break;
  default:
   VAR_2 = "%o";
   break;
  }
 }
 FUNC_0 ( VAR_0, VAR_2, &VAR_1 );
 return VAR_1;
}
