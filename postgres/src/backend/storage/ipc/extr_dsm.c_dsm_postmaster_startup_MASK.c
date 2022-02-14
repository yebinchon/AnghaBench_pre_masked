
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_6__ {scalar_t__ maxitems; scalar_t__ nitems; int magic; } ;
struct TYPE_5__ {scalar_t__ dsm_control; } ;
typedef int Size ;
typedef TYPE_1__ PGShmemHeader ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 TYPE_3__* VAR_10 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,int *,void**,scalar_t__*,int ) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int ,char*,scalar_t__,...) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 () ;

void
FUNC_8(PGShmemHeader *VAR_16)
{
 void *VAR_17 = ((void*)0);
 uint32 VAR_18;
 Size VAR_19;

 FUNC_0(!VAR_5);







 if (VAR_15 == VAR_2)
  FUNC_2();


 VAR_18 = VAR_8
  + VAR_9 * VAR_6;
 FUNC_5(VAR_0, "dynamic shared memory system will support %u segments",
   VAR_18);
 VAR_19 = FUNC_3(VAR_18);







 for (;;)
 {
  FUNC_0(VAR_17 == ((void*)0));
  FUNC_0(VAR_13 == 0);
  VAR_11 = FUNC_7();
  if (VAR_11 == VAR_1)
   continue;
  if (FUNC_4(VAR_3, VAR_11, VAR_19,
      &VAR_12, &VAR_17,
      &VAR_13, VAR_4))
   break;
 }
 VAR_10 = VAR_17;
 FUNC_6(VAR_14, FUNC_1(VAR_16));
 FUNC_5(VAR_0,
   "created dynamic shared memory control segment %u (%zu bytes)",
   VAR_11, VAR_19);
 VAR_16->dsm_control = VAR_11;


 VAR_10->magic = VAR_7;
 VAR_10->nitems = 0;
 VAR_10->maxitems = VAR_18;
}
