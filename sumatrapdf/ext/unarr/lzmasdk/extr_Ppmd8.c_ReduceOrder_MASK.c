
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int OrderFall; scalar_t__ RestoreMethod; TYPE_1__* Text; TYPE_2__* FoundState; TYPE_1__* MaxContext; } ;
struct TYPE_22__ {scalar_t__ Symbol; int Freq; } ;
struct TYPE_21__ {int SummFreq; scalar_t__ NumStats; int Suffix; } ;
typedef TYPE_1__* CTX_PTR ;
typedef scalar_t__ CPpmd_Void_Ref ;
typedef TYPE_2__ CPpmd_State ;
typedef TYPE_3__ CPpmd8 ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_3__*,int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static CTX_PTR FUNC_9(CPpmd8 *VAR_4, CPpmd_State *VAR_5, CTX_PTR VAR_6)
{
  CPpmd_State *VAR_7 = ((void*)0);
  CTX_PTR VAR_8 = VAR_6;
  CPpmd_Void_Ref VAR_9 = FUNC_3(VAR_4->Text);
  FUNC_8(VAR_4->FoundState, VAR_9);
  VAR_4->OrderFall++;

  for (;;)
  {
    if (VAR_5)
    {
      VAR_6 = FUNC_7(VAR_6);
      VAR_7 = VAR_5;
      VAR_5 = ((void*)0);
    }
    else
    {
      if (!VAR_6->Suffix)
      {
        return VAR_6;
      }
      VAR_6 = FUNC_7(VAR_6);
      if (VAR_6->NumStats)
      {
        if ((VAR_7 = FUNC_5(VAR_6))->Symbol != VAR_4->FoundState->Symbol)
          do { VAR_7++; } while (VAR_7->Symbol != VAR_4->FoundState->Symbol);
        if (VAR_7->Freq < VAR_1 - 9)
        {
          VAR_7->Freq += 2;
          VAR_6->SummFreq += 2;
        }
      }
      else
      {
        VAR_7 = FUNC_2(VAR_6);
        VAR_7->Freq += (VAR_7->Freq < 32);
      }
    }
    if (FUNC_6(VAR_7))
      break;



    FUNC_8(VAR_7, VAR_9);
    VAR_4->OrderFall++;
  }
  if (FUNC_6(VAR_7) <= VAR_9)
  {
    CTX_PTR VAR_10;
    CPpmd_State *VAR_11 = VAR_4->FoundState;
    VAR_4->FoundState = VAR_7;

    VAR_10 = FUNC_1(VAR_4, VAR_0, ((void*)0), VAR_6);
    if (VAR_10 == ((void*)0))
      FUNC_8(VAR_7, 0);
    else
      FUNC_8(VAR_7, FUNC_3(VAR_10));
    VAR_4->FoundState = VAR_11;
  }

  if (VAR_4->OrderFall == 1 && VAR_8 == VAR_4->MaxContext)
  {
    FUNC_8(VAR_4->FoundState, FUNC_6(VAR_7));
    VAR_4->Text--;
  }
  if (FUNC_6(VAR_7) == 0)
    return ((void*)0);
  return FUNC_0(FUNC_6(VAR_7));
}
