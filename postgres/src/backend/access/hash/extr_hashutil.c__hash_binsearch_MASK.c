
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int Page ;
typedef int OffsetNumber ;
typedef scalar_t__ IndexTuple ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

OffsetNumber
FUNC_6(Page VAR_1, uint32 VAR_2)
{
 OffsetNumber VAR_3;
 OffsetNumber VAR_4;


 VAR_3 = FUNC_4(VAR_1) + 1;
 VAR_4 = VAR_0;

 while (VAR_3 > VAR_4)
 {
  OffsetNumber VAR_5;
  IndexTuple VAR_6;
  uint32 VAR_7;

  VAR_5 = (VAR_3 + VAR_4) / 2;
  FUNC_0(FUNC_1(VAR_5));

  VAR_6 = (IndexTuple) FUNC_2(VAR_1, FUNC_3(VAR_1, VAR_5));
  VAR_7 = FUNC_5(VAR_6);
  if (VAR_7 < VAR_2)
   VAR_4 = VAR_5 + 1;
  else
   VAR_3 = VAR_5;
 }

 return VAR_4;
}
