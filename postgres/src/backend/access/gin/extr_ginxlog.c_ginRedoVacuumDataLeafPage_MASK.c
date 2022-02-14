
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ ginxlogVacuumDataLeafPage ;
typedef int XLogRecPtr ;
struct TYPE_7__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Size ;
typedef int Page ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ,int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(XLogReaderState *VAR_1)
{
 XLogRecPtr VAR_2 = VAR_1->EndRecPtr;
 Buffer VAR_3;

 if (FUNC_8(VAR_1, 0, &VAR_3) == VAR_0)
 {
  Page VAR_4 = FUNC_1(VAR_3);
  Size VAR_5;
  ginxlogVacuumDataLeafPage *VAR_6;

  VAR_6 = (ginxlogVacuumDataLeafPage *) FUNC_9(VAR_1, 0, &VAR_5);

  FUNC_0(FUNC_4(VAR_4));
  FUNC_0(FUNC_3(VAR_4));

  FUNC_10(VAR_4, &VAR_6->data);
  FUNC_6(VAR_4, VAR_2);
  FUNC_5(VAR_3);
 }
 if (FUNC_2(VAR_3))
  FUNC_7(VAR_3);
}
