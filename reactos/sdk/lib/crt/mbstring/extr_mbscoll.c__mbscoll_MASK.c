
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char,unsigned char) ;

int FUNC_2(const unsigned char *VAR_0, const unsigned char *VAR_1)
{
 unsigned char *VAR_2 = (unsigned char *)VAR_0;
 unsigned char *VAR_3 = (unsigned char *)VAR_1;

 unsigned short *VAR_4, *VAR_5;

 int VAR_6, VAR_7;

 while ( *VAR_2 != 0 ) {

  if (*VAR_2 == 0)
   break;

  VAR_6 = FUNC_0(*VAR_2);
  VAR_7 = FUNC_0(*VAR_3);
  if ( !VAR_6 && !VAR_7 ) {

   if (*VAR_2 != *VAR_3)
    return FUNC_1(*VAR_2, *VAR_3);
   else {
    VAR_2 += 1;
    VAR_3 += 1;
   }
  }
  else if ( VAR_6 && VAR_7 ){
   VAR_4 = (unsigned short *)VAR_2;
   VAR_5 = (unsigned short *)VAR_3;
   if ( *VAR_4 != *VAR_5 )
    return FUNC_1(*VAR_4, *VAR_5);
   else {
    VAR_2 += 2;
    VAR_3 += 2;

   }
  }
  else
   return FUNC_1(*VAR_2, *VAR_3);
 } ;
 return 0;
}
