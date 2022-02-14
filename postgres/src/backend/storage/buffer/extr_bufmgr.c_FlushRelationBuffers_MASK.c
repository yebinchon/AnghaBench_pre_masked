
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_18__ {int rnode; int blockNum; int forkNum; } ;
struct TYPE_21__ {TYPE_1__ tag; int state; } ;
struct TYPE_20__ {struct TYPE_20__* previous; void* arg; int callback; } ;
struct TYPE_19__ {int rd_smgr; int rd_node; } ;
typedef TYPE_2__* Relation ;
typedef char* Page ;
typedef TYPE_3__ ErrorContextCallback ;
typedef TYPE_4__ BufferDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_4__*,int) ;
 int FUNC_16 (TYPE_4__*,int) ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int ,int ,int ,char*,int) ;

void
FUNC_20(Relation VAR_9)
{
 int VAR_10;
 BufferDesc *VAR_11;


 FUNC_11(VAR_9);

 if (FUNC_12(VAR_9))
 {
  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  {
   uint32 VAR_12;

   VAR_11 = FUNC_3(VAR_10);
   if (FUNC_10(VAR_11->tag.rnode, VAR_9->rd_node) &&
    ((VAR_12 = FUNC_17(&VAR_11->state)) &
     (VAR_2 | VAR_0)) == (VAR_2 | VAR_0))
   {
    ErrorContextCallback VAR_13;
    Page VAR_14;

    VAR_14 = (char *) FUNC_6(VAR_11);


    VAR_13.callback = VAR_8;
    VAR_13.arg = (void *) VAR_11;
    VAR_13.previous = VAR_7;
    VAR_7 = &VAR_13;

    FUNC_8(VAR_14, VAR_11->tag.blockNum);

    FUNC_19(VAR_9->rd_smgr,
        VAR_11->tag.forkNum,
        VAR_11->tag.blockNum,
        VAR_14,
        0);

    VAR_12 &= ~(VAR_0 | VAR_1);
    FUNC_18(&VAR_11->state, VAR_12);


    VAR_7 = VAR_13.previous;
   }
  }

  return;
 }


 FUNC_14(VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
 {
  uint32 VAR_15;

  VAR_11 = FUNC_2(VAR_10);





  if (!FUNC_10(VAR_11->tag.rnode, VAR_9->rd_node))
   continue;

  FUNC_13();

  VAR_15 = FUNC_7(VAR_11);
  if (FUNC_10(VAR_11->tag.rnode, VAR_9->rd_node) &&
   (VAR_15 & (VAR_2 | VAR_0)) == (VAR_2 | VAR_0))
  {
   FUNC_9(VAR_11);
   FUNC_4(FUNC_0(VAR_11), VAR_4);
   FUNC_1(VAR_11, VAR_9->rd_smgr);
   FUNC_5(FUNC_0(VAR_11));
   FUNC_16(VAR_11, 1);
  }
  else
   FUNC_15(VAR_11, VAR_15);
 }
}
