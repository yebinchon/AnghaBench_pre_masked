
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_27__ {int* UnitsStart; unsigned int MaxOrder; } ;
struct TYPE_26__ {int Symbol; int Freq; } ;
struct TYPE_25__ {int NumStats; int Flags; int SummFreq; int Stats; } ;
typedef TYPE_1__* CTX_PTR ;
typedef int CPpmd_Void_Ref ;
typedef TYPE_2__ CPpmd_State ;
typedef TYPE_3__ CPpmd8 ;
typedef int Byte ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,unsigned int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,unsigned int) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*,unsigned int,int) ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static CPpmd_Void_Ref FUNC_13(CPpmd8 *VAR_0, CTX_PTR VAR_1, unsigned VAR_2)
{
  int VAR_3;
  unsigned VAR_4;
  CPpmd_State *VAR_5;

  if (!VAR_1->NumStats)
  {
    VAR_5 = FUNC_3(VAR_1);
    if ((Byte *)FUNC_4(VAR_0, FUNC_9(VAR_5)) >= VAR_0->UnitsStart)
    {
      if (VAR_2 < VAR_0->MaxOrder)
        FUNC_10(VAR_5, FUNC_13(VAR_0, FUNC_0(FUNC_9(VAR_5)), VAR_2 + 1));
      else
        FUNC_10(VAR_5, 0);
      if (FUNC_9(VAR_5) || VAR_2 <= 9)
        return FUNC_5(VAR_1);
    }
    FUNC_11(VAR_0, VAR_1);
    return 0;
  }

  VAR_1->Stats = FUNC_8(FUNC_2(VAR_0, FUNC_7(VAR_1), VAR_4 = ((unsigned)VAR_1->NumStats + 2) >> 1));

  for (VAR_5 = FUNC_7(VAR_1) + (VAR_3 = VAR_1->NumStats); VAR_5 >= FUNC_7(VAR_1); VAR_5--)
    if ((Byte *)FUNC_4(VAR_0, FUNC_9(VAR_5)) < VAR_0->UnitsStart)
    {
      CPpmd_State *VAR_6 = FUNC_7(VAR_1) + (VAR_3--);
      FUNC_10(VAR_5, 0);
      FUNC_12(VAR_5, VAR_6);
    }
    else if (VAR_2 < VAR_0->MaxOrder)
      FUNC_10(VAR_5, FUNC_13(VAR_0, FUNC_0(FUNC_9(VAR_5)), VAR_2 + 1));
    else
      FUNC_10(VAR_5, 0);

  if (VAR_3 != VAR_1->NumStats && VAR_2)
  {
    VAR_1->NumStats = (Byte)VAR_3;
    VAR_5 = FUNC_7(VAR_1);
    if (VAR_3 < 0)
    {
      FUNC_1(VAR_0, VAR_5, VAR_4);
      FUNC_11(VAR_0, VAR_1);
      return 0;
    }
    if (VAR_3 == 0)
    {
      VAR_1->Flags = (VAR_1->Flags & 0x10) + 0x08 * (VAR_5->Symbol >= 0x40);
      *FUNC_3(VAR_1) = *VAR_5;
      FUNC_1(VAR_0, VAR_5, VAR_4);
      FUNC_3(VAR_1)->Freq = (Byte)((unsigned)FUNC_3(VAR_1)->Freq + 11) >> 3;
    }
    else
      FUNC_6(VAR_0, VAR_1, VAR_4, VAR_1->SummFreq > 16 * VAR_3);
  }
  return FUNC_5(VAR_1);
}
