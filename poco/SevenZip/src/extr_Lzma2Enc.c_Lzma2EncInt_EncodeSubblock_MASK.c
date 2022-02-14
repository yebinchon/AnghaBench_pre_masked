
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_8__ {scalar_t__ srcPos; void* needInitState; void* needInitProp; scalar_t__ props; int enc; } ;
struct TYPE_7__ {size_t (* Write ) (TYPE_1__*,scalar_t__*,size_t) ;} ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ ISeqOutStream ;
typedef TYPE_2__ CLzma2EncInt ;
typedef scalar_t__ Byte ;
typedef int Bool ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,void*,scalar_t__*,size_t*,int ,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (scalar_t__*,scalar_t__,int) ;
 int FUNC_6 (char*,...) ;
 size_t FUNC_7 (TYPE_1__*,scalar_t__*,size_t) ;
 size_t FUNC_8 (TYPE_1__*,scalar_t__*,size_t) ;

__attribute__((used)) static SRes FUNC_9(CLzma2EncInt *VAR_11, Byte *VAR_12,
    size_t *VAR_13, ISeqOutStream *VAR_14)
{
  size_t VAR_15 = *VAR_13;
  size_t VAR_16 = VAR_15;
  UInt32 VAR_17 = VAR_6;
  unsigned VAR_18 = 5 + (VAR_11->needInitProp ? 1 : 0);
  Bool VAR_19;
  SRes VAR_20;

  *VAR_13 = 0;
  if (VAR_16 < VAR_18)
    return VAR_7;
  VAR_16 -= VAR_18;

  FUNC_3(VAR_11->enc);
  VAR_20 = FUNC_0(VAR_11->enc, VAR_11->needInitState,
      VAR_12 + VAR_18, &VAR_16, VAR_5, &VAR_17);

  FUNC_4(FUNC_6("\npackSize = %7d unpackSize = %7d  ", VAR_16, VAR_17));

  if (VAR_17 == 0)
    return VAR_20;

  if (VAR_20 == VAR_9)
    VAR_19 = (VAR_16 + 2 >= VAR_17 || VAR_16 > (1 << 16));
  else
  {
    if (VAR_20 != VAR_7)
      return VAR_20;
    VAR_20 = VAR_9;
    VAR_19 = VAR_10;
  }

  if (VAR_19)
  {
    size_t VAR_21 = 0;
    FUNC_4(FUNC_6("################# COPY           "));
    while (VAR_17 > 0)
    {
      UInt32 VAR_22 = (VAR_17 < VAR_4) ? VAR_17 : VAR_4;
      if (VAR_15 - VAR_21 < VAR_22 + 3)
        return VAR_7;
      VAR_12[VAR_21++] = (Byte)(VAR_11->srcPos == 0 ? VAR_2 : VAR_1);
      VAR_12[VAR_21++] = (Byte)((VAR_22 - 1) >> 8);
      VAR_12[VAR_21++] = (Byte)(VAR_22 - 1);
      FUNC_5(VAR_12 + VAR_21, FUNC_1(VAR_11->enc) - VAR_17, VAR_22);
      VAR_17 -= VAR_22;
      VAR_21 += VAR_22;
      VAR_11->srcPos += VAR_22;
      if (VAR_14)
      {
        *VAR_13 += VAR_21;
        if (VAR_14->Write(VAR_14, VAR_12, VAR_21) != VAR_21)
          return VAR_8;
        VAR_21 = 0;
      }
      else
        *VAR_13 = VAR_21;

    }
    FUNC_2(VAR_11->enc);
    return VAR_9;
  }
  {
    size_t VAR_23 = 0;
    UInt32 VAR_24 = VAR_17 - 1;
    UInt32 VAR_25 = (UInt32)(VAR_16 - 1);
    unsigned VAR_26 = (VAR_11->srcPos == 0) ? 3 : (VAR_11->needInitState ? (VAR_11->needInitProp ? 2 : 1) : 0);

    FUNC_4(FUNC_6("               "));

    VAR_12[VAR_23++] = (Byte)(VAR_3 | (VAR_26 << 5) | ((VAR_24 >> 16) & 0x1F));
    VAR_12[VAR_23++] = (Byte)(VAR_24 >> 8);
    VAR_12[VAR_23++] = (Byte)VAR_24;
    VAR_12[VAR_23++] = (Byte)(VAR_25 >> 8);
    VAR_12[VAR_23++] = (Byte)VAR_25;

    if (VAR_11->needInitProp)
      VAR_12[VAR_23++] = VAR_11->props;

    VAR_11->needInitProp = VAR_0;
    VAR_11->needInitState = VAR_0;
    VAR_23 += VAR_16;
    VAR_11->srcPos += VAR_17;

    if (VAR_14)
      if (VAR_14->Write(VAR_14, VAR_12, VAR_23) != VAR_23)
        return VAR_8;
    *VAR_13 = VAR_23;
    return VAR_9;
  }
}
