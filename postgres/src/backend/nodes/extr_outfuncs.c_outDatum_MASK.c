
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef size_t Size ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ,char*) ;
 size_t FUNC_5 (int ,int,int) ;

void
FUNC_6(StringInfo VAR_0, Datum VAR_1, int VAR_2, bool VAR_3)
{
 Size VAR_4,
    VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_5(VAR_1, VAR_3, VAR_2);

 if (VAR_3)
 {
  VAR_6 = (char *) (&VAR_1);
  FUNC_2(VAR_0, "%u [ ", (unsigned int) VAR_4);
  for (VAR_5 = 0; VAR_5 < (Size) sizeof(Datum); VAR_5++)
   FUNC_2(VAR_0, "%d ", (int) (VAR_6[VAR_5]));
  FUNC_3(VAR_0, ']');
 }
 else
 {
  VAR_6 = (char *) FUNC_0(VAR_1);
  if (!FUNC_1(VAR_6))
   FUNC_4(VAR_0, "0 [ ]");
  else
  {
   FUNC_2(VAR_0, "%u [ ", (unsigned int) VAR_4);
   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    FUNC_2(VAR_0, "%d ", (int) (VAR_6[VAR_5]));
   FUNC_3(VAR_0, ']');
  }
 }
}
