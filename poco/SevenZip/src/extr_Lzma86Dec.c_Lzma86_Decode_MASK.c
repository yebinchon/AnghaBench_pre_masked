
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ ISzAlloc ;
typedef int ELzmaStatus ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*,scalar_t__*,int const*,scalar_t__*,int const*,int ,int ,int *,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int*,scalar_t__,int ,int *,int ) ;
 int FUNC_2 (int ) ;

SRes FUNC_3(Byte *VAR_8, SizeT *VAR_9, const Byte *VAR_10, SizeT *VAR_11)
{
  ISzAlloc VAR_12 = { VAR_6, VAR_7 };
  SRes VAR_13;
  int VAR_14;
  SizeT VAR_15;
  ELzmaStatus VAR_16;

  if (*VAR_11 < VAR_0)
    return VAR_3;

  VAR_14 = VAR_10[0];

  if (VAR_14 > 1)
  {
    *VAR_9 = 0;
    return VAR_4;
  }

  VAR_15 = *VAR_11 - VAR_0;
  VAR_13 = FUNC_0(VAR_8, VAR_9, VAR_10 + VAR_0, &VAR_15,
      VAR_10 + 1, VAR_2, VAR_1, &VAR_16, &VAR_12);
  *VAR_11 = VAR_15 + VAR_0;
  if (VAR_13 != VAR_5)
    return VAR_13;
  if (VAR_14 == 1)
  {
    UInt32 VAR_17;
    FUNC_2(VAR_17);
    FUNC_1(VAR_8, *VAR_9, 0, &VAR_17, 0);
  }
  return VAR_5;
}
