
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int UInt16 ;
struct TYPE_13__ {unsigned int SummFreq; unsigned int NumStats; int Flags; int Stats; } ;
struct TYPE_12__ {scalar_t__ OrderFall; scalar_t__ RestoreMethod; TYPE_5__* MinContext; TYPE_1__* FoundState; } ;
struct TYPE_11__ {int Freq; int Symbol; } ;
typedef TYPE_1__ CPpmd_State ;
typedef TYPE_2__ CPpmd8 ;
typedef void* Byte ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(CPpmd8 *VAR_2)
{
  unsigned VAR_3, VAR_4, VAR_5, VAR_6;
  CPpmd_State *VAR_7 = FUNC_2(VAR_2->MinContext);
  CPpmd_State *VAR_8 = VAR_2->FoundState;
  {
    CPpmd_State VAR_9 = *VAR_8;
    for (; VAR_8 != VAR_7; VAR_8--)
      VAR_8[0] = VAR_8[-1];
    *VAR_8 = VAR_9;
  }
  VAR_6 = VAR_2->MinContext->SummFreq - VAR_8->Freq;
  VAR_8->Freq += 4;
  VAR_4 = (VAR_2->OrderFall != 0



      );
  VAR_8->Freq = (Byte)((VAR_8->Freq + VAR_4) >> 1);
  VAR_5 = VAR_8->Freq;

  VAR_3 = VAR_2->MinContext->NumStats;
  do
  {
    VAR_6 -= (++VAR_8)->Freq;
    VAR_8->Freq = (Byte)((VAR_8->Freq + VAR_4) >> 1);
    VAR_5 += VAR_8->Freq;
    if (VAR_8[0].Freq > VAR_8[-1].Freq)
    {
      CPpmd_State *VAR_10 = VAR_8;
      CPpmd_State VAR_11 = *VAR_10;
      do
        VAR_10[0] = VAR_10[-1];
      while (--VAR_10 != VAR_7 && VAR_11.Freq > VAR_10[-1].Freq);
      *VAR_10 = VAR_11;
    }
  }
  while (--VAR_3);

  if (VAR_8->Freq == 0)
  {
    unsigned VAR_12 = VAR_2->MinContext->NumStats;
    unsigned VAR_13, VAR_14;
    do { VAR_3++; } while ((--VAR_8)->Freq == 0);
    VAR_6 += VAR_3;
    VAR_2->MinContext->NumStats = (Byte)(VAR_2->MinContext->NumStats - VAR_3);
    if (VAR_2->MinContext->NumStats == 0)
    {
      CPpmd_State VAR_15 = *VAR_7;
      VAR_15.Freq = (Byte)((2 * VAR_15.Freq + VAR_6 - 1) / VAR_6);
      if (VAR_15.Freq > VAR_0 / 3)
        VAR_15.Freq = VAR_0 / 3;
      FUNC_0(VAR_2, VAR_7, FUNC_5((VAR_12 + 2) >> 1));
      VAR_2->MinContext->Flags = (VAR_2->MinContext->Flags & 0x10) + 0x08 * (VAR_15.Symbol >= 0x40);
      *(VAR_2->FoundState = FUNC_1(VAR_2->MinContext)) = VAR_15;
      return;
    }
    VAR_13 = (VAR_12 + 2) >> 1;
    VAR_14 = (VAR_2->MinContext->NumStats + 2) >> 1;
    if (VAR_13 != VAR_14)
      VAR_2->MinContext->Stats = FUNC_3(FUNC_4(VAR_2, VAR_7, VAR_13, VAR_14));
    VAR_2->MinContext->Flags &= ~0x08;
    VAR_2->MinContext->Flags |= 0x08 * ((VAR_8 = FUNC_2(VAR_2->MinContext))->Symbol >= 0x40);
    VAR_3 = VAR_2->MinContext->NumStats;
    do { VAR_2->MinContext->Flags |= 0x08*((++VAR_8)->Symbol >= 0x40); } while (--VAR_3);
  }
  VAR_2->MinContext->SummFreq = (UInt16)(VAR_5 + VAR_6 - (VAR_6 >> 1));
  VAR_2->MinContext->Flags |= 0x4;
  VAR_2->FoundState = FUNC_2(VAR_2->MinContext);
}
