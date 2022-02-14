
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = FUNC_2(VAR_1);

 if (VAR_2 && VAR_1[0] == '"' && VAR_1[VAR_4 - 1] == '"')


 {
  VAR_3 = 1;
  VAR_4--;
  FUNC_1("\"", VAR_0);
 }


 for (; VAR_3 < VAR_4; VAR_3++)
 {
  if (VAR_1[VAR_3] == '"')
   FUNC_1("\\\"", VAR_0);
  else if (VAR_1[VAR_3] == '\n')
   FUNC_1("\\\n", VAR_0);
  else if (VAR_1[VAR_3] == '\\')
  {
   int VAR_5 = VAR_3;







   do
   {
    VAR_5++;
   } while (VAR_1[VAR_5] == ' ' || VAR_1[VAR_5] == '\t');

   if ((VAR_1[VAR_5] != '\n') && (VAR_1[VAR_5] != '\r' || VAR_1[VAR_5 + 1] != '\n'))

    FUNC_1("\\\\", VAR_0);
  }
  else if (VAR_1[VAR_3] == '\r' && VAR_1[VAR_3 + 1] == '\n')
  {
   FUNC_1("\\\r\n", VAR_0);
   VAR_3++;
  }
  else
   FUNC_0(VAR_1[VAR_3], VAR_0);
 }

 if (VAR_2 && VAR_1[0] == '"' && VAR_1[VAR_4] == '"')
  FUNC_1("\"", VAR_0);
}
