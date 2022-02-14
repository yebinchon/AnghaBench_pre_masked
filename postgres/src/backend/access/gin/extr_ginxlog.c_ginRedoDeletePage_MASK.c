
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int parentOffset; int deleteXid; int rightLink; } ;
typedef TYPE_1__ ginxlogDeletePage ;
typedef int XLogRecPtr ;
struct TYPE_8__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_9__ {int flags; int rightlink; } ;
typedef int Page ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 TYPE_6__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_13(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 ginxlogDeletePage *VAR_4 = (ginxlogDeletePage *) FUNC_12(VAR_2);
 Buffer VAR_5;
 Buffer VAR_6;
 Buffer VAR_7;
 Page VAR_8;





 if (FUNC_11(VAR_2, 2, &VAR_7) == VAR_0)
 {
  VAR_8 = FUNC_1(VAR_7);
  FUNC_0(FUNC_5(VAR_8));
  FUNC_4(VAR_8)->rightlink = VAR_4->rightLink;
  FUNC_9(VAR_8, VAR_3);
  FUNC_8(VAR_7);
 }

 if (FUNC_11(VAR_2, 0, &VAR_5) == VAR_0)
 {
  VAR_8 = FUNC_1(VAR_5);
  FUNC_0(FUNC_5(VAR_8));
  FUNC_4(VAR_8)->flags = VAR_1;
  FUNC_7(VAR_8, VAR_4->deleteXid);
  FUNC_9(VAR_8, VAR_3);
  FUNC_8(VAR_5);
 }

 if (FUNC_11(VAR_2, 1, &VAR_6) == VAR_0)
 {
  VAR_8 = FUNC_1(VAR_6);
  FUNC_0(FUNC_5(VAR_8));
  FUNC_0(!FUNC_6(VAR_8));
  FUNC_3(VAR_8, VAR_4->parentOffset);
  FUNC_9(VAR_8, VAR_3);
  FUNC_8(VAR_6);
 }

 if (FUNC_2(VAR_7))
  FUNC_10(VAR_7);
 if (FUNC_2(VAR_6))
  FUNC_10(VAR_6);
 if (FUNC_2(VAR_5))
  FUNC_10(VAR_5);
}
