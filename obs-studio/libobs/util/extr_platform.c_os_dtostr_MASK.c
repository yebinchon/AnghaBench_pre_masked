
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,size_t,char*,double) ;
 char* FUNC_3 (char*,char) ;

int FUNC_4(double VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 char *VAR_4, *VAR_5;
 size_t VAR_6;

 VAR_3 = FUNC_2(VAR_1, VAR_2, "%.17g", VAR_0);
 if (VAR_3 < 0)
  return -1;

 VAR_6 = (size_t)VAR_3;
 if (VAR_6 >= VAR_2)
  return -1;

 FUNC_0(VAR_1);



 if (FUNC_3(VAR_1, '.') == ((void*)0) && FUNC_3(VAR_1, 'e') == ((void*)0)) {
  if (VAR_6 + 3 >= VAR_2) {

   return -1;
  }
  VAR_1[VAR_6] = '.';
  VAR_1[VAR_6 + 1] = '0';
  VAR_1[VAR_6 + 2] = '\0';
  VAR_6 += 2;
 }



 VAR_4 = FUNC_3(VAR_1, 'e');
 if (VAR_4) {
  VAR_4++;
  VAR_5 = VAR_4 + 1;

  if (*VAR_4 == '-')
   VAR_4++;

  while (*VAR_5 == '0')
   VAR_5++;

  if (VAR_5 != VAR_4) {
   FUNC_1(VAR_4, VAR_5, VAR_6 - (size_t)(VAR_5 - VAR_1));
   VAR_6 -= (size_t)(VAR_5 - VAR_4);
  }
 }

 return (int)VAR_6;
}
