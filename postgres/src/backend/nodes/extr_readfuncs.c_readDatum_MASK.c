
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Size ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (size_t) ;
 char* FUNC_5 (int*) ;

Datum
FUNC_6(bool VAR_1)
{
 Size VAR_2,
    VAR_3;
 int VAR_4;
 const char *VAR_5;
 Datum VAR_6;
 char *VAR_7;




 VAR_5 = FUNC_5(&VAR_4);
 VAR_2 = FUNC_2(VAR_5);

 VAR_5 = FUNC_5(&VAR_4);
 if (VAR_5 == ((void*)0) || VAR_5[0] != '[')
  FUNC_3(VAR_0, "expected \"[\" to start datum, but got \"%s\"; length = %zu",
    VAR_5 ? VAR_5 : "[NULL]", VAR_2);

 if (VAR_1)
 {
  if (VAR_2 > (Size) sizeof(Datum))
   FUNC_3(VAR_0, "byval datum but length = %zu", VAR_2);
  VAR_6 = (Datum) 0;
  VAR_7 = (char *) (&VAR_6);
  for (VAR_3 = 0; VAR_3 < (Size) sizeof(Datum); VAR_3++)
  {
   VAR_5 = FUNC_5(&VAR_4);
   VAR_7[VAR_3] = (char) FUNC_1(VAR_5);
  }
 }
 else if (VAR_2 <= 0)
  VAR_6 = (Datum) ((void*)0);
 else
 {
  VAR_7 = (char *) FUNC_4(VAR_2);
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  {
   VAR_5 = FUNC_5(&VAR_4);
   VAR_7[VAR_3] = (char) FUNC_1(VAR_5);
  }
  VAR_6 = FUNC_0(VAR_7);
 }

 VAR_5 = FUNC_5(&VAR_4);
 if (VAR_5 == ((void*)0) || VAR_5[0] != ']')
  FUNC_3(VAR_0, "expected \"]\" to end datum, but got \"%s\"; length = %zu",
    VAR_5 ? VAR_5 : "[NULL]", VAR_2);

 return VAR_6;
}
