
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int count ;
typedef scalar_t__ UInt32 ;
struct TYPE_6__ {scalar_t__ LoUnit; scalar_t__ HiUnit; int * Stamps; int * FreeList; int * UnitsStart; } ;
struct TYPE_5__ {scalar_t__ Stamp; int Next; int NU; } ;
typedef int CPpmd8_Node_Ref ;
typedef TYPE_1__ CPpmd8_Node ;
typedef TYPE_2__ CPpmd8 ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_1 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_3(CPpmd8 *VAR_2)
{
  UInt32 VAR_3[VAR_1];
  unsigned VAR_4;
  FUNC_2(VAR_3, 0, sizeof(VAR_3));
  if (VAR_2->LoUnit != VAR_2->HiUnit)
    ((CPpmd8_Node *)VAR_2->LoUnit)->Stamp = 0;

  {
    CPpmd8_Node *VAR_5 = (CPpmd8_Node *)VAR_2->UnitsStart;
    for (; VAR_5->Stamp == VAR_0; VAR_5 += VAR_5->NU)
    {
      VAR_5->Stamp = 0;
      VAR_3[FUNC_1(VAR_5->NU)]++;
    }
    VAR_2->UnitsStart = (Byte *)VAR_5;
  }

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  {
    CPpmd8_Node_Ref *VAR_6 = (CPpmd8_Node_Ref *)&VAR_2->FreeList[VAR_4];
    while (VAR_3[VAR_4] != 0)
    {
      CPpmd8_Node *VAR_7 = FUNC_0(*VAR_6);
      while (VAR_7->Stamp == 0)
      {
        *VAR_6 = VAR_7->Next;
        VAR_7 = FUNC_0(*VAR_6);
        VAR_2->Stamps[VAR_4]--;
        if (--VAR_3[VAR_4] == 0)
          break;
      }
      VAR_6 = &VAR_7->Next;
    }
  }
}
