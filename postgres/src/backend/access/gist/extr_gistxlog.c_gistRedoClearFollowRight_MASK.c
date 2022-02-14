
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_4__ {int EndRecPtr; } ;
typedef TYPE_1__ XLogReaderState ;
typedef int Page ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_8(XLogReaderState *VAR_2, uint8 VAR_3)
{
 XLogRecPtr VAR_4 = VAR_2->EndRecPtr;
 Buffer VAR_5;
 Page VAR_6;
 XLogRedoAction VAR_7;





 VAR_7 = FUNC_7(VAR_2, VAR_3, &VAR_5);
 if (VAR_7 == VAR_0 || VAR_7 == VAR_1)
 {
  VAR_6 = FUNC_0(VAR_5);

  FUNC_3(VAR_6, VAR_4);
  FUNC_2(VAR_6);

  FUNC_5(VAR_6, VAR_4);
  FUNC_4(VAR_5);
 }
 if (FUNC_1(VAR_5))
  FUNC_6(VAR_5);
}
