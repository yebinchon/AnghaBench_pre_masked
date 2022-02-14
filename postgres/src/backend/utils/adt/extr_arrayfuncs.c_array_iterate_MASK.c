
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ current_item; scalar_t__ nitems; scalar_t__ slice_ndim; char* data_ptr; int* slice_nulls; int slice_len; int typalign; int typbyval; int typlen; int arr; int slice_lbound; int slice_dims; int nullbitmap; scalar_t__* slice_values; } ;
typedef scalar_t__ Datum ;
typedef int ArrayType ;
typedef TYPE_1__* ArrayIterator ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 char* FUNC_3 (char*,int ,char*) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int * FUNC_5 (scalar_t__*,int*,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (char*,int ,int ) ;

bool
FUNC_7(ArrayIterator VAR_0, Datum *VAR_1, bool *VAR_2)
{

 if (VAR_0->current_item >= VAR_0->nitems)
  return 0;

 if (VAR_0->slice_ndim == 0)
 {



  if (FUNC_2(VAR_0->nullbitmap, VAR_0->current_item++))
  {
   *VAR_2 = 1;
   *VAR_1 = (Datum) 0;
  }
  else
  {

   char *VAR_3 = VAR_0->data_ptr;

   *VAR_2 = 0;
   *VAR_1 = FUNC_6(VAR_3, VAR_0->typbyval, VAR_0->typlen);


   VAR_3 = FUNC_3(VAR_3, VAR_0->typlen, VAR_3);
   VAR_3 = (char *) FUNC_4(VAR_3, VAR_0->typalign);
   VAR_0->data_ptr = VAR_3;
  }
 }
 else
 {



  ArrayType *VAR_4;
  Datum *VAR_5 = VAR_0->slice_values;
  bool *VAR_6 = VAR_0->slice_nulls;
  char *VAR_7 = VAR_0->data_ptr;
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_0->slice_len; VAR_8++)
  {
   if (FUNC_2(VAR_0->nullbitmap,
         VAR_0->current_item++))
   {
    VAR_6[VAR_8] = 1;
    VAR_5[VAR_8] = (Datum) 0;
   }
   else
   {
    VAR_6[VAR_8] = 0;
    VAR_5[VAR_8] = FUNC_6(VAR_7, VAR_0->typbyval, VAR_0->typlen);


    VAR_7 = FUNC_3(VAR_7, VAR_0->typlen, VAR_7);
    VAR_7 = (char *) FUNC_4(VAR_7, VAR_0->typalign);
   }
  }

  VAR_0->data_ptr = VAR_7;

  VAR_4 = FUNC_5(VAR_5,
         VAR_6,
         VAR_0->slice_ndim,
         VAR_0->slice_dims,
         VAR_0->slice_lbound,
         FUNC_0(VAR_0->arr),
         VAR_0->typlen,
         VAR_0->typbyval,
         VAR_0->typalign);

  *VAR_2 = 0;
  *VAR_1 = FUNC_1(VAR_4);
 }

 return 1;
}
