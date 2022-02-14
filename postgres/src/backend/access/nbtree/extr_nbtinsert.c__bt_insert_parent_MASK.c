
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ level; } ;
struct TYPE_9__ {TYPE_1__ btpo; } ;
struct TYPE_8__ {scalar_t__ bts_offset; int * bts_parent; void* bts_blkno; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ IndexTuple ;
typedef scalar_t__ Buffer ;
typedef void* BlockNumber ;
typedef TYPE_2__ BTStackData ;
typedef TYPE_2__* BTStack ;
typedef TYPE_4__* BTPageOpaque ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,void*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int,int *) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*,void*) ;
 int FUNC_11 (int ,int *,scalar_t__,scalar_t__,int *,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int ,void*,void*) ;
 int FUNC_18 (scalar_t__) ;

__attribute__((used)) static void
FUNC_19(Relation VAR_6,
      Buffer VAR_7,
      Buffer VAR_8,
      BTStack VAR_9,
      bool VAR_10,
      bool VAR_11)
{
 if (VAR_10)
 {
  Buffer VAR_12;

  FUNC_0(VAR_9 == ((void*)0));
  FUNC_0(VAR_11);

  VAR_12 = FUNC_12(VAR_6, VAR_7, VAR_8);

  FUNC_13(VAR_6, VAR_12);
  FUNC_13(VAR_6, VAR_8);
  FUNC_13(VAR_6, VAR_7);
 }
 else
 {
  BlockNumber VAR_13 = FUNC_2(VAR_7);
  BlockNumber VAR_14 = FUNC_2(VAR_8);
  Page VAR_15 = FUNC_3(VAR_7);
  IndexTuple VAR_16;
  BTStackData VAR_17;
  IndexTuple VAR_18;
  Buffer VAR_19;

  if (VAR_9 == ((void*)0))
  {
   BTPageOpaque VAR_20;

   FUNC_14(VAR_0, "concurrent ROOT page split");
   VAR_20 = (BTPageOpaque) FUNC_7(VAR_15);

   VAR_19 = FUNC_9(VAR_6, VAR_20->btpo.level + 1, 0,
         ((void*)0));

   VAR_9 = &VAR_17;
   VAR_9->bts_blkno = FUNC_2(VAR_19);
   VAR_9->bts_offset = VAR_4;
   VAR_9->bts_parent = ((void*)0);
   FUNC_13(VAR_6, VAR_19);
  }


  VAR_18 = (IndexTuple) FUNC_5(VAR_15,
           FUNC_6(VAR_15, VAR_5));


  VAR_16 = FUNC_4(VAR_18);
  FUNC_1(VAR_16, VAR_14);
  VAR_19 = FUNC_10(VAR_6, VAR_9, VAR_13);





  FUNC_13(VAR_6, VAR_8);

  if (VAR_19 == VAR_3)
   FUNC_15(VAR_2,
     (FUNC_16(VAR_1),
      FUNC_17("failed to re-find parent key in index \"%s\" for split pages %u/%u",
          FUNC_8(VAR_6), VAR_13, VAR_14)));


  FUNC_11(VAR_6, ((void*)0), VAR_19, VAR_7, VAR_9->bts_parent,
        VAR_16, VAR_9->bts_offset + 1,
        VAR_11);


  FUNC_18(VAR_16);
 }
}
