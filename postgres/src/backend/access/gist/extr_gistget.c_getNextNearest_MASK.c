
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int orderByTypes; } ;
struct TYPE_14__ {TYPE_4__* recontup; int recheckDistances; int recheck; int heapPtr; } ;
struct TYPE_15__ {TYPE_1__ heap; } ;
struct TYPE_17__ {int distances; TYPE_2__ data; } ;
struct TYPE_16__ {TYPE_4__* xs_hitup; scalar_t__ xs_want_itup; int xs_recheck; int xs_heaptid; int opaque; } ;
typedef TYPE_3__* IndexScanDesc ;
typedef TYPE_4__ GISTSearchItem ;
typedef TYPE_5__* GISTScanOpaque ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_4__) ;
 TYPE_4__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int ,int *,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static bool
FUNC_6(IndexScanDesc VAR_0)
{
 GISTScanOpaque VAR_1 = (GISTScanOpaque) VAR_0->opaque;
 bool VAR_2 = 0;

 if (VAR_0->xs_hitup)
 {

  FUNC_5(VAR_0->xs_hitup);
  VAR_0->xs_hitup = ((void*)0);
 }

 do
 {
  GISTSearchItem *VAR_3 = FUNC_2(VAR_1);

  if (!VAR_3)
   break;

  if (FUNC_1(*VAR_3))
  {

   VAR_0->xs_heaptid = VAR_3->data.heap.heapPtr;
   VAR_0->xs_recheck = VAR_3->data.heap.recheck;

   FUNC_4(VAR_0, VAR_1->orderByTypes,
             VAR_3->distances,
             VAR_3->data.heap.recheckDistances);


   if (VAR_0->xs_want_itup)
    VAR_0->xs_hitup = VAR_3->data.heap.recontup;
   VAR_2 = 1;
  }
  else
  {

   FUNC_0();

   FUNC_3(VAR_0, VAR_3, VAR_3->distances, ((void*)0), ((void*)0));
  }

  FUNC_5(VAR_3);
 } while (!VAR_2);

 return VAR_2;
}
