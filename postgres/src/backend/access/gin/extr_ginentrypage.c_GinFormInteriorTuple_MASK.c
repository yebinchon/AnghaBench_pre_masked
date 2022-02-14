
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {int t_info; } ;
typedef int Page ;
typedef TYPE_1__* IndexTuple ;
typedef int BlockNumber ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static IndexTuple
FUNC_8(IndexTuple VAR_1, Page VAR_2, BlockNumber VAR_3)
{
 IndexTuple VAR_4;

 if (FUNC_2(VAR_2) && !FUNC_1(VAR_1))
 {

  uint32 VAR_5 = FUNC_0(VAR_1);

  VAR_5 = FUNC_5(VAR_5);
  VAR_4 = (IndexTuple) FUNC_7(VAR_5);
  FUNC_6(VAR_4, VAR_1, VAR_5);

  VAR_4->t_info &= ~VAR_0;
  VAR_4->t_info |= VAR_5;
 }
 else
 {

  VAR_4 = (IndexTuple) FUNC_7(FUNC_4(VAR_1));
  FUNC_6(VAR_4, VAR_1, FUNC_4(VAR_1));
 }


 FUNC_3(VAR_4, VAR_3);

 return VAR_4;
}
