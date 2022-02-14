
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int targetBlk; } ;
typedef TYPE_1__ xl_brin_revmap_extend ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_11__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_13__ {int lastRevmapPage; } ;
struct TYPE_12__ {int pd_lower; } ;
typedef TYPE_3__* PageHeader ;
typedef scalar_t__ Page ;
typedef int Buffer ;
typedef TYPE_4__ BrinMetaPageData ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int *) ;
 int FUNC_9 (TYPE_2__*,int,int *,int *,int*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_12(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 xl_brin_revmap_extend *VAR_4;
 Buffer VAR_5;
 Buffer VAR_6;
 Page VAR_7;
 BlockNumber VAR_8;
 XLogRedoAction VAR_9;

 VAR_4 = (xl_brin_revmap_extend *) FUNC_10(VAR_2);

 FUNC_9(VAR_2, 1, ((void*)0), ((void*)0), &VAR_8);
 FUNC_0(VAR_4->targetBlk == VAR_8);


 VAR_9 = FUNC_8(VAR_2, 0, &VAR_5);
 if (VAR_9 == VAR_0)
 {
  Page VAR_10;
  BrinMetaPageData *VAR_11;

  VAR_10 = FUNC_1(VAR_5);
  VAR_11 = (BrinMetaPageData *) FUNC_4(VAR_10);

  FUNC_0(VAR_11->lastRevmapPage == VAR_4->targetBlk - 1);
  VAR_11->lastRevmapPage = VAR_4->targetBlk;

  FUNC_5(VAR_10, VAR_3);
  ((PageHeader) VAR_10)->pd_lower =
   ((char *) VAR_11 + sizeof(BrinMetaPageData)) - (char *) VAR_10;

  FUNC_3(VAR_5);
 }






 VAR_6 = FUNC_7(VAR_2, 1);
 VAR_7 = (Page) FUNC_1(VAR_6);
 FUNC_11(VAR_7, VAR_1);

 FUNC_5(VAR_7, VAR_3);
 FUNC_3(VAR_6);

 FUNC_6(VAR_6);
 if (FUNC_2(VAR_5))
  FUNC_6(VAR_5);
}
