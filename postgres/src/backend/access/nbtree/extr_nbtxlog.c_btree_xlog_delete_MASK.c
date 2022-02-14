
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nitems; int latestRemovedXid; } ;
typedef TYPE_1__ xl_btree_delete ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_11__ {int btpo_flags; } ;
typedef int RelFileNode ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int Buffer ;
typedef TYPE_3__* BTPageOpaque ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int *) ;
 int FUNC_9 (TYPE_2__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_12(XLogReaderState *VAR_4)
{
 XLogRecPtr VAR_5 = VAR_4->EndRecPtr;
 xl_btree_delete *VAR_6 = (xl_btree_delete *) FUNC_10(VAR_4);
 Buffer VAR_7;
 Page VAR_8;
 BTPageOpaque VAR_9;
 if (VAR_2)
 {
  RelFileNode VAR_10;

  FUNC_9(VAR_4, 0, &VAR_10, ((void*)0), ((void*)0));

  FUNC_6(VAR_6->latestRemovedXid, VAR_10);
 }





 if (FUNC_8(VAR_4, 0, &VAR_7) == VAR_0)
 {
  VAR_8 = (Page) FUNC_0(VAR_7);

  if (FUNC_11(VAR_4) > VAR_3)
  {
   OffsetNumber *VAR_11;

   VAR_11 = (OffsetNumber *) ((char *) VAR_6 + VAR_3);

   FUNC_4(VAR_8, VAR_11, VAR_6->nitems);
  }





  VAR_9 = (BTPageOpaque) FUNC_3(VAR_8);
  VAR_9->btpo_flags &= ~VAR_1;

  FUNC_5(VAR_8, VAR_5);
  FUNC_2(VAR_7);
 }
 if (FUNC_1(VAR_7))
  FUNC_7(VAR_7);
}
