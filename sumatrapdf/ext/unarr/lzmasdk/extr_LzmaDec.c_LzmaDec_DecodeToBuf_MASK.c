
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dicPos; scalar_t__ dicBufSize; scalar_t__ dic; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef TYPE_1__ CLzmaDec ;
typedef int Byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,int const*,scalar_t__*,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;

SRes FUNC_2(CLzmaDec *VAR_2, Byte *VAR_3, SizeT *VAR_4, const Byte *VAR_5, SizeT *VAR_6, ELzmaFinishMode VAR_7, ELzmaStatus *VAR_8)
{
  SizeT VAR_9 = *VAR_4;
  SizeT VAR_10 = *VAR_6;
  *VAR_6 = *VAR_4 = 0;
  for (;;)
  {
    SizeT VAR_11 = VAR_10, VAR_12, VAR_13;
    ELzmaFinishMode VAR_14;
    SRes VAR_15;
    if (VAR_2->dicPos == VAR_2->dicBufSize)
      VAR_2->dicPos = 0;
    VAR_13 = VAR_2->dicPos;
    if (VAR_9 > VAR_2->dicBufSize - VAR_13)
    {
      VAR_12 = VAR_2->dicBufSize;
      VAR_14 = VAR_0;
    }
    else
    {
      VAR_12 = VAR_13 + VAR_9;
      VAR_14 = VAR_7;
    }

    VAR_15 = FUNC_0(VAR_2, VAR_12, VAR_5, &VAR_11, VAR_14, VAR_8);
    VAR_5 += VAR_11;
    VAR_10 -= VAR_11;
    *VAR_6 += VAR_11;
    VAR_12 = VAR_2->dicPos - VAR_13;
    FUNC_1(VAR_3, VAR_2->dic + VAR_13, VAR_12);
    VAR_3 += VAR_12;
    VAR_9 -= VAR_12;
    *VAR_4 += VAR_12;
    if (VAR_15 != 0)
      return VAR_15;
    if (VAR_12 == 0 || VAR_9 == 0)
      return VAR_1;
  }
}
