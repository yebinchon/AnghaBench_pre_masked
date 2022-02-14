
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int* offsets; int nToPlaceholder; int firstPlaceholder; int newestRedirectXid; } ;
typedef TYPE_1__ spgxlogVacuumRedirect ;
typedef int XLogRecPtr ;
struct TYPE_11__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_13__ {scalar_t__ tupstate; int pointer; } ;
struct TYPE_12__ {int nRedirection; int nPlaceholder; } ;
typedef TYPE_3__* SpGistPageOpaque ;
typedef TYPE_4__* SpGistDeadTuple ;
typedef int RelFileNode ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ,int *) ;
 int FUNC_15 (TYPE_2__*,int ,int *,int *,int *) ;
 char* FUNC_16 (TYPE_2__*) ;
 int* FUNC_17 (int) ;
 int FUNC_18 (int*) ;

__attribute__((used)) static void
FUNC_19(XLogReaderState *VAR_5)
{
 XLogRecPtr VAR_6 = VAR_5->EndRecPtr;
 char *VAR_7 = FUNC_16(VAR_5);
 spgxlogVacuumRedirect *VAR_8 = (spgxlogVacuumRedirect *) VAR_7;
 OffsetNumber *VAR_9;
 Buffer VAR_10;

 VAR_9 = VAR_8->offsets;





 if (VAR_1)
 {
  if (FUNC_12(VAR_8->newestRedirectXid))
  {
   RelFileNode VAR_11;

   FUNC_15(VAR_5, 0, &VAR_11, ((void*)0), ((void*)0));
   FUNC_10(VAR_8->newestRedirectXid,
            VAR_11);
  }
 }

 if (FUNC_14(VAR_5, 0, &VAR_10) == VAR_0)
 {
  Page VAR_12 = FUNC_1(VAR_10);
  SpGistPageOpaque VAR_13 = FUNC_11(VAR_12);
  int VAR_14;


  for (VAR_14 = 0; VAR_14 < VAR_8->nToPlaceholder; VAR_14++)
  {
   SpGistDeadTuple VAR_15;

   VAR_15 = (SpGistDeadTuple) FUNC_5(VAR_12,
              FUNC_6(VAR_12, VAR_9[VAR_14]));
   FUNC_0(VAR_15->tupstate == VAR_4);
   VAR_15->tupstate = VAR_3;
   FUNC_3(&VAR_15->pointer);
  }

  FUNC_0(VAR_13->nRedirection >= VAR_8->nToPlaceholder);
  VAR_13->nRedirection -= VAR_8->nToPlaceholder;
  VAR_13->nPlaceholder += VAR_8->nToPlaceholder;


  if (VAR_8->firstPlaceholder != VAR_2)
  {
   int VAR_16 = FUNC_7(VAR_12);
   OffsetNumber *VAR_17;

   VAR_17 = FUNC_17(sizeof(OffsetNumber) * VAR_16);

   for (VAR_14 = VAR_8->firstPlaceholder; VAR_14 <= VAR_16; VAR_14++)
    VAR_17[VAR_14 - VAR_8->firstPlaceholder] = VAR_14;

   VAR_14 = VAR_16 - VAR_8->firstPlaceholder + 1;
   FUNC_0(VAR_13->nPlaceholder >= VAR_14);
   VAR_13->nPlaceholder -= VAR_14;


   FUNC_8(VAR_12, VAR_17, VAR_14);

   FUNC_18(VAR_17);
  }

  FUNC_9(VAR_12, VAR_6);
  FUNC_4(VAR_10);
 }
 if (FUNC_2(VAR_10))
  FUNC_13(VAR_10);
}
