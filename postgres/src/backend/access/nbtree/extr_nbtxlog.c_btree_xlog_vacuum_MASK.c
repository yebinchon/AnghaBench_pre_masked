
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ lastBlockVacuumed; } ;
typedef TYPE_1__ xl_btree_vacuum ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_11__ {int btpo_flags; } ;
typedef scalar_t__ Size ;
typedef int RelFileNode ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_3__* BTPageOpaque ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int *,int) ;
 int FUNC_8 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int ,int,int *) ;
 char* FUNC_12 (TYPE_2__*,int ,scalar_t__*) ;
 int FUNC_13 (TYPE_2__*,int ,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_15(XLogReaderState *VAR_5)
{
 XLogRecPtr VAR_6 = VAR_5->EndRecPtr;
 Buffer VAR_7;
 Page VAR_8;
 BTPageOpaque VAR_9;
 if (FUNC_11(VAR_5, 0, VAR_3, 1, &VAR_7)
  == VAR_0)
 {
  char *VAR_10;
  Size VAR_11;

  VAR_10 = FUNC_12(VAR_5, 0, &VAR_11);

  VAR_8 = (Page) FUNC_1(VAR_7);

  if (VAR_11 > 0)
  {
   OffsetNumber *VAR_12;
   OffsetNumber *VAR_13;

   VAR_12 = (OffsetNumber *) VAR_10;
   VAR_13 = (OffsetNumber *) ((char *) VAR_10 + VAR_11);

   if ((VAR_13 - VAR_12) > 0)
    FUNC_7(VAR_8, VAR_12, VAR_13 - VAR_12);
  }





  VAR_9 = (BTPageOpaque) FUNC_6(VAR_8);
  VAR_9->btpo_flags &= ~VAR_1;

  FUNC_8(VAR_8, VAR_6);
  FUNC_5(VAR_7);
 }
 if (FUNC_2(VAR_7))
  FUNC_9(VAR_7);
}
