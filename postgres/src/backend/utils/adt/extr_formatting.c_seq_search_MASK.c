
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char,char const,char const* const,char*) ;
 char FUNC_1 (unsigned char) ;
 char FUNC_2 (unsigned char) ;

__attribute__((used)) static int
FUNC_3(char *VAR_4, const char *const *VAR_5, int VAR_6, int VAR_7, int *VAR_8)
{
 const char *VAR_9;
 const char *const *VAR_10;
 char *VAR_11;
 int VAR_12,
    VAR_13;

 *VAR_8 = 0;

 if (!*VAR_4)
  return -1;


 if (VAR_6 == VAR_3 || VAR_6 == VAR_1)
  *VAR_4 = FUNC_2((unsigned char) *VAR_4);
 else if (VAR_6 == VAR_0)
  *VAR_4 = FUNC_1((unsigned char) *VAR_4);

 for (VAR_12 = 0, VAR_10 = VAR_5; *VAR_10 != ((void*)0); VAR_10++)
 {

  if (*VAR_4 != **VAR_10)
   continue;

  for (VAR_13 = 1, VAR_9 = *VAR_10 + 1, VAR_11 = VAR_4 + 1;; VAR_11++, VAR_9++, VAR_13++)
  {

   if (VAR_7 && VAR_13 == VAR_7)
   {
    *VAR_8 = VAR_13;
    return VAR_10 - VAR_5;
   }

   if (*VAR_9 == '\0')
   {
    *VAR_8 = VAR_13;
    return VAR_10 - VAR_5;
   }

   if (*VAR_11 == '\0')
    break;




   if (VAR_13 > VAR_12)
   {
    if (VAR_6 == VAR_3 || VAR_6 == VAR_0)
     *VAR_11 = FUNC_1((unsigned char) *VAR_11);
    else if (VAR_6 == VAR_1)
     *VAR_11 = FUNC_2((unsigned char) *VAR_11);
    VAR_12 = VAR_13;
   }





   if (*VAR_11 != *VAR_9)
    break;
  }
 }

 return -1;
}
