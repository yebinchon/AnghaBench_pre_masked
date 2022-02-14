
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int optbuf ;


 int FUNC_0 (char*,int,char*,unsigned char) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (char*) ;

char *
FUNC_5(unsigned int VAR_0, unsigned char *VAR_1, int VAR_2)
{
 static char VAR_3[32768];
 char *VAR_4 = VAR_3;
 int VAR_5 = sizeof(VAR_3);
 unsigned char *VAR_6 = VAR_1;

 if (VAR_0 > 255)
  FUNC_1("option_as_string: bad code %d", VAR_0);

 for (; VAR_6 < VAR_1 + VAR_2; VAR_6++) {
  if (!FUNC_2(*VAR_6) || !FUNC_3(*VAR_6)) {
   if (VAR_6 + 1 != VAR_1 + VAR_2 || *VAR_6 != 0) {
    FUNC_0(VAR_4, VAR_5, "\\%03o", *VAR_6);
    VAR_4 += 4;
    VAR_5 -= 4;
   }
  } else if (*VAR_6 == '"' || *VAR_6 == '\'' || *VAR_6 == '$' ||
      *VAR_6 == '`' || *VAR_6 == '\\') {
   *VAR_4++ = '\\';
   *VAR_4++ = *VAR_6;
   VAR_5 -= 2;
  } else {
   *VAR_4++ = *VAR_6;
   VAR_5--;
  }
 }
 if (VAR_5 < 1)
  goto toobig;
 *VAR_4 = 0;
 return VAR_3;
toobig:
 FUNC_4("dhcp option too large");
 return "<error>";
}
