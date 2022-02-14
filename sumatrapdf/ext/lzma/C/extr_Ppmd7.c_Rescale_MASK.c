
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* UInt16 ;
struct TYPE_13__ {unsigned int SummFreq; int NumStats; int Stats; } ;
struct TYPE_12__ {scalar_t__ OrderFall; TYPE_5__* MinContext; TYPE_1__* FoundState; } ;
struct TYPE_11__ {int Freq; } ;
typedef TYPE_1__ CPpmd_State ;
typedef TYPE_2__ CPpmd7 ;
typedef void* Byte ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_5__*) ;
 void* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(CPpmd7 *VAR_0)
{
  unsigned VAR_1, VAR_2, VAR_3, VAR_4;
  CPpmd_State *VAR_5 = FUNC_2(VAR_0->MinContext);
  CPpmd_State *VAR_6 = VAR_0->FoundState;
  {
    CPpmd_State VAR_7 = *VAR_6;
    for (; VAR_6 != VAR_5; VAR_6--)
      VAR_6[0] = VAR_6[-1];
    *VAR_6 = VAR_7;
  }
  VAR_4 = VAR_0->MinContext->SummFreq - VAR_6->Freq;
  VAR_6->Freq += 4;
  VAR_2 = (VAR_0->OrderFall != 0);
  VAR_6->Freq = (Byte)((VAR_6->Freq + VAR_2) >> 1);
  VAR_3 = VAR_6->Freq;

  VAR_1 = VAR_0->MinContext->NumStats - 1;
  do
  {
    VAR_4 -= (++VAR_6)->Freq;
    VAR_6->Freq = (Byte)((VAR_6->Freq + VAR_2) >> 1);
    VAR_3 += VAR_6->Freq;
    if (VAR_6[0].Freq > VAR_6[-1].Freq)
    {
      CPpmd_State *VAR_8 = VAR_6;
      CPpmd_State VAR_9 = *VAR_8;
      do
        VAR_8[0] = VAR_8[-1];
      while (--VAR_8 != VAR_5 && VAR_9.Freq > VAR_8[-1].Freq);
      *VAR_8 = VAR_9;
    }
  }
  while (--VAR_1);

  if (VAR_6->Freq == 0)
  {
    unsigned VAR_10 = VAR_0->MinContext->NumStats;
    unsigned VAR_11, VAR_12;
    do { VAR_1++; } while ((--VAR_6)->Freq == 0);
    VAR_4 += VAR_1;
    VAR_0->MinContext->NumStats = (UInt16)(VAR_0->MinContext->NumStats - VAR_1);
    if (VAR_0->MinContext->NumStats == 1)
    {
      CPpmd_State VAR_13 = *VAR_5;
      do
      {
        VAR_13.Freq = (Byte)(VAR_13.Freq - (VAR_13.Freq >> 1));
        VAR_4 >>= 1;
      }
      while (VAR_4 > 1);
      FUNC_0(VAR_0, VAR_5, FUNC_5(((VAR_10 + 1) >> 1)));
      *(VAR_0->FoundState = FUNC_1(VAR_0->MinContext)) = VAR_13;
      return;
    }
    VAR_11 = (VAR_10 + 1) >> 1;
    VAR_12 = (VAR_0->MinContext->NumStats + 1) >> 1;
    if (VAR_11 != VAR_12)
      VAR_0->MinContext->Stats = FUNC_3(FUNC_4(VAR_0, VAR_5, VAR_11, VAR_12));
  }
  VAR_0->MinContext->SummFreq = (UInt16)(VAR_3 + VAR_4 - (VAR_4 >> 1));
  VAR_0->FoundState = FUNC_2(VAR_0->MinContext);
}
