
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dicPos; scalar_t__ dicBufSize; int * dic; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef scalar_t__ ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef TYPE_1__ CLzmaDec ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int const*,unsigned int,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int const*,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

SRes FUNC_6(Byte *VAR_5, SizeT *VAR_6, const Byte *VAR_7, SizeT *VAR_8,
    const Byte *VAR_9, unsigned VAR_10, ELzmaFinishMode VAR_11,
    ELzmaStatus *VAR_12, ISzAlloc *VAR_13)
{
  CLzmaDec VAR_14;
  SRes VAR_15;
  SizeT VAR_16 = *VAR_6, VAR_17 = *VAR_8;
  *VAR_6 = *VAR_8 = 0;
  *VAR_12 = VAR_1;
  if (VAR_17 < VAR_2)
    return VAR_3;
  FUNC_1(&VAR_14);
  FUNC_5(FUNC_0(&VAR_14, VAR_9, VAR_10, VAR_13));
  VAR_14.dic = VAR_5;
  VAR_14.dicBufSize = VAR_16;
  FUNC_4(&VAR_14);
  *VAR_8 = VAR_17;
  VAR_15 = FUNC_2(&VAR_14, VAR_16, VAR_7, VAR_8, VAR_11, VAR_12);
  *VAR_6 = VAR_14.dicPos;
  if (VAR_15 == VAR_4 && *VAR_12 == VAR_0)
    VAR_15 = VAR_3;
  FUNC_3(&VAR_14, VAR_13);
  return VAR_15;
}
