
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

int FUNC_1(const unsigned char *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3 = (unsigned char *)VAR_0;
 unsigned char *VAR_4 = (unsigned char *)VAR_1;

 unsigned short *VAR_5, *VAR_6;

 int VAR_7, VAR_8;

 if (VAR_2 == 0)
  return 0;
 do {

  if (*VAR_3 == 0)
   break;

  VAR_7 = FUNC_0(*VAR_3);
  VAR_8 = FUNC_0(*VAR_4);
  if ( !VAR_7 && !VAR_8 ) {

   if (*VAR_3 != *VAR_4)
    return *VAR_3 - *VAR_4;
   else {
    VAR_3 += 1;
    VAR_4 += 1;
    VAR_2--;
   }
  }
  else if ( VAR_7 && VAR_8 ){
   VAR_5 = (unsigned short *)VAR_3;
   VAR_6 = (unsigned short *)VAR_4;
   if ( *VAR_5 != *VAR_6 )
    return *VAR_5 - *VAR_6;
   else {
    VAR_3 += 2;
    VAR_4 += 2;
    VAR_2--;

   }
  }
  else
   return *VAR_3 - *VAR_4;
 } while (VAR_2 > 0);
 return 0;
}
