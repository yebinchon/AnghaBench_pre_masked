
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lookup {char const* l_word; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 struct lookup const* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,char const*,...) ;
 struct lookup* VAR_2 ;

__attribute__((used)) static const struct lookup *
FUNC_5(const char *VAR_3, const struct lookup *VAR_4)
{
 const struct lookup *VAR_5;
 const struct lookup *VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return ((void*)0);






 if (VAR_4 == VAR_0 && FUNC_2("last", VAR_3) && VAR_3[4])
 {
  if (VAR_3[4] == '-')
   FUNC_4(FUNC_0("\"%s\" is undocumented; use \"last%s\" instead"),
     VAR_3, VAR_3 + 5);
  else
  {
   VAR_3 += 4;
   VAR_4 = VAR_2;
  }
 }




 for (VAR_6 = VAR_4; VAR_6->l_word != ((void*)0); ++VAR_6)
  if (FUNC_1(VAR_3, VAR_6->l_word))
   return VAR_6;




 VAR_5 = ((void*)0);
 for (VAR_6 = VAR_4; VAR_6->l_word != ((void*)0); ++VAR_6)
  if (FUNC_2(VAR_3, VAR_6->l_word))
  {
   if (VAR_5 == ((void*)0))
    VAR_5 = VAR_6;
   else
    return ((void*)0);
  }

 if (VAR_5 && VAR_1)
 {

  bool VAR_7 = 0;

  for (VAR_6 = VAR_4; VAR_6->l_word; VAR_6++)
   if (FUNC_3(VAR_3, VAR_6->l_word))
   {
    if (VAR_7)
    {
     FUNC_4(FUNC_0("\"%s\" is ambiguous in pre-2017c zic"), VAR_3);
     break;
    }
    VAR_7 = 1;
   }
 }

 return VAR_5;
}
