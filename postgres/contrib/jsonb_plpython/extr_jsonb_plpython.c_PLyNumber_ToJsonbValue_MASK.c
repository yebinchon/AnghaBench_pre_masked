
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numeric; } ;
struct TYPE_6__ {TYPE_1__ val; int type; } ;
typedef int PyObject ;
typedef int Numeric ;
typedef TYPE_2__ JsonbValue ;
typedef int Datum ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static JsonbValue *
FUNC_14(PyObject *VAR_6, JsonbValue *VAR_7)
{
 Numeric VAR_8;
 char *VAR_9 = FUNC_8(VAR_6);

 FUNC_7();
 {
  Datum VAR_10;

  VAR_10 = FUNC_2(VAR_5,
           FUNC_0(VAR_9),
           FUNC_4(VAR_3),
           FUNC_3(-1));
  VAR_8 = FUNC_1(VAR_10);
 }
 FUNC_5();
 {
  FUNC_9(VAR_2,
    (FUNC_10(VAR_0),
     (FUNC_11("could not convert value \"%s\" to jsonb", VAR_9))));
 }
 FUNC_6();

 FUNC_13(VAR_9);






 if (FUNC_12(VAR_8))
  FUNC_9(VAR_2,
    (FUNC_10(VAR_1),
     (FUNC_11("cannot convert NaN to jsonb"))));

 VAR_7->type = VAR_4;
 VAR_7->val.numeric = VAR_8;

 return VAR_7;
}
