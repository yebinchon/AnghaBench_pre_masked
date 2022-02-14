
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int (* rDestroy ) (TYPE_3__*) ;} ;
struct TYPE_16__ {scalar_t__ createSubid; int portalPos; int * portalContext; int status; int * holdStore; scalar_t__ atEnd; int * holdContext; TYPE_1__* queryDesc; scalar_t__ resowner; int tupDesc; int * holdSnapshot; } ;
struct TYPE_15__ {TYPE_3__* dest; int snapshot; } ;
typedef scalar_t__ ResourceOwner ;
typedef TYPE_1__ QueryDesc ;
typedef TYPE_2__* Portal ;
typedef int * MemoryContext ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,long,int) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_6 ;
 int FUNC_16 () ;
 int * VAR_7 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_3__*,int *,int *,int) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *,int,int) ;

void
FUNC_23(Portal VAR_8)
{
 QueryDesc *VAR_9 = VAR_8->queryDesc;
 Portal VAR_10;
 ResourceOwner VAR_11;
 MemoryContext VAR_12;
 MemoryContext VAR_13;





 FUNC_0(VAR_8->createSubid != VAR_5);
 FUNC_0(VAR_9 != ((void*)0));




 FUNC_0(VAR_8->holdContext != ((void*)0));
 FUNC_0(VAR_8->holdStore != ((void*)0));
 FUNC_0(VAR_8->holdSnapshot == ((void*)0));





 VAR_13 = FUNC_11(VAR_8->holdContext);

 VAR_8->tupDesc = FUNC_2(VAR_8->tupDesc);

 FUNC_11(VAR_13);




 FUNC_8(VAR_8);




 VAR_10 = VAR_0;
 VAR_11 = VAR_1;
 VAR_12 = VAR_7;
 FUNC_15();
 {
  VAR_0 = VAR_8;
  if (VAR_8->resowner)
   VAR_1 = VAR_8->resowner;
  VAR_7 = VAR_8->portalContext;

  FUNC_11(VAR_7);

  FUNC_17(VAR_9->snapshot);





  FUNC_5(VAR_9);






  VAR_9->dest = FUNC_1(VAR_2);
  FUNC_18(VAR_9->dest,
          VAR_8->holdStore,
          VAR_8->holdContext,
          1);


  FUNC_6(VAR_9, VAR_4, 0L, 0);

  VAR_9->dest->rDestroy(VAR_9->dest);
  VAR_9->dest = ((void*)0);




  VAR_8->queryDesc = ((void*)0);
  FUNC_4(VAR_9);
  FUNC_3(VAR_9);
  FUNC_7(VAR_9);




  FUNC_11(VAR_8->holdContext);

  if (VAR_8->atEnd)
  {




   while (FUNC_22(VAR_8->holdStore, 1000000, 1))
                    ;
  }
  else
  {
   FUNC_21(VAR_8->holdStore);

   if (!FUNC_22(VAR_8->holdStore,
            VAR_8->portalPos,
            1))
    FUNC_19(VAR_3, "unexpected end of tuple stream");
  }
 }
 FUNC_12();
 {

  FUNC_9(VAR_8);


  VAR_0 = VAR_10;
  VAR_1 = VAR_11;
  VAR_7 = VAR_12;

  FUNC_14();
 }
 FUNC_13();

 FUNC_11(VAR_13);


 VAR_8->status = VAR_6;

 VAR_0 = VAR_10;
 VAR_1 = VAR_11;
 VAR_7 = VAR_12;

 FUNC_16();







 FUNC_10(VAR_8->portalContext);
}
