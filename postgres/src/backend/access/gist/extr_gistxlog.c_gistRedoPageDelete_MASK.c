
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int downlinkOffset; int deleteXid; } ;
typedef TYPE_1__ gistxlogPageDelete ;
typedef int XLogRecPtr ;
struct TYPE_7__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Page ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(XLogReaderState *VAR_1)
{
 XLogRecPtr VAR_2 = VAR_1->EndRecPtr;
 gistxlogPageDelete *VAR_3 = (gistxlogPageDelete *) FUNC_8(VAR_1);
 Buffer VAR_4;
 Buffer VAR_5;

 if (FUNC_7(VAR_1, 0, &VAR_5) == VAR_0)
 {
  Page VAR_6 = (Page) FUNC_0(VAR_5);

  FUNC_2(VAR_6, VAR_3->deleteXid);

  FUNC_5(VAR_6, VAR_2);
  FUNC_3(VAR_5);
 }

 if (FUNC_7(VAR_1, 1, &VAR_4) == VAR_0)
 {
  Page VAR_7 = (Page) FUNC_0(VAR_4);

  FUNC_4(VAR_7, VAR_3->downlinkOffset);

  FUNC_5(VAR_7, VAR_2);
  FUNC_3(VAR_4);
 }

 if (FUNC_1(VAR_4))
  FUNC_6(VAR_4);
 if (FUNC_1(VAR_5))
  FUNC_6(VAR_5);
}
