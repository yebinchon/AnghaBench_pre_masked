
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PasswordType ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (char const*,char const*,char const*,char**) ;
 int FUNC_6 (char const*,char const*,scalar_t__,int ,int) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_6,
      const char *VAR_7,
      PasswordType VAR_8,
      Datum VAR_9,
      bool VAR_10)
{
 if (&FUNC_6)
  FUNC_6(VAR_6, VAR_7,
         VAR_8, VAR_9,
         VAR_10);

 if (VAR_8 != VAR_4)
 {
  char *VAR_11;

  if (FUNC_5(VAR_6, VAR_7, VAR_6, &VAR_11) == VAR_5)
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("password must not equal user name")));
 }
 else
 {



  const char *VAR_12 = VAR_7;
  int VAR_13 = FUNC_7(VAR_12);
  int VAR_14;
  bool VAR_15,
     VAR_16;


  if (VAR_13 < VAR_3)
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("password is too short")));


  if (FUNC_8(VAR_12, VAR_6))
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("password must not contain user name")));


  VAR_15 = 0;
  VAR_16 = 0;
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  {




   if (FUNC_4((unsigned char) VAR_12[VAR_14]))
    VAR_15 = 1;
   else
    VAR_16 = 1;
  }
  if (!VAR_15 || !VAR_16)
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("password must contain both letters and nonletters")));
 }


}
