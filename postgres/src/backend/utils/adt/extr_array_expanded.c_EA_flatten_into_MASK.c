
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_9__ {int ndim; int elemtype; scalar_t__ dataoffset; } ;
struct TYPE_8__ {scalar_t__ ea_magic; scalar_t__ flat_size; int nelems; int ndims; int typalign; int typbyval; int typlen; scalar_t__ dnulls; int dvalues; scalar_t__ lbound; scalar_t__ dims; int element_type; scalar_t__ fvalue; } ;
typedef scalar_t__ Size ;
typedef int ExpandedObjectHeader ;
typedef TYPE_1__ ExpandedArrayHeader ;
typedef TYPE_2__ ArrayType ;


 void* FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ,scalar_t__,int,int ,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (void*,scalar_t__,int) ;
 int FUNC_8 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(ExpandedObjectHeader *VAR_1,
    void *VAR_2, Size VAR_3)
{
 ExpandedArrayHeader *VAR_4 = (ExpandedArrayHeader *) VAR_1;
 ArrayType *VAR_5 = (ArrayType *) VAR_2;
 int VAR_6;
 int VAR_7;
 int32 VAR_8;

 FUNC_4(VAR_4->ea_magic == VAR_0);


 if (VAR_4->fvalue)
 {
  FUNC_4(VAR_3 == FUNC_3(VAR_4->fvalue));
  FUNC_7(VAR_2, VAR_4->fvalue, VAR_3);
  return;
 }


 FUNC_4(VAR_3 == VAR_4->flat_size);


 VAR_6 = VAR_4->nelems;
 VAR_7 = VAR_4->ndims;

 if (VAR_4->dnulls)
  VAR_8 = FUNC_2(VAR_7, VAR_6);
 else
  VAR_8 = 0;


 FUNC_8(VAR_5, 0, VAR_3);

 FUNC_6(VAR_5, VAR_3);
 VAR_5->ndim = VAR_7;
 VAR_5->dataoffset = VAR_8;
 VAR_5->elemtype = VAR_4->element_type;
 FUNC_7(FUNC_0(VAR_5), VAR_4->dims, VAR_7 * sizeof(int));
 FUNC_7(FUNC_1(VAR_5), VAR_4->lbound, VAR_7 * sizeof(int));

 FUNC_5(VAR_5,
     VAR_4->dvalues, VAR_4->dnulls, VAR_6,
     VAR_4->typlen, VAR_4->typbyval, VAR_4->typalign,
     0);
}
