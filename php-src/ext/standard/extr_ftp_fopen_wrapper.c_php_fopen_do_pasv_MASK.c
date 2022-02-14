
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int php_stream ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (char*,char**,int) ;

__attribute__((used)) static unsigned short FUNC_5(php_stream *VAR_0, char *VAR_1, size_t VAR_2, char **VAR_3)
{
 char VAR_4[512];
 int VAR_5, VAR_6;
 unsigned short VAR_7;
 char *VAR_8, *VAR_9, *VAR_10=((void*)0);
  FUNC_3(VAR_0, "PASV\r\n");
  VAR_5 = FUNC_0(VAR_0);


  if (VAR_5 != 227) {
   return 0;
  }


  VAR_8 = VAR_4;

  for (VAR_8 += 4; *VAR_8 && !FUNC_1((int) *VAR_8); VAR_8++);
  if (!*VAR_8) {
   return 0;
  }

  VAR_10 = VAR_8;
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
   for (; FUNC_1((int) *VAR_8); VAR_8++);
   if (*VAR_8 != ',') {
    return 0;
   }
   *VAR_8='.';
   VAR_8++;
  }
  VAR_8[-1] = '\0';
  FUNC_2(VAR_1, VAR_10, VAR_2);
  VAR_1[VAR_2-1] = '\0';
  VAR_10 = VAR_1;


  VAR_7 = (unsigned short) FUNC_4(VAR_8, &VAR_9, 10) * 256;
  if (VAR_9 == ((void*)0)) {

   return 0;
  }
  VAR_8 = VAR_9;
  if (*VAR_8 != ',') {
   return 0;
  }
  VAR_8++;

  VAR_7 += (unsigned short) FUNC_4(VAR_8, &VAR_9, 10);
 if (VAR_9 == ((void*)0)) {

  return 0;
 }

 if (VAR_3) {
  *VAR_3 = VAR_10;
 }

 return VAR_7;
}
