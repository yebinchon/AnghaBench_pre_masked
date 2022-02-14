
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UInt32 ;
typedef unsigned int UInt16 ;
struct TYPE_7__ {int Symbol; unsigned int Freq; } ;
struct TYPE_6__ {unsigned int NumStats; int SummFreq; int Flags; int Stats; } ;
typedef TYPE_1__* CTX_PTR ;
typedef TYPE_2__ CPpmd_State ;
typedef int CPpmd8 ;
typedef void* Byte ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(CPpmd8 *VAR_0, CTX_PTR VAR_1, unsigned VAR_2, unsigned VAR_3)
{
  unsigned VAR_4 = VAR_1->NumStats, VAR_5, VAR_6, VAR_7;
  CPpmd_State *VAR_8 = (CPpmd_State *)FUNC_2(VAR_0, FUNC_1(VAR_1), VAR_2, (VAR_4 + 2) >> 1);
  VAR_1->Stats = FUNC_0(VAR_8);




  VAR_7 = (VAR_1->Flags & (0x10 + 0x04 * VAR_3)) + 0x08 * (VAR_8->Symbol >= 0x40);
  VAR_5 = VAR_1->SummFreq - VAR_8->Freq;
  VAR_6 = (VAR_8->Freq = (Byte)((VAR_8->Freq + VAR_3) >> VAR_3));
  do
  {
    VAR_5 -= (++VAR_8)->Freq;
    VAR_6 += (VAR_8->Freq = (Byte)((VAR_8->Freq + VAR_3) >> VAR_3));
    VAR_7 |= 0x08 * (VAR_8->Symbol >= 0x40);
  }
  while (--VAR_4);
  VAR_1->SummFreq = (UInt16)(VAR_6 + ((VAR_5 + VAR_3) >> VAR_3));
  VAR_1->Flags = (Byte)VAR_7;
}
