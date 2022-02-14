
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int XLogRecPtr ;
struct TYPE_6__ {int EndRecPtr; } ;
typedef TYPE_1__ XLogReaderState ;
struct TYPE_7__ {int btpo_flags; } ;
typedef int Page ;
typedef int Buffer ;
typedef TYPE_2__* BTPageOpaque ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_9(XLogReaderState *VAR_2, uint8 VAR_3)
{
 XLogRecPtr VAR_4 = VAR_2->EndRecPtr;
 Buffer VAR_5;

 if (FUNC_8(VAR_2, VAR_3, &VAR_5) == VAR_0)
 {
  Page VAR_6 = (Page) FUNC_1(VAR_5);
  BTPageOpaque VAR_7 = (BTPageOpaque) FUNC_5(VAR_6);

  FUNC_0(FUNC_4(VAR_7));
  VAR_7->btpo_flags &= ~VAR_1;

  FUNC_6(VAR_6, VAR_4);
  FUNC_3(VAR_5);
 }
 if (FUNC_2(VAR_5))
  FUNC_7(VAR_5);
}
