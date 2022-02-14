
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Page ;
typedef int OffsetNumber ;
typedef scalar_t__ IndexTuple ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__* FUNC_4 (int) ;

IndexTuple *
FUNC_5(Page VAR_1, int *VAR_2 )
{
 OffsetNumber VAR_3,
    VAR_4;
 IndexTuple *VAR_5;

 VAR_4 = FUNC_3(VAR_1);
 *VAR_2 = VAR_4;
 VAR_5 = FUNC_4(sizeof(IndexTuple) * VAR_4);
 for (VAR_3 = VAR_0; VAR_3 <= VAR_4; VAR_3 = FUNC_0(VAR_3))
  VAR_5[VAR_3 - VAR_0] = (IndexTuple) FUNC_1(VAR_1, FUNC_2(VAR_1, VAR_3));

 return VAR_5;
}
