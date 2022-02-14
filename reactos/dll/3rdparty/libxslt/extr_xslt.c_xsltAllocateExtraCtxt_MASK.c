
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltRuntimeExtraPtr ;
typedef int xsltRuntimeExtra ;
struct TYPE_7__ {int * ptr; } ;
struct TYPE_9__ {TYPE_1__ val; int * deallocate; int * info; } ;
struct TYPE_8__ {int extrasNr; int extrasMax; TYPE_3__* extras; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_2__*,int *,int *,char*) ;

int
FUNC_3(xsltTransformContextPtr VAR_0)
{
    if (VAR_0->extrasNr >= VAR_0->extrasMax) {
 int VAR_1;
 if (VAR_0->extrasNr == 0) {
     VAR_0->extrasMax = 20;
     VAR_0->extras = (xsltRuntimeExtraPtr)
  FUNC_0(VAR_0->extrasMax * sizeof(xsltRuntimeExtra));
     if (VAR_0->extras == ((void*)0)) {
  FUNC_2(VAR_0, ((void*)0), ((void*)0),
   "xsltAllocateExtraCtxt: out of memory\n");
  return(0);
     }
     for (VAR_1 = 0;VAR_1 < VAR_0->extrasMax;VAR_1++) {
  VAR_0->extras[VAR_1].info = ((void*)0);
  VAR_0->extras[VAR_1].deallocate = ((void*)0);
  VAR_0->extras[VAR_1].val.ptr = ((void*)0);
     }

 } else {
     xsltRuntimeExtraPtr VAR_2;

     VAR_0->extrasMax += 100;
     VAR_2 = (xsltRuntimeExtraPtr) FUNC_1(VAR_0->extras,
              VAR_0->extrasMax * sizeof(xsltRuntimeExtra));
     if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_0, ((void*)0), ((void*)0),
   "xsltAllocateExtraCtxt: out of memory\n");
  return(0);
     }
     VAR_0->extras = VAR_2;
     for (VAR_1 = VAR_0->extrasNr;VAR_1 < VAR_0->extrasMax;VAR_1++) {
  VAR_0->extras[VAR_1].info = ((void*)0);
  VAR_0->extras[VAR_1].deallocate = ((void*)0);
  VAR_0->extras[VAR_1].val.ptr = ((void*)0);
     }
 }
    }
    return(VAR_0->extrasNr++);
}
