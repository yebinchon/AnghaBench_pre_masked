
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fullname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,char const*,int,char*,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char const*) ;

int
FUNC_7(const char *VAR_4, char *VAR_5)
{
 const char *VAR_6;
 char VAR_7[VAR_0];
 int VAR_8;
 int VAR_9;


 FUNC_5(VAR_7, FUNC_1(), sizeof(VAR_7));
 VAR_9 = VAR_8 = FUNC_6(VAR_7);

 if (VAR_8 + 1 + FUNC_6(VAR_4) >= VAR_0)
  return -1;
 if (VAR_5 == ((void*)0))
 {
  int VAR_10;

  VAR_7[VAR_8] = '/';

  FUNC_4(VAR_7 + VAR_8 + 1, VAR_4);
  VAR_10 = FUNC_0(VAR_7, VAR_1 | VAR_2, 0);
  if (VAR_10 >= 0)
   return VAR_10;

  VAR_7[VAR_8] = '\0';
 }





 VAR_6 = VAR_4;
 for (;;)
 {
  const char *VAR_11;
  int VAR_12;

  VAR_11 = FUNC_3(VAR_6, '/');
  if (VAR_11)
   VAR_12 = VAR_11 - VAR_6;
  else
   VAR_12 = FUNC_6(VAR_6);
  if (!FUNC_2(VAR_7, VAR_6, VAR_12,
          VAR_7 + VAR_8 + 1,
          VAR_0 - VAR_8 - 1))
   return -1;
  VAR_7[VAR_8++] = '/';
  VAR_8 += FUNC_6(VAR_7 + VAR_8);
  if (VAR_11)
   VAR_6 = VAR_11 + 1;
  else
   break;
 }

 if (VAR_5)
  FUNC_5(VAR_5, VAR_7 + VAR_9 + 1, VAR_3 + 1);

 return FUNC_0(VAR_7, VAR_1 | VAR_2, 0);
}
