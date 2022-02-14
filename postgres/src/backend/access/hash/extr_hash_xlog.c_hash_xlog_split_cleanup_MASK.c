
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_5__ {int EndRecPtr; } ;
typedef TYPE_1__ XLogReaderState ;
struct TYPE_6__ {int hasho_flag; } ;
typedef scalar_t__ Page ;
typedef TYPE_2__* HashPageOpaque ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_7(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 Buffer VAR_4;
 Page VAR_5;

 if (FUNC_6(VAR_2, 0, &VAR_4) == VAR_0)
 {
  HashPageOpaque VAR_6;

  VAR_5 = (Page) FUNC_0(VAR_4);

  VAR_6 = (HashPageOpaque) FUNC_3(VAR_5);
  VAR_6->hasho_flag &= ~VAR_1;
  FUNC_4(VAR_5, VAR_3);
  FUNC_2(VAR_4);
 }
 if (FUNC_1(VAR_4))
  FUNC_5(VAR_4);
}
