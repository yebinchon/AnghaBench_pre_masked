
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int insert; int oldOffnum; } ;
typedef TYPE_1__ xl_brin_update ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_8__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_9(XLogReaderState *VAR_1)
{
 XLogRecPtr VAR_2 = VAR_1->EndRecPtr;
 xl_brin_update *VAR_3 = (xl_brin_update *) FUNC_7(VAR_1);
 Buffer VAR_4;
 XLogRedoAction VAR_5;


 VAR_5 = FUNC_6(VAR_1, 2, &VAR_4);
 if (VAR_5 == VAR_0)
 {
  Page VAR_6;
  OffsetNumber VAR_7;

  VAR_6 = (Page) FUNC_0(VAR_4);

  VAR_7 = VAR_3->oldOffnum;

  FUNC_3(VAR_6, VAR_7);

  FUNC_4(VAR_6, VAR_2);
  FUNC_2(VAR_4);
 }


 FUNC_8(VAR_1, &VAR_3->insert);

 if (FUNC_1(VAR_4))
  FUNC_5(VAR_4);
}
