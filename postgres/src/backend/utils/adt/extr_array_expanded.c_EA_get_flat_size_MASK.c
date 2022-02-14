
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ea_magic; int nelems; int ndims; int* dnulls; scalar_t__ flat_size; int typalign; int typlen; int * dvalues; int dims; scalar_t__ fvalue; } ;
typedef scalar_t__ Size ;
typedef int ExpandedObjectHeader ;
typedef TYPE_1__ ExpandedArrayHeader ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static Size
FUNC_11(ExpandedObjectHeader *VAR_4)
{
 ExpandedArrayHeader *VAR_5 = (ExpandedArrayHeader *) VAR_4;
 int VAR_6;
 int VAR_7;
 Datum *VAR_8;
 bool *VAR_9;
 Size VAR_10;
 int VAR_11;

 FUNC_5(VAR_5->ea_magic == VAR_0);


 if (VAR_5->fvalue)
  return FUNC_2(VAR_5->fvalue);


 if (VAR_5->flat_size)
  return VAR_5->flat_size;






 VAR_6 = VAR_5->nelems;
 VAR_7 = VAR_5->ndims;
 FUNC_5(VAR_6 == FUNC_4(VAR_7, VAR_5->dims));
 VAR_8 = VAR_5->dvalues;
 VAR_9 = VAR_5->dnulls;
 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
 {
  if (VAR_9 && VAR_9[VAR_11])
   continue;
  VAR_10 = FUNC_6(VAR_10, VAR_5->typlen, VAR_8[VAR_11]);
  VAR_10 = FUNC_7(VAR_10, VAR_5->typalign);

  if (!FUNC_3(VAR_10))
   FUNC_8(VAR_2,
     (FUNC_9(VAR_1),
      FUNC_10("array size exceeds the maximum allowed (%d)",
       (int) VAR_3)));
 }

 if (VAR_9)
  VAR_10 += FUNC_1(VAR_7, VAR_6);
 else
  VAR_10 += FUNC_0(VAR_7);


 VAR_5->flat_size = VAR_10;

 return VAR_10;
}
