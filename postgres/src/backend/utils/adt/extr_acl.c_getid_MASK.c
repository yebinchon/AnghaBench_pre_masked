
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (unsigned char) ;

__attribute__((used)) static const char *
FUNC_7(const char *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;
 bool VAR_6 = 0;

 FUNC_0(VAR_3 && VAR_4);

 while (FUNC_6((unsigned char) *VAR_3))
  VAR_3++;

 for (;
   *VAR_3 != '\0' &&
   (FUNC_5((unsigned char) *VAR_3) ||
    *VAR_3 == '_' ||
    *VAR_3 == '"' ||
    VAR_6);
   VAR_3++)
 {
  if (*VAR_3 == '"')
  {

   if (*(VAR_3 + 1) != '"')
   {
    VAR_6 = !VAR_6;
    continue;
   }

   VAR_3++;
  }


  if (VAR_5 >= VAR_2 - 1)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_4("identifier too long"),
      FUNC_3("Identifier must be less than %d characters.",
          VAR_2)));

  VAR_4[VAR_5++] = *VAR_3;
 }
 VAR_4[VAR_5] = '\0';
 while (FUNC_6((unsigned char) *VAR_3))
  VAR_3++;
 return VAR_3;
}
