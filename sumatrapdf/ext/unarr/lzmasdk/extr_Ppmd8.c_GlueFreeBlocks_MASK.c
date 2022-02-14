
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int GlueCount; scalar_t__ LoUnit; scalar_t__ HiUnit; scalar_t__* FreeList; int Stamps; } ;
struct TYPE_7__ {scalar_t__ Stamp; scalar_t__ NU; scalar_t__ Next; } ;
typedef scalar_t__ CPpmd8_Node_Ref ;
typedef TYPE_1__ CPpmd8_Node ;
typedef TYPE_2__ CPpmd8 ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,unsigned int) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(CPpmd8 *VAR_2)
{
  CPpmd8_Node_Ref VAR_3 = 0;
  CPpmd8_Node_Ref *VAR_4 = &VAR_3;
  unsigned VAR_5;

  VAR_2->GlueCount = 1 << 13;
  FUNC_4(VAR_2->Stamps, 0, sizeof(VAR_2->Stamps));



  if (VAR_2->LoUnit != VAR_2->HiUnit)
    ((CPpmd8_Node *)VAR_2->LoUnit)->Stamp = 0;


  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  {
    CPpmd8_Node_Ref VAR_6 = (CPpmd8_Node_Ref)VAR_2->FreeList[VAR_5];
    VAR_2->FreeList[VAR_5] = 0;
    while (VAR_6 != 0)
    {
      CPpmd8_Node *VAR_7 = FUNC_2(VAR_6);
      if (VAR_7->NU != 0)
      {
        CPpmd8_Node *VAR_8;
        *VAR_4 = VAR_6;
        VAR_4 = &(VAR_7->Next);
        while ((VAR_8 = VAR_7 + VAR_7->NU)->Stamp == VAR_0)
        {
          VAR_7->NU += VAR_8->NU;
          VAR_8->NU = 0;
        }
      }
      VAR_6 = VAR_7->Next;
    }
  }
  *VAR_4 = 0;


  while (VAR_3 != 0)
  {
    CPpmd8_Node *VAR_9 = FUNC_2(VAR_3);
    unsigned VAR_10;
    VAR_3 = VAR_9->Next;
    VAR_10 = VAR_9->NU;
    if (VAR_10 == 0)
      continue;
    for (; VAR_10 > 128; VAR_10 -= 128, VAR_9 += 128)
      FUNC_1(VAR_2, VAR_9, VAR_1 - 1);
    if (FUNC_0(VAR_5 = FUNC_3(VAR_10)) != VAR_10)
    {
      unsigned VAR_11 = FUNC_0(--VAR_5);
      FUNC_1(VAR_2, VAR_9 + VAR_11, VAR_10 - VAR_11 - 1);
    }
    FUNC_1(VAR_2, VAR_9, VAR_5);
  }
}
