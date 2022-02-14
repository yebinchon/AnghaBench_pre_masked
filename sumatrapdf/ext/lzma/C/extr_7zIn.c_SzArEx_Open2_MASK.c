
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef size_t UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_24__ {scalar_t__* data; int size; } ;
struct TYPE_23__ {int startPosAfterHeader; } ;
struct TYPE_22__ {scalar_t__* Data; int Size; } ;
struct TYPE_21__ {int (* Seek ) (TYPE_1__*,int*,int ) ;} ;
typedef scalar_t__ SRes ;
typedef int Int64 ;
typedef int ISzAlloc ;
typedef TYPE_1__ ILookInStream ;
typedef TYPE_2__ CSzData ;
typedef TYPE_3__ CSzArEx ;
typedef TYPE_4__ CBuf ;
typedef scalar_t__ Byte ;


 int FUNC_0 (TYPE_4__*,size_t,int *) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 size_t FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__*,size_t) ;
 int FUNC_7 (TYPE_1__*,scalar_t__*,int,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (TYPE_1__*,TYPE_2__*,TYPE_4__*,int,int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*,size_t*) ;
 int FUNC_13 (scalar_t__*) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (TYPE_1__*,int*,int ) ;
 int FUNC_15 (TYPE_1__*,int*,int ) ;

__attribute__((used)) static SRes FUNC_16(
    CSzArEx *VAR_13,
    ILookInStream *VAR_14,
    ISzAlloc *VAR_15,
    ISzAlloc *VAR_16)
{
  Byte VAR_17[VAR_12];
  Int64 VAR_18;
  UInt64 VAR_19, VAR_20;
  size_t VAR_21;
  UInt32 VAR_22;
  CBuf VAR_23;
  SRes VAR_24;

  VAR_18 = 0;
  FUNC_9(VAR_14->Seek(VAR_14, &VAR_18, VAR_7));

  FUNC_9(FUNC_7(VAR_14, VAR_17, VAR_12, VAR_4));

  if (!FUNC_13(VAR_17))
    return VAR_4;
  if (VAR_17[6] != VAR_11)
    return VAR_5;

  VAR_19 = FUNC_5(VAR_17 + 12);
  VAR_20 = FUNC_5(VAR_17 + 20);
  VAR_22 = FUNC_4(VAR_17 + 28);

  VAR_13->startPosAfterHeader = VAR_18 + VAR_12;

  if (FUNC_3(VAR_17 + 12, 20) != FUNC_4(VAR_17 + 8))
    return VAR_1;

  VAR_21 = (size_t)VAR_20;
  if (VAR_21 != VAR_20)
    return VAR_3;
  if (VAR_21 == 0)
    return VAR_6;
  if (VAR_19 > VAR_19 + VAR_20 ||
      VAR_19 > VAR_19 + VAR_20 + VAR_12)
    return VAR_4;

  {
    Int64 VAR_25 = 0;
    FUNC_9(VAR_14->Seek(VAR_14, &VAR_25, VAR_8));
    if ((UInt64)VAR_25 < VAR_18 + VAR_19 ||
        (UInt64)VAR_25 < VAR_18 + VAR_12 + VAR_19 ||
        (UInt64)VAR_25 < VAR_18 + VAR_12 + VAR_19 + VAR_20)
      return VAR_2;
  }

  FUNC_9(FUNC_8(VAR_14, VAR_18 + VAR_12 + VAR_19));

  if (!FUNC_0(&VAR_23, VAR_21, VAR_16))
    return VAR_3;

  VAR_24 = FUNC_6(VAR_14, VAR_23.data, VAR_21);
  if (VAR_24 == VAR_6)
  {
    VAR_24 = VAR_0;
    if (FUNC_3(VAR_23.data, VAR_21) == VAR_22)
    {
      CSzData VAR_26;
      UInt64 VAR_27;
      VAR_26.Data = VAR_23.data;
      VAR_26.Size = VAR_23.size;
      VAR_24 = FUNC_12(&VAR_26, &VAR_27);
      if (VAR_24 == VAR_6)
      {
        if (VAR_27 == VAR_9)
        {
          CBuf VAR_28;
          FUNC_2(&VAR_28);
          VAR_24 = FUNC_10(VAR_14, &VAR_26, &VAR_28, VAR_13->startPosAfterHeader, VAR_16);
          if (VAR_24 != VAR_6)
            FUNC_1(&VAR_28, VAR_16);
          else
          {
            FUNC_1(&VAR_23, VAR_16);
            VAR_23.data = VAR_28.data;
            VAR_23.size = VAR_28.size;
            VAR_26.Data = VAR_23.data;
            VAR_26.Size = VAR_23.size;
            VAR_24 = FUNC_12(&VAR_26, &VAR_27);
          }
        }
      }
      if (VAR_24 == VAR_6)
      {
        if (VAR_27 == VAR_10)
          VAR_24 = FUNC_11(VAR_13, &VAR_26, VAR_15, VAR_16);
        else
          VAR_24 = VAR_5;
      }
    }
  }
  FUNC_1(&VAR_23, VAR_16);
  return VAR_24;
}
