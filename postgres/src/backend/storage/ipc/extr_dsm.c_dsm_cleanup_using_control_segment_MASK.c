
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32 ;
typedef int dsm_handle ;
struct TYPE_5__ {size_t nitems; TYPE_1__* item; } ;
typedef TYPE_2__ dsm_control_header ;
struct TYPE_4__ {size_t refcnt; int handle; } ;
typedef int Size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ,void**,void**,int *,int ) ;
 int FUNC_2 (int ,char*,int ,...) ;

void
FUNC_3(dsm_handle VAR_6)
{
 void *VAR_7 = ((void*)0);
 void *VAR_8 = ((void*)0);
 void *VAR_9 = ((void*)0);
 void *VAR_10 = ((void*)0);
 Size VAR_11 = 0;
 Size VAR_12 = 0;
 uint32 VAR_13;
 uint32 VAR_14;
 dsm_control_header *VAR_15;







 if (!FUNC_1(VAR_2, VAR_6, 0, &VAR_9,
      &VAR_7, &VAR_11, VAR_0))
  return;





 VAR_15 = (dsm_control_header *) VAR_7;
 if (!FUNC_0(VAR_15, VAR_11))
 {
  FUNC_1(VAR_4, VAR_6, 0, &VAR_9,
     &VAR_7, &VAR_11, VAR_5);
  return;
 }





 VAR_13 = VAR_15->nitems;
 for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14)
 {
  dsm_handle VAR_16;
  uint32 VAR_17;


  VAR_17 = VAR_15->item[VAR_14].refcnt;
  if (VAR_17 == 0)
   continue;


  VAR_16 = VAR_15->item[VAR_14].handle;
  FUNC_2(VAR_1, "cleaning up orphaned dynamic shared memory with ID %u (reference count %u)",
    VAR_16, VAR_17);


  FUNC_1(VAR_3, VAR_16, 0, &VAR_10,
     &VAR_8, &VAR_12, VAR_5);
 }


 FUNC_2(VAR_1,
   "cleaning up dynamic shared memory control segment with ID %u",
   VAR_6);
 FUNC_1(VAR_3, VAR_6, 0, &VAR_9,
    &VAR_7, &VAR_11, VAR_5);
}
