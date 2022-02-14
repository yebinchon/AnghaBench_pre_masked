
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bits8 ;
struct TYPE_4__ {int typalign; int typlen; int * (* func ) (TYPE_1__*,int ) ;int typbyval; } ;
typedef int PyObject ;
typedef TYPE_1__ PLyDatumToOb ;
typedef int Datum ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 char* FUNC_3 (char*,int ,char*) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int * FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static PyObject *
FUNC_7(PLyDatumToOb *VAR_1, int *VAR_2, int VAR_3, int VAR_4,
        char **VAR_5, bits8 **VAR_6, int *VAR_7)
{
 int VAR_8;
 PyObject *VAR_9;

 VAR_9 = FUNC_0(VAR_2[VAR_4]);
 if (!VAR_9)
  return ((void*)0);

 if (VAR_4 < VAR_3 - 1)
 {

  for (VAR_8 = 0; VAR_8 < VAR_2[VAR_4]; VAR_8++)
  {
   PyObject *VAR_10;

   VAR_10 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4 + 1,
            VAR_5, VAR_6, VAR_7);
   FUNC_1(VAR_9, VAR_8, VAR_10);
  }
 }
 else
 {




  char *VAR_11 = *VAR_5;
  bits8 *VAR_12 = *VAR_6;
  int VAR_13 = *VAR_7;

  for (VAR_8 = 0; VAR_8 < VAR_2[VAR_4]; VAR_8++)
  {

   if (VAR_12 && (*VAR_12 & VAR_13) == 0)
   {
    FUNC_2(VAR_0);
    FUNC_1(VAR_9, VAR_8, VAR_0);
   }
   else
   {
    Datum VAR_14;

    VAR_14 = FUNC_5(VAR_11, VAR_1->typbyval, VAR_1->typlen);
    FUNC_1(VAR_9, VAR_8, VAR_1->func(VAR_1, VAR_14));
    VAR_11 = FUNC_3(VAR_11, VAR_1->typlen, VAR_11);
    VAR_11 = (char *) FUNC_4(VAR_11, VAR_1->typalign);
   }


   if (VAR_12)
   {
    VAR_13 <<= 1;
    if (VAR_13 == 0x100 )
    {
     VAR_12++;
     VAR_13 = 1;
    }
   }
  }

  *VAR_5 = VAR_11;
  *VAR_6 = VAR_12;
  *VAR_7 = VAR_13;
 }

 return VAR_9;
}
