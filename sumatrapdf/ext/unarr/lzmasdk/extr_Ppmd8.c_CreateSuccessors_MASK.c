
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_23__ {scalar_t__ HiUnit; scalar_t__ LoUnit; scalar_t__* FreeList; TYPE_2__* FoundState; } ;
struct TYPE_22__ {void* Symbol; int Freq; } ;
struct TYPE_21__ {scalar_t__ NumStats; int SummFreq; scalar_t__ Suffix; void* Flags; } ;
typedef TYPE_1__* CTX_PTR ;
typedef scalar_t__ CPpmd_Void_Ref ;
typedef TYPE_2__ CPpmd_State ;
typedef scalar_t__ CPpmd_Byte_Ref ;
typedef TYPE_3__ CPpmd8 ;
typedef void* Byte ;
typedef int Bool ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static CTX_PTR FUNC_10(CPpmd8 *VAR_3, Bool VAR_4, CPpmd_State *VAR_5, CTX_PTR VAR_6)
{
  CPpmd_State VAR_7;
  Byte VAR_8;
  CPpmd_Byte_Ref VAR_9 = (CPpmd_Byte_Ref)FUNC_7(VAR_3->FoundState);

  CPpmd_State *VAR_10[VAR_1 + 1];
  unsigned VAR_11 = 0;

  if (!VAR_4)
    VAR_10[VAR_11++] = VAR_3->FoundState;

  while (VAR_6->Suffix)
  {
    CPpmd_Void_Ref VAR_12;
    CPpmd_State *VAR_13;
    VAR_6 = FUNC_8(VAR_6);
    if (VAR_5)
    {
      VAR_13 = VAR_5;
      VAR_5 = ((void*)0);
    }
    else if (VAR_6->NumStats != 0)
    {
      for (VAR_13 = FUNC_6(VAR_6); VAR_13->Symbol != VAR_3->FoundState->Symbol; VAR_13++);
      if (VAR_13->Freq < VAR_0 - 9)
      {
        VAR_13->Freq++;
        VAR_6->SummFreq++;
      }
    }
    else
    {
      VAR_13 = FUNC_2(VAR_6);
      VAR_13->Freq += (!FUNC_8(VAR_6)->NumStats & (VAR_13->Freq < 24));
    }
    VAR_12 = FUNC_7(VAR_13);
    if (VAR_12 != VAR_9)
    {
      VAR_6 = FUNC_1(VAR_12);
      if (VAR_11 == 0)
        return VAR_6;
      break;
    }
    VAR_10[VAR_11++] = VAR_13;
  }

  VAR_7.Symbol = *(const Byte *)FUNC_3(VAR_3, VAR_9);
  FUNC_9(&VAR_7, VAR_9 + 1);
  VAR_8 = 0x10 * (VAR_3->FoundState->Symbol >= 0x40) + 0x08 * (VAR_7.Symbol >= 0x40);

  if (VAR_6->NumStats == 0)
    VAR_7.Freq = FUNC_2(VAR_6)->Freq;
  else
  {
    UInt32 VAR_14, VAR_15;
    CPpmd_State *VAR_16;
    for (VAR_16 = FUNC_6(VAR_6); VAR_16->Symbol != VAR_7.Symbol; VAR_16++);
    VAR_14 = VAR_16->Freq - 1;
    VAR_15 = VAR_6->SummFreq - VAR_6->NumStats - VAR_14;
    VAR_7.Freq = (Byte)(1 + ((2 * VAR_14 <= VAR_15) ? (5 * VAR_14 > VAR_15) : ((VAR_14 + 2 * VAR_15 - 3) / VAR_15)));
  }

  do
  {

    CTX_PTR VAR_17;
    if (VAR_3->HiUnit != VAR_3->LoUnit)
      VAR_17 = (CTX_PTR)(VAR_3->HiUnit -= VAR_2);
    else if (VAR_3->FreeList[0] != 0)
      VAR_17 = (CTX_PTR)FUNC_5(VAR_3, 0);
    else
    {
      VAR_17 = (CTX_PTR)FUNC_0(VAR_3, 0);
      if (!VAR_17)
        return ((void*)0);
    }
    VAR_17->NumStats = 0;
    VAR_17->Flags = VAR_8;
    *FUNC_2(VAR_17) = VAR_7;
    VAR_17->Suffix = FUNC_4(VAR_6);
    FUNC_9(VAR_10[--VAR_11], FUNC_4(VAR_17));
    VAR_6 = VAR_17;
  }
  while (VAR_11 != 0);

  return VAR_6;
}
