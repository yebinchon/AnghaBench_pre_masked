
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_1(char **VAR_0,
          unsigned int VAR_1, unsigned int VAR_2)
{
 char *VAR_3 = *VAR_0;
 unsigned int VAR_4;

 switch (VAR_2) {
 case 0:
  *VAR_3++ = '?';
  break;

 case 0xf:
  VAR_3 += FUNC_0(VAR_3, "%X", VAR_1);
  break;

 default:






  *VAR_3++ = '[';
  for (VAR_4 = 0; VAR_4 < 0x10; VAR_4++)
   if ((VAR_4 & VAR_2) == VAR_1)
    VAR_3 += FUNC_0(VAR_3, "%X", VAR_4);
  *VAR_3++ = ']';
 }


 *VAR_3 = '\0';


 *VAR_0 = VAR_3;
}
