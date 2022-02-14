
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ll ;


 int FUNC_0 (char const* const,char const* const) ;
 int FUNC_1 (char const* const,char const* const) ;
 scalar_t__ FUNC_2 (char const* const,char**,int) ;

__attribute__((used)) static int FUNC_3(const char * const VAR_0, const char * const VAR_1)
{
 char *VAR_2, *VAR_3;

 ll VAR_4 = FUNC_2(VAR_0, &VAR_2, 10);
 ll VAR_5 = FUNC_2(VAR_1, &VAR_3, 10);


 if (VAR_0 != VAR_2 || VAR_1 != VAR_3) {

  if (VAR_0 != VAR_2 && VAR_1 != VAR_3) {
   if (VAR_5 > VAR_4)
    return -1;

   if (VAR_4 > VAR_5)
    return 1;
  }


  if (VAR_0 == VAR_2)
   return 1;


  if (VAR_1 == VAR_3)
   return -1;
 }



 return FUNC_1(VAR_0, VAR_1);



}
