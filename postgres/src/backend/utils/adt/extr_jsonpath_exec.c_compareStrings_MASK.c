
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*,int,char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2, int VAR_3,
      const char *VAR_4, int VAR_5)
{
 if (FUNC_0() == VAR_0 ||
  FUNC_0() == VAR_1)
 {





  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 }
 else
 {
  char *VAR_6,
       *VAR_7;
  int VAR_8,
     VAR_9,
     VAR_10;







  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_1);
  VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_1);
  VAR_9 = (VAR_2 == VAR_6) ? VAR_3 : FUNC_4(VAR_6);
  VAR_10 = (VAR_4 == VAR_7) ? VAR_5 : FUNC_4(VAR_7);

  VAR_8 = FUNC_1(VAR_6, VAR_9, VAR_7, VAR_10);





  if (VAR_2 == VAR_6 && VAR_4 == VAR_7)
   return VAR_8;


  if (VAR_2 != VAR_6)
   FUNC_2(VAR_6);
  if (VAR_4 != VAR_7)
   FUNC_2(VAR_7);
  if (VAR_8 == 0)
   return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  else
   return VAR_8;
 }
}
