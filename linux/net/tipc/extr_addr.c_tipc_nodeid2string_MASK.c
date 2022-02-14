
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,char) ;

char *FUNC_2(char *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 u8 VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = VAR_3[VAR_4];
  if (VAR_5 >= '0' && VAR_5 <= '9')
   continue;
  if (VAR_5 >= 'A' && VAR_5 <= 'Z')
   continue;
  if (VAR_5 >= 'a' && VAR_5 <= 'z')
   continue;
  if (VAR_5 == '.')
   continue;
  if (VAR_5 == ':')
   continue;
  if (VAR_5 == '_')
   continue;
  if (VAR_5 == '-')
   continue;
  if (VAR_5 == '@')
   continue;
  if (VAR_5 != 0)
   break;
 }
 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_2, VAR_3, VAR_0);
  VAR_2[VAR_0] = 0;
  return VAR_2;
 }


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(&VAR_2[2 * VAR_4], "%02x", VAR_3[VAR_4]);


 for (VAR_4 = VAR_1 - 2; VAR_2[VAR_4] == '0'; VAR_4--)
  VAR_2[VAR_4] = 0;

 return VAR_2;
}
