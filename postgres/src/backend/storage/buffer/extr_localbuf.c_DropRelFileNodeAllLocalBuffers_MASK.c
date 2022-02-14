
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int forkNum; int rnode; int blockNum; } ;
struct TYPE_4__ {int state; TYPE_3__ tag; } ;
typedef int RelFileNode ;
typedef int LocalBufferLookupEnt ;
typedef TYPE_1__ BufferDesc ;


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
 int FUNC_7 (int ,int ,int ) ;

void
FUNC_8(RelFileNode VAR_9)
{
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
 {
  BufferDesc *VAR_11 = FUNC_1(VAR_10);
  LocalBufferLookupEnt *VAR_12;
  uint32 VAR_13;

  VAR_13 = FUNC_5(&VAR_11->state);

  if ((VAR_13 & VAR_0) &&
   FUNC_2(VAR_11->tag.rnode, VAR_9))
  {
   if (VAR_6[VAR_10] != 0)
    FUNC_3(VAR_3, "block %u of %s is still referenced (local %u)",
      VAR_11->tag.blockNum,
      FUNC_7(VAR_11->tag.rnode, VAR_7,
         VAR_11->tag.forkNum),
      VAR_6[VAR_10]);

   VAR_12 = (LocalBufferLookupEnt *)
    FUNC_4(VAR_5, (void *) &VAR_11->tag,
       VAR_4, ((void*)0));
   if (!VAR_12)
    FUNC_3(VAR_3, "local buffer hash table corrupted");

   FUNC_0(VAR_11->tag);
   VAR_13 &= ~VAR_1;
   VAR_13 &= ~VAR_2;
   FUNC_6(&VAR_11->state, VAR_13);
  }
 }
}
