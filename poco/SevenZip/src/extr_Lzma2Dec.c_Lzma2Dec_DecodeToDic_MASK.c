
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_10__ {scalar_t__ dicPos; } ;
struct TYPE_9__ {scalar_t__ state; scalar_t__ unpackSize; scalar_t__ control; scalar_t__ packSize; TYPE_2__ decoder; void* needInitState; void* needInitDic; void* needInitProp; } ;
typedef scalar_t__ SizeT ;
typedef int SRes ;
typedef scalar_t__ ELzmaStatus ;
typedef scalar_t__ ELzmaFinishMode ;
typedef TYPE_1__ CLzma2Dec ;
typedef int Byte ;
typedef void* Bool ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int const*,scalar_t__*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,void*,void*) ;
 int FUNC_5 (TYPE_2__*,int const*,scalar_t__) ;
 int FUNC_6 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;

SRes FUNC_7(CLzma2Dec *VAR_17, SizeT VAR_18,
    const Byte *VAR_19, SizeT *VAR_20, ELzmaFinishMode VAR_21, ELzmaStatus *VAR_22)
{
  SizeT VAR_23 = *VAR_20;
  *VAR_20 = 0;
  *VAR_22 = VAR_13;

  while (VAR_17->state != VAR_6)
  {
    SizeT VAR_24 = VAR_17->decoder.dicPos;
    if (VAR_17->state == VAR_5)
      return VAR_14;
    if (VAR_24 == VAR_18 && VAR_21 == VAR_7)
    {
      *VAR_22 = VAR_12;
      return VAR_15;
    }
    if (VAR_17->state != VAR_3 && VAR_17->state != VAR_4)
    {
      if (*VAR_20 == VAR_23)
      {
        *VAR_22 = VAR_11;
        return VAR_15;
      }
      (*VAR_20)++;
      VAR_17->state = FUNC_2(VAR_17, *VAR_19++);
      continue;
    }
    {
      SizeT VAR_25 = VAR_18 - VAR_24;
      SizeT VAR_26 = VAR_23 - *VAR_20;
      ELzmaFinishMode VAR_27 = VAR_7;

      if (VAR_17->unpackSize <= VAR_25)
      {
        VAR_25 = (SizeT)VAR_17->unpackSize;
        VAR_27 = VAR_8;
      }

      if (FUNC_1(VAR_17))
      {
        if (*VAR_20 == VAR_23)
        {
          *VAR_22 = VAR_11;
          return VAR_15;
        }

        if (VAR_17->state == VAR_3)
        {
          Bool VAR_28 = (VAR_17->control == VAR_1);
          if (VAR_28)
            VAR_17->needInitProp = VAR_17->needInitState = VAR_16;
          else if (VAR_17->needInitDic)
            return VAR_14;
          VAR_17->needInitDic = VAR_0;
          FUNC_4(&VAR_17->decoder, VAR_28, VAR_0);
        }

        if (VAR_26 > VAR_25)
          VAR_26 = VAR_25;

        if (VAR_26 == 0)
          return VAR_14;

        FUNC_5(&VAR_17->decoder, VAR_19, VAR_26);

        VAR_19 += VAR_26;
        *VAR_20 += VAR_26;
        VAR_17->unpackSize -= (UInt32)VAR_26;
        VAR_17->state = (VAR_17->unpackSize == 0) ? VAR_2 : VAR_4;
      }
      else
      {
        SizeT VAR_29;
        SRes VAR_30;

        if (VAR_17->state == VAR_3)
        {
          int VAR_31 = FUNC_0(VAR_17);
          Bool VAR_32 = (VAR_31 == 3);
          Bool VAR_33 = (VAR_31 > 0);
          if ((!VAR_32 && VAR_17->needInitDic) || (!VAR_33 && VAR_17->needInitState))
            return VAR_14;

          FUNC_4(&VAR_17->decoder, VAR_32, VAR_33);
          VAR_17->needInitDic = VAR_0;
          VAR_17->needInitState = VAR_0;
          VAR_17->state = VAR_4;
        }
        if (VAR_26 > VAR_17->packSize)
          VAR_26 = (SizeT)VAR_17->packSize;

        VAR_30 = FUNC_3(&VAR_17->decoder, VAR_24 + VAR_25, VAR_19, &VAR_26, VAR_27, VAR_22);

        VAR_19 += VAR_26;
        *VAR_20 += VAR_26;
        VAR_17->packSize -= (UInt32)VAR_26;

        VAR_29 = VAR_17->decoder.dicPos - VAR_24;
        VAR_17->unpackSize -= (UInt32)VAR_29;

        FUNC_6(VAR_30);
        if (*VAR_22 == VAR_11)
          return VAR_30;

        if (VAR_26 == 0 && VAR_29 == 0)
        {
          if (*VAR_22 != VAR_10 ||
              VAR_17->unpackSize != 0 || VAR_17->packSize != 0)
            return VAR_14;
          VAR_17->state = VAR_2;
        }
        if (*VAR_22 == VAR_10)
          *VAR_22 = VAR_12;
      }
    }
  }
  *VAR_22 = VAR_9;
  return VAR_15;
}
