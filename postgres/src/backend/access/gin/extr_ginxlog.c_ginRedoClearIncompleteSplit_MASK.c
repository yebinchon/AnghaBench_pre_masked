
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int XLogRecPtr ;
struct TYPE_5__ {int EndRecPtr; } ;
typedef TYPE_1__ XLogReaderState ;
struct TYPE_6__ {int flags; } ;
typedef scalar_t__ Page ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_4__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_7(XLogReaderState *VAR_2, uint8 VAR_3)
{
 XLogRecPtr VAR_4 = VAR_2->EndRecPtr;
 Buffer VAR_5;
 Page VAR_6;

 if (FUNC_6(VAR_2, VAR_3, &VAR_5) == VAR_0)
 {
  VAR_6 = (Page) FUNC_0(VAR_5);
  FUNC_2(VAR_6)->flags &= ~VAR_1;

  FUNC_4(VAR_6, VAR_4);
  FUNC_3(VAR_5);
 }
 if (FUNC_1(VAR_5))
  FUNC_5(VAR_5);
}
