
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PLyDatumToOb ;
typedef int Datum ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int * FUNC_5 (int *,char*,char*) ;
 int * FUNC_6 (int *,char*) ;
 int VAR_1 ;

__attribute__((used)) static PyObject *
FUNC_7(PLyDatumToOb *VAR_2, Datum VAR_3)
{
 static PyObject *VAR_4;
 char *VAR_5;
 PyObject *VAR_6;


 if (!VAR_4)
 {
  PyObject *VAR_7;

  VAR_7 = FUNC_4("cdecimal");
  if (!VAR_7)
  {
   FUNC_3();
   VAR_7 = FUNC_4("decimal");
  }
  if (!VAR_7)
   FUNC_2(VAR_0, "could not import a module for Decimal constructor");

  VAR_4 = FUNC_6(VAR_7, "Decimal");
  if (!VAR_4)
   FUNC_2(VAR_0, "no Decimal attribute in module");
 }

 VAR_5 = FUNC_0(FUNC_1(VAR_1, VAR_3));
 VAR_6 = FUNC_5(VAR_4, "s", VAR_5);
 if (!VAR_6)
  FUNC_2(VAR_0, "conversion from numeric to Decimal failed");

 return VAR_6;
}
