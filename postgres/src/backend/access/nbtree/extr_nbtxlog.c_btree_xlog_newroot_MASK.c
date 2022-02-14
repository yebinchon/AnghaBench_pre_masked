
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ level; } ;
typedef TYPE_2__ xl_btree_newroot ;
typedef int XLogRecPtr ;
struct TYPE_13__ {int EndRecPtr; } ;
typedef TYPE_3__ XLogReaderState ;
struct TYPE_11__ {scalar_t__ level; } ;
struct TYPE_14__ {scalar_t__ btpo_cycleid; int btpo_flags; TYPE_1__ btpo; int btpo_next; int btpo_prev; } ;
typedef int Size ;
typedef scalar_t__ Page ;
typedef int Buffer ;
typedef TYPE_4__* BTPageOpaque ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 char* FUNC_7 (TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (scalar_t__,char*,int ) ;

__attribute__((used)) static void
FUNC_13(XLogReaderState *VAR_3)
{
 XLogRecPtr VAR_4 = VAR_3->EndRecPtr;
 xl_btree_newroot *VAR_5 = (xl_btree_newroot *) FUNC_8(VAR_3);
 Buffer VAR_6;
 Page VAR_7;
 BTPageOpaque VAR_8;
 char *VAR_9;
 Size VAR_10;

 VAR_6 = FUNC_6(VAR_3, 0);
 VAR_7 = (Page) FUNC_0(VAR_6);

 FUNC_10(VAR_7, FUNC_1(VAR_6));
 VAR_8 = (BTPageOpaque) FUNC_3(VAR_7);

 VAR_8->btpo_flags = VAR_1;
 VAR_8->btpo_prev = VAR_8->btpo_next = VAR_2;
 VAR_8->btpo.level = VAR_5->level;
 if (VAR_5->level == 0)
  VAR_8->btpo_flags |= VAR_0;
 VAR_8->btpo_cycleid = 0;

 if (VAR_5->level > 0)
 {
  VAR_9 = FUNC_7(VAR_3, 0, &VAR_10);
  FUNC_12(VAR_7, VAR_9, VAR_10);


  FUNC_9(VAR_3, 1);
 }

 FUNC_4(VAR_7, VAR_4);
 FUNC_2(VAR_6);
 FUNC_5(VAR_6);

 FUNC_11(VAR_3, 2);
}
