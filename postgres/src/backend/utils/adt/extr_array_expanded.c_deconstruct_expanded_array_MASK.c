
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eoh_context; } ;
struct TYPE_5__ {int* dnulls; int dvalueslen; int nelems; int * dvalues; int fvalue; int typalign; int typbyval; int typlen; int element_type; TYPE_1__ hdr; } ;
typedef int MemoryContext ;
typedef TYPE_2__ ExpandedArrayHeader ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int **,int**,int*) ;

void
FUNC_3(ExpandedArrayHeader *VAR_0)
{
 if (VAR_0->dvalues == ((void*)0))
 {
  MemoryContext VAR_1 = FUNC_1(VAR_0->hdr.eoh_context);
  Datum *VAR_2;
  bool *VAR_3;
  int VAR_4;

  VAR_3 = ((void*)0);
  FUNC_2(VAR_0->fvalue,
        VAR_0->element_type,
        VAR_0->typlen, VAR_0->typbyval, VAR_0->typalign,
        &VAR_2,
        FUNC_0(VAR_0->fvalue) ? &VAR_3 : ((void*)0),
        &VAR_4);
  VAR_0->dvalues = VAR_2;
  VAR_0->dnulls = VAR_3;
  VAR_0->dvalueslen = VAR_0->nelems = VAR_4;
  FUNC_1(VAR_1);
 }
}
