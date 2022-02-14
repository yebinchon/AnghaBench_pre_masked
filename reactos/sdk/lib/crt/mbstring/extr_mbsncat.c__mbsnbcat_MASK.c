
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char*) ;

unsigned char * FUNC_3(unsigned char *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3;
 const unsigned char *VAR_4 = VAR_1;
 if (VAR_2 != 0) {
  VAR_3 = VAR_0 + FUNC_2(VAR_0);
  VAR_3 += FUNC_1(*VAR_3);

  do {
   if ((*VAR_3++ = *VAR_4++) == 0)
   {
    while (--VAR_2 != 0)
     *VAR_3++ = 0;
    break;
   }
   if ( !(VAR_2==1 && FUNC_0(*VAR_4)) )
    VAR_2--;
  } while (VAR_2 > 0);
 }
 return VAR_0;
}
