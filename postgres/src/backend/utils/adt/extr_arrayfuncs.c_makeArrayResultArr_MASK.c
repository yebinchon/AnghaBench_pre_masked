
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int ndims; int nbytes; int mcontext; int private_cxt; int nitems; int * nullbitmap; int data; int lbs; int dims; int element_type; } ;
struct TYPE_11__ {int ndim; int dataoffset; int elemtype; } ;
typedef int MemoryContext ;
typedef int Datum ;
typedef TYPE_1__ ArrayType ;
typedef TYPE_2__ ArrayBuildStateArr ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int ,int ,int *,int ,int ) ;
 TYPE_1__* FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int) ;
 scalar_t__ FUNC_14 (int) ;

Datum
FUNC_15(ArrayBuildStateArr *VAR_0,
       MemoryContext VAR_1,
       bool VAR_2)
{
 ArrayType *VAR_3;
 MemoryContext VAR_4;


 VAR_4 = FUNC_8(VAR_1);

 if (VAR_0->ndims == 0)
 {

  VAR_3 = FUNC_12(VAR_0->element_type);
 }
 else
 {
  int VAR_5,
     VAR_6;


  VAR_6 = VAR_0->nbytes;
  if (VAR_0->nullbitmap != ((void*)0))
  {
   VAR_5 = FUNC_5(VAR_0->ndims, VAR_0->nitems);
   VAR_6 += VAR_5;
  }
  else
  {
   VAR_5 = 0;
   VAR_6 += FUNC_4(VAR_0->ndims);
  }

  VAR_3 = (ArrayType *) FUNC_14(VAR_6);
  FUNC_10(VAR_3, VAR_6);
  VAR_3->ndim = VAR_0->ndims;
  VAR_3->dataoffset = VAR_5;
  VAR_3->elemtype = VAR_0->element_type;

  FUNC_13(FUNC_1(VAR_3), VAR_0->dims, VAR_0->ndims * sizeof(int));
  FUNC_13(FUNC_2(VAR_3), VAR_0->lbs, VAR_0->ndims * sizeof(int));
  FUNC_13(FUNC_0(VAR_3), VAR_0->data, VAR_0->nbytes);

  if (VAR_0->nullbitmap != ((void*)0))
   FUNC_11(FUNC_3(VAR_3), 0,
         VAR_0->nullbitmap, 0,
         VAR_0->nitems);
 }

 FUNC_8(VAR_4);


 if (VAR_2)
 {
  FUNC_6(VAR_0->private_cxt);
  FUNC_7(VAR_0->mcontext);
 }

 return FUNC_9(VAR_3);
}
