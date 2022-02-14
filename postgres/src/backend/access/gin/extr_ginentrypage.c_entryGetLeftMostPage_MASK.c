
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Page ;
typedef scalar_t__ IndexTuple ;
typedef int GinBtree ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static BlockNumber
FUNC_7(GinBtree VAR_1, Page VAR_2)
{
 IndexTuple VAR_3;

 FUNC_0(!FUNC_3(VAR_2));
 FUNC_0(!FUNC_2(VAR_2));
 FUNC_0(FUNC_6(VAR_2) >= VAR_0);

 VAR_3 = (IndexTuple) FUNC_4(VAR_2, FUNC_5(VAR_2, VAR_0));
 return FUNC_1(VAR_3);
}
