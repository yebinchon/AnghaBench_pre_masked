
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int t_tid; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* IndexTuple ;
typedef int GISTBuildState ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_9(GISTBuildState *VAR_1, Buffer VAR_2)
{
 OffsetNumber VAR_3;
 OffsetNumber VAR_4;
 BlockNumber VAR_5 = FUNC_1(VAR_2);
 Page VAR_6 = FUNC_2(VAR_2);

 FUNC_0(!FUNC_3(VAR_6));

 VAR_3 = FUNC_7(VAR_6);
 for (VAR_4 = VAR_0; VAR_4 <= VAR_3; VAR_4++)
 {
  ItemId VAR_7 = FUNC_6(VAR_6, VAR_4);
  IndexTuple VAR_8 = (IndexTuple) FUNC_5(VAR_6, VAR_7);
  BlockNumber VAR_9 = FUNC_4(&(VAR_8->t_tid));

  FUNC_8(VAR_1, VAR_9, VAR_5);
 }
}
