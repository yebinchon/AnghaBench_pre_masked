
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OffsetNumber ;
typedef int GinState ;
typedef int GinNullCategory ;
typedef int Datum ;


 int FUNC_0 (int *,scalar_t__,int ,int ,int ,int ) ;

int
FUNC_1(GinState *VAR_0,
      OffsetNumber VAR_1, Datum VAR_2, GinNullCategory VAR_3,
      OffsetNumber VAR_4, Datum VAR_5, GinNullCategory VAR_6)
{

 if (VAR_1 != VAR_4)
  return (VAR_1 < VAR_4) ? -1 : 1;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
}
