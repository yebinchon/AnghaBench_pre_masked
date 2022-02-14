
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ea_magic; int typlen; int typbyval; char typalign; int ndims; int* dims; int* lbound; int* dnulls; int * dvalues; } ;
typedef TYPE_1__ ExpandedArrayHeader ;
typedef int Datum ;


 int FUNC_0 (int,int*,int*,int*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static Datum
FUNC_4(Datum VAR_2,
         int VAR_3, int *VAR_4,
         int VAR_5,
         int VAR_6, bool VAR_7, char VAR_8,
         bool *VAR_9)
{
 ExpandedArrayHeader *VAR_10;
 int VAR_11,
    VAR_12,
      *VAR_13,
      *VAR_14,
    VAR_15;
 Datum *VAR_16;
 bool *VAR_17;

 VAR_10 = (ExpandedArrayHeader *) FUNC_2(VAR_2);
 FUNC_1(VAR_10->ea_magic == VAR_0);


 FUNC_1(VAR_5 == -1);
 FUNC_1(VAR_6 == VAR_10->typlen);
 FUNC_1(VAR_7 == VAR_10->typbyval);
 FUNC_1(VAR_8 == VAR_10->typalign);

 VAR_12 = VAR_10->ndims;
 VAR_13 = VAR_10->dims;
 VAR_14 = VAR_10->lbound;




 if (VAR_12 != VAR_3 || VAR_12 <= 0 || VAR_12 > VAR_1)
 {
  *VAR_9 = 1;
  return (Datum) 0;
 }
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
 {
  if (VAR_4[VAR_11] < VAR_14[VAR_11] || VAR_4[VAR_11] >= (VAR_13[VAR_11] + VAR_14[VAR_11]))
  {
   *VAR_9 = 1;
   return (Datum) 0;
  }
 }




 VAR_15 = FUNC_0(VAR_3, VAR_13, VAR_14, VAR_4);





 FUNC_3(VAR_10);

 VAR_16 = VAR_10->dvalues;
 VAR_17 = VAR_10->dnulls;




 if (VAR_17 && VAR_17[VAR_15])
 {
  *VAR_9 = 1;
  return (Datum) 0;
 }







 *VAR_9 = 0;
 return VAR_16[VAR_15];
}
