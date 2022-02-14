
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char bits8 ;
struct TYPE_5__ {scalar_t__ array_type; int ndims; char* dims; int* lbs; int abytes; char* data; int nbytes; char* nullbitmap; int nitems; int aitems; int mcontext; } ;
typedef scalar_t__ Pointer ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef int Datum ;
typedef int ArrayType ;
typedef TYPE_1__ ArrayBuildStateArr ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int*) ;
 int FUNC_9 (int) ;
 int * FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_12 (int,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int,int *,int ,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,...) ;
 TYPE_1__* FUNC_18 (scalar_t__,int ,int ,int) ;
 int FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (char*,int) ;

ArrayBuildStateArr *
FUNC_23(ArrayBuildStateArr *VAR_6,
     Datum VAR_7, bool VAR_8,
     Oid VAR_9,
     MemoryContext VAR_10)
{
 ArrayType *VAR_11;
 MemoryContext VAR_12;
 int *VAR_13,
      *VAR_14,
    VAR_15,
    VAR_16,
    VAR_17;
 char *VAR_18;
 int VAR_19;






 if (VAR_8)
  FUNC_15(VAR_3,
    (FUNC_16(VAR_1),
     FUNC_17("cannot accumulate null arrays")));


 VAR_11 = FUNC_10(VAR_7);

 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_18(VAR_9, VAR_4, VAR_10, 1);
 else
  FUNC_9(VAR_6->array_type == VAR_9);

 VAR_12 = FUNC_13(VAR_6->mcontext);


 VAR_15 = FUNC_5(VAR_11);
 VAR_13 = FUNC_2(VAR_11);
 VAR_14 = FUNC_4(VAR_11);
 VAR_18 = FUNC_1(VAR_11);
 VAR_16 = FUNC_8(VAR_15, VAR_13);
 VAR_17 = FUNC_7(VAR_11) - FUNC_0(VAR_11);

 if (VAR_6->ndims == 0)
 {



  if (VAR_15 == 0)
   FUNC_15(VAR_3,
     (FUNC_16(VAR_0),
      FUNC_17("cannot accumulate empty arrays")));
  if (VAR_15 + 1 > VAR_5)
   FUNC_15(VAR_3,
     (FUNC_16(VAR_2),
      FUNC_17("number of array dimensions (%d) exceeds the maximum allowed (%d)",
       VAR_15 + 1, VAR_5)));





  VAR_6->ndims = VAR_15 + 1;
  VAR_6->dims[0] = 0;
  FUNC_19(&VAR_6->dims[1], VAR_13, VAR_15 * sizeof(int));
  VAR_6->lbs[0] = 1;
  FUNC_19(&VAR_6->lbs[1], VAR_14, VAR_15 * sizeof(int));


  VAR_6->abytes = 1024;
  while (VAR_6->abytes <= VAR_17)
   VAR_6->abytes *= 2;
  VAR_6->data = (char *) FUNC_20(VAR_6->abytes);
 }
 else
 {

  if (VAR_6->ndims != VAR_15 + 1)
   FUNC_15(VAR_3,
     (FUNC_16(VAR_0),
      FUNC_17("cannot accumulate arrays of different dimensionality")));
  for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++)
  {
   if (VAR_6->dims[VAR_19 + 1] != VAR_13[VAR_19] || VAR_6->lbs[VAR_19 + 1] != VAR_14[VAR_19])
    FUNC_15(VAR_3,
      (FUNC_16(VAR_0),
       FUNC_17("cannot accumulate arrays of different dimensionality")));
  }


  if (VAR_6->nbytes + VAR_17 > VAR_6->abytes)
  {
   VAR_6->abytes = FUNC_12(VAR_6->abytes * 2,
         VAR_6->nbytes + VAR_17);
   VAR_6->data = (char *) FUNC_22(VAR_6->data, VAR_6->abytes);
  }
 }







 FUNC_19(VAR_6->data + VAR_6->nbytes, VAR_18, VAR_17);
 VAR_6->nbytes += VAR_17;


 if (VAR_6->nullbitmap || FUNC_3(VAR_11))
 {
  int VAR_20 = VAR_6->nitems + VAR_16;

  if (VAR_6->nullbitmap == ((void*)0))
  {




   VAR_6->aitems = 256;
   while (VAR_6->aitems <= VAR_20)
    VAR_6->aitems *= 2;
   VAR_6->nullbitmap = (bits8 *) FUNC_20((VAR_6->aitems + 7) / 8);
   FUNC_14(VAR_6->nullbitmap, 0,
         ((void*)0), 0,
         VAR_6->nitems);
  }
  else if (VAR_20 > VAR_6->aitems)
  {
   VAR_6->aitems = FUNC_12(VAR_6->aitems * 2, VAR_20);
   VAR_6->nullbitmap = (bits8 *)
    FUNC_22(VAR_6->nullbitmap, (VAR_6->aitems + 7) / 8);
  }
  FUNC_14(VAR_6->nullbitmap, VAR_6->nitems,
        FUNC_6(VAR_11), 0,
        VAR_16);
 }

 VAR_6->nitems += VAR_16;
 VAR_6->dims[0] += 1;

 FUNC_13(VAR_12);


 if ((Pointer) VAR_11 != FUNC_11(VAR_7))
  FUNC_21(VAR_11);

 return VAR_6;
}
