
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_10__ {int encodeMode; scalar_t__ methodId; } ;
struct TYPE_9__ {int Code; int Init; int SetProps; int Free; TYPE_3__* p; } ;
struct TYPE_8__ {TYPE_3__* (* Alloc ) (TYPE_1__*,int) ;} ;
typedef int SRes ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ IStateCoder ;
typedef TYPE_3__ CBraState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int) ;

SRes FUNC_1(IStateCoder *VAR_14, UInt64 VAR_15, int VAR_16, ISzAlloc *VAR_17)
{
  CBraState *VAR_18;
  if (VAR_15 != VAR_9 &&
      VAR_15 != VAR_13 &&
      VAR_15 != VAR_11 &&
      VAR_15 != VAR_10 &&
      VAR_15 != VAR_7 &&
      VAR_15 != VAR_8 &&
      VAR_15 != VAR_12)
    return VAR_5;
  VAR_14->p = 0;
  VAR_18 = VAR_17->Alloc(VAR_17, sizeof(CBraState));
  if (VAR_18 == 0)
    return VAR_4;
  VAR_18->methodId = (UInt32)VAR_15;
  VAR_18->encodeMode = VAR_16;
  VAR_14->p = VAR_18;
  VAR_14->Free = VAR_1;
  VAR_14->SetProps = VAR_3;
  VAR_14->Init = VAR_2;
  VAR_14->Code = VAR_0;
  return VAR_6;
}
