
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int Oid ;
typedef int JsonTypeCategory ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_0, int VAR_1, int VAR_2, int *VAR_3, Datum *VAR_4,
      bool *VAR_5, int *VAR_6, JsonTypeCategory VAR_7,
      Oid VAR_8, bool VAR_9)
{
 int VAR_10;
 const char *VAR_11;

 FUNC_0(VAR_1 < VAR_2);

 VAR_11 = VAR_9 ? ",\n " : ",";

 FUNC_1(VAR_0, '[');

 for (VAR_10 = 1; VAR_10 <= VAR_3[VAR_1]; VAR_10++)
 {
  if (VAR_10 > 1)
   FUNC_2(VAR_0, VAR_11);

  if (VAR_1 + 1 == VAR_2)
  {
   FUNC_3(VAR_4[*VAR_6], VAR_5[*VAR_6], VAR_0, VAR_7,
        VAR_8, 0);
   (*VAR_6)++;
  }
  else
  {




   FUNC_4(VAR_0, VAR_1 + 1, VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8, 0);
  }
 }

 FUNC_1(VAR_0, ']');
}
