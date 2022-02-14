
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dicPos; int dicBufSize; int * dic; } ;
struct TYPE_9__ {TYPE_1__ decoder; } ;
typedef int SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef scalar_t__ ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef TYPE_2__ CLzma2Dec ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int const*,int *,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

SRes FUNC_6(Byte *VAR_4, SizeT *VAR_5, const Byte *VAR_6, SizeT *VAR_7,
    Byte VAR_8, ELzmaFinishMode VAR_9, ELzmaStatus *VAR_10, ISzAlloc *VAR_11)
{
  CLzma2Dec VAR_12;
  SRes VAR_13;
  SizeT VAR_14 = *VAR_5, VAR_15 = *VAR_7;
  *VAR_5 = *VAR_7 = 0;
  *VAR_10 = VAR_1;
  FUNC_1(&VAR_12);
  FUNC_5(FUNC_0(&VAR_12, VAR_8, VAR_11));
  VAR_12.decoder.dic = VAR_4;
  VAR_12.decoder.dicBufSize = VAR_14;
  FUNC_4(&VAR_12);
  *VAR_7 = VAR_15;
  VAR_13 = FUNC_2(&VAR_12, VAR_14, VAR_6, VAR_7, VAR_9, VAR_10);
  *VAR_5 = VAR_12.decoder.dicPos;
  if (VAR_13 == VAR_3 && *VAR_10 == VAR_0)
    VAR_13 = VAR_2;
  FUNC_3(&VAR_12, VAR_11);
  return VAR_13;
}
