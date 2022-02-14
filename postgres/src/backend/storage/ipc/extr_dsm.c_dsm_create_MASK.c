
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_9__ {scalar_t__ mapped_size; scalar_t__ handle; size_t control_slot; int node; int * resowner; int * mapped_address; int impl_private; } ;
typedef TYPE_2__ dsm_segment ;
struct TYPE_10__ {size_t nitems; size_t maxitems; TYPE_1__* item; } ;
struct TYPE_8__ {int refcnt; scalar_t__ handle; int pinned; int * impl_private_pm_handle; } ;
typedef int Size ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 TYPE_6__* VAR_10 ;
 TYPE_2__* FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ,int *,int **,scalar_t__*,int ) ;
 int VAR_11 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 () ;

dsm_segment *
FUNC_13(Size VAR_12, int VAR_13)
{
 dsm_segment *VAR_14;
 uint32 VAR_15;
 uint32 VAR_16;


 FUNC_0(VAR_7);

 if (!VAR_11)
  FUNC_5();


 VAR_14 = FUNC_6();


 for (;;)
 {
  FUNC_0(VAR_14->mapped_address == ((void*)0) && VAR_14->mapped_size == 0);
  VAR_14->handle = FUNC_12();
  if (VAR_14->handle == VAR_1)
   continue;
  if (FUNC_7(VAR_2, VAR_14->handle, VAR_12, &VAR_14->impl_private,
      &VAR_14->mapped_address, &VAR_14->mapped_size, VAR_6))
   break;
 }


 FUNC_1(VAR_4, VAR_8);


 VAR_16 = VAR_10->nitems;
 for (VAR_15 = 0; VAR_15 < VAR_16; ++VAR_15)
 {
  if (VAR_10->item[VAR_15].refcnt == 0)
  {
   VAR_10->item[VAR_15].handle = VAR_14->handle;

   VAR_10->item[VAR_15].refcnt = 2;
   VAR_10->item[VAR_15].impl_private_pm_handle = ((void*)0);
   VAR_10->item[VAR_15].pinned = 0;
   VAR_14->control_slot = VAR_15;
   FUNC_2(VAR_4);
   return VAR_14;
  }
 }


 if (VAR_16 >= VAR_10->maxitems)
 {
  if ((VAR_13 & VAR_0) != 0)
  {
   FUNC_2(VAR_4);
   FUNC_7(VAR_3, VAR_14->handle, 0, &VAR_14->impl_private,
      &VAR_14->mapped_address, &VAR_14->mapped_size, VAR_9);
   if (VAR_14->resowner != ((void*)0))
    FUNC_3(VAR_14->resowner, VAR_14);
   FUNC_4(&VAR_14->node);
   FUNC_11(VAR_14);
   return ((void*)0);
  }
  FUNC_8(VAR_6,
    (FUNC_9(VAR_5),
     FUNC_10("too many dynamic shared memory segments")));
 }


 VAR_10->item[VAR_16].handle = VAR_14->handle;

 VAR_10->item[VAR_16].refcnt = 2;
 VAR_10->item[VAR_16].impl_private_pm_handle = ((void*)0);
 VAR_10->item[VAR_16].pinned = 0;
 VAR_14->control_slot = VAR_16;
 VAR_10->nitems++;
 FUNC_2(VAR_4);

 return VAR_14;
}
