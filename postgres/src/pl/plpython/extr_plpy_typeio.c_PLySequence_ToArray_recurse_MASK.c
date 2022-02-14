
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* func ) (TYPE_1__*,int *,int*,int) ;} ;
typedef int PyObject ;
typedef TYPE_1__ PLyObToDatum ;
typedef int Datum ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (TYPE_1__*,int *,int*,int) ;

__attribute__((used)) static void
FUNC_7(PLyObToDatum *VAR_1, PyObject *VAR_2,
       int *VAR_3, int VAR_4, int VAR_5,
       Datum *VAR_6, bool *VAR_7, int *VAR_8)
{
 int VAR_9;

 if (FUNC_1(VAR_2) != VAR_3[VAR_5])
  FUNC_3(VAR_0,
    (FUNC_5("wrong length of inner sequence: has length %d, but %d was expected",
      (int) FUNC_1(VAR_2), VAR_3[VAR_5]),
     (FUNC_4("To construct a multidimensional array, the inner sequences must all have the same length."))));

 if (VAR_5 < VAR_4 - 1)
 {
  for (VAR_9 = 0; VAR_9 < VAR_3[VAR_5]; VAR_9++)
  {
   PyObject *VAR_10 = FUNC_0(VAR_2, VAR_9);

   FUNC_7(VAR_1, VAR_10, VAR_3, VAR_4, VAR_5 + 1,
          VAR_6, VAR_7, VAR_8);
   FUNC_2(VAR_10);
  }
 }
 else
 {
  for (VAR_9 = 0; VAR_9 < VAR_3[VAR_5]; VAR_9++)
  {
   PyObject *VAR_11 = FUNC_0(VAR_2, VAR_9);

   VAR_6[*VAR_8] = VAR_1->func(VAR_1, VAR_11, &VAR_7[*VAR_8], 1);
   FUNC_2(VAR_11);
   (*VAR_8)++;
  }
 }
}
