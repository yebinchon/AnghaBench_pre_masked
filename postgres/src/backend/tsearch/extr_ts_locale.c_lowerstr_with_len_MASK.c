
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef scalar_t__ wchar_t ;
typedef int pg_locale_t ;
typedef int Oid ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (scalar_t__*,int,char const*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 () ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,scalar_t__*,int,int ) ;

char *
FUNC_14(const char *VAR_3, int VAR_4)
{
 char *VAR_5;
 Oid VAR_6 = VAR_0;
 pg_locale_t VAR_7 = 0;

 if (VAR_4 == 0)
  return FUNC_10("");







 if (FUNC_9() > 1 && !FUNC_6(VAR_6))
 {
  wchar_t *VAR_8,
       *VAR_9;
  int VAR_10;






  VAR_9 = VAR_8 = (wchar_t *) FUNC_7(sizeof(wchar_t) * (VAR_4 + 1));

  VAR_10 = FUNC_2(VAR_8, VAR_4 + 1, VAR_3, VAR_4, VAR_7);
  FUNC_0(VAR_10 <= VAR_4);

  while (*VAR_9)
  {
   *VAR_9 = FUNC_12((wint_t) *VAR_9);
   VAR_9++;
  }




  VAR_4 = FUNC_9() * VAR_10 + 1;
  VAR_5 = (char *) FUNC_7(VAR_4);

  VAR_10 = FUNC_13(VAR_5, VAR_8, VAR_4, VAR_7);

  FUNC_8(VAR_8);

  if (VAR_10 < 0)
   FUNC_3(VAR_2,
     (FUNC_4(VAR_1),
      FUNC_5("conversion from wchar_t to server encoding failed: %m")));
  FUNC_0(VAR_10 < VAR_4);
 }
 else
 {
  const char *VAR_11 = VAR_3;
  char *VAR_12;

  VAR_12 = VAR_5 = (char *) FUNC_7(sizeof(char) * (VAR_4 + 1));
  while ((VAR_11 - VAR_3) < VAR_4 && *VAR_11)
  {
   *VAR_12++ = FUNC_11(FUNC_1(VAR_11));
   VAR_11++;
  }
  *VAR_12 = '\0';
 }

 return VAR_5;
}
