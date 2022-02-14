
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bool
FUNC_8(char **VAR_1, int VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4 = 1,
    VAR_5 = 0;

 for (; (*VAR_1)[VAR_5] != '\0'; VAR_5++)
 {
  if ((*VAR_1)[VAR_5] == '\'')
   VAR_3 = VAR_3 ? 0 : 1;

  if (VAR_3 || (((*VAR_1)[VAR_5] != ':') && ((*VAR_1)[VAR_5] != '?')))
   continue;

  if (((*VAR_1)[VAR_5] == ':') && ((*VAR_1)[VAR_5 + 1] == ':'))
   VAR_5 += 2;
  else
  {

   int VAR_6 = sizeof(int) * VAR_0 * 10 / 3;
   int VAR_7;
   char *VAR_8,
        *VAR_9;

   if (!(VAR_8 = (char *) FUNC_0(VAR_6, VAR_2)))
    return 0;

   FUNC_4(VAR_8, VAR_6, "$%d", VAR_4++);

   for (VAR_7 = 1; (*VAR_1)[VAR_5 + VAR_7] && FUNC_2((*VAR_1)[VAR_5 + VAR_7]); VAR_7++)
                ;
   if (!(VAR_9 = (char *) FUNC_0(FUNC_7(*VAR_1) -VAR_7 + FUNC_7(VAR_8) + 1, VAR_2)))
   {
    FUNC_1(VAR_8);
    return 0;
   }

   FUNC_3(VAR_9, *VAR_1, VAR_5);
   FUNC_6(VAR_9 + VAR_5, VAR_8);
   FUNC_5(VAR_9, (*VAR_1) +VAR_5 + VAR_7);

   FUNC_1(*VAR_1);
   FUNC_1(VAR_8);

   *VAR_1 = VAR_9;

   if ((*VAR_1)[VAR_5] == '\0')
    VAR_5--;

  }
 }
 return 1;
}
