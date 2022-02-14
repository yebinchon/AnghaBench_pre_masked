
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ element_type; int typalign; scalar_t__ typbyval; int typlen; } ;
struct TYPE_6__ {scalar_t__ ea_magic; scalar_t__ element_type; char* fendptr; int hdr; int fstartptr; int * fvalue; scalar_t__ flat_size; scalar_t__ nelems; scalar_t__ dvalueslen; int * dnulls; int * dvalues; int typalign; scalar_t__ typbyval; int typlen; int lbound; int dims; int ndims; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ExpandedArrayHeader ;
typedef int Datum ;
typedef int ArrayType ;
typedef TYPE_2__ ArrayMetaState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int ) ;
 scalar_t__ FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_17 (scalar_t__,int *,scalar_t__*,int *) ;

Datum
FUNC_18(Datum VAR_3, MemoryContext VAR_4,
    ArrayMetaState *VAR_5)
{
 ArrayType *VAR_6;
 ExpandedArrayHeader *VAR_7;
 MemoryContext VAR_8;
 MemoryContext VAR_9;
 ArrayMetaState VAR_10;






 VAR_8 = FUNC_6(VAR_4,
           "expanded array",
           VAR_0);


 VAR_7 = (ExpandedArrayHeader *)
  FUNC_13(VAR_8, sizeof(ExpandedArrayHeader));

 FUNC_12(&VAR_7->hdr, &VAR_2, VAR_8);
 VAR_7->ea_magic = VAR_1;


 if (FUNC_15(FUNC_10(VAR_3)))
 {
  ExpandedArrayHeader *VAR_11 = (ExpandedArrayHeader *) FUNC_9(VAR_3);

  FUNC_7(VAR_11->ea_magic == VAR_1);
  if (VAR_5 == ((void*)0))
   VAR_5 = &VAR_10;
  VAR_5->element_type = VAR_11->element_type;
  VAR_5->typlen = VAR_11->typlen;
  VAR_5->typbyval = VAR_11->typbyval;
  VAR_5->typalign = VAR_11->typalign;







  if (VAR_11->typbyval && VAR_11->dvalues != ((void*)0))
  {
   FUNC_16(VAR_7, VAR_11);

   return FUNC_11(&VAR_7->hdr);
  }
 }
 VAR_9 = FUNC_14(VAR_8);
 VAR_6 = FUNC_8(VAR_3);
 FUNC_14(VAR_9);

 VAR_7->ndims = FUNC_4(VAR_6);

 VAR_7->dims = FUNC_1(VAR_6);
 VAR_7->lbound = FUNC_3(VAR_6);


 VAR_7->element_type = FUNC_2(VAR_6);
 if (VAR_5 && VAR_5->element_type == VAR_7->element_type)
 {

  VAR_7->typlen = VAR_5->typlen;
  VAR_7->typbyval = VAR_5->typbyval;
  VAR_7->typalign = VAR_5->typalign;
 }
 else
 {

  FUNC_17(VAR_7->element_type,
        &VAR_7->typlen,
        &VAR_7->typbyval,
        &VAR_7->typalign);

  if (VAR_5)
  {
   VAR_5->element_type = VAR_7->element_type;
   VAR_5->typlen = VAR_7->typlen;
   VAR_5->typbyval = VAR_7->typbyval;
   VAR_5->typalign = VAR_7->typalign;
  }
 }


 VAR_7->dvalues = ((void*)0);
 VAR_7->dnulls = ((void*)0);
 VAR_7->dvalueslen = 0;
 VAR_7->nelems = 0;
 VAR_7->flat_size = 0;


 VAR_7->fvalue = VAR_6;
 VAR_7->fstartptr = FUNC_0(VAR_6);
 VAR_7->fendptr = ((char *) VAR_6) + FUNC_5(VAR_6);


 return FUNC_11(&VAR_7->hdr);
}
