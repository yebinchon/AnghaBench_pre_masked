
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {scalar_t__ forkNum; scalar_t__ blockNum; int rnode; } ;
struct TYPE_4__ {int state; TYPE_3__ tag; } ;
typedef int RelFileNode ;
typedef int LocalBufferLookupEnt ;
typedef scalar_t__ ForkNumber ;
typedef TYPE_1__ BufferDesc ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,void*,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int ,scalar_t__) ;

void
FUNC_8(RelFileNode VAR_9, ForkNumber VAR_10,
       BlockNumber VAR_11)
{
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
 {
  BufferDesc *VAR_13 = FUNC_1(VAR_12);
  LocalBufferLookupEnt *VAR_14;
  uint32 VAR_15;

  VAR_15 = FUNC_5(&VAR_13->state);

  if ((VAR_15 & VAR_0) &&
   FUNC_2(VAR_13->tag.rnode, VAR_9) &&
   VAR_13->tag.forkNum == VAR_10 &&
   VAR_13->tag.blockNum >= VAR_11)
  {
   if (VAR_6[VAR_12] != 0)
    FUNC_3(VAR_3, "block %u of %s is still referenced (local %u)",
      VAR_13->tag.blockNum,
      FUNC_7(VAR_13->tag.rnode, VAR_7,
         VAR_13->tag.forkNum),
      VAR_6[VAR_12]);

   VAR_14 = (LocalBufferLookupEnt *)
    FUNC_4(VAR_5, (void *) &VAR_13->tag,
       VAR_4, ((void*)0));
   if (!VAR_14)
    FUNC_3(VAR_3, "local buffer hash table corrupted");

   FUNC_0(VAR_13->tag);
   VAR_15 &= ~VAR_1;
   VAR_15 &= ~VAR_2;
   FUNC_6(&VAR_13->state, VAR_15);
  }
 }
}
