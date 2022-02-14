
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_7__ {TYPE_1__* LastSection; TYPE_1__* FirstSection; scalar_t__ NextSectionId; } ;
struct TYPE_6__ {struct TYPE_6__* Prev; struct TYPE_6__* Next; int Name; scalar_t__ Id; } ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHE ;
typedef int * PCWSTR ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

PINFCACHESECTION
FUNC_6(PINFCACHE VAR_1,
               PCWSTR VAR_2)
{
  PINFCACHESECTION VAR_3 = ((void*)0);
  ULONG VAR_4;

  if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
    {
      FUNC_0("Invalid parameter\n");
      return ((void*)0);
    }


  VAR_4 = (ULONG)FUNC_1(VAR_0,
                             VAR_2[FUNC_5(VAR_2) + 1]);
  VAR_3 = (PINFCACHESECTION)FUNC_2(VAR_4);
  if (VAR_3 == ((void*)0))
    {
      FUNC_0("MALLOC() failed\n");
      return ((void*)0);
    }
  FUNC_3 (VAR_3,
              VAR_4);
  VAR_3->Id = ++VAR_1->NextSectionId;


  FUNC_4(VAR_3->Name, VAR_2);


  if (VAR_1->FirstSection == ((void*)0))
    {
      VAR_1->FirstSection = VAR_3;
      VAR_1->LastSection = VAR_3;
    }
  else
    {
      VAR_1->LastSection->Next = VAR_3;
      VAR_3->Prev = VAR_1->LastSection;
      VAR_1->LastSection = VAR_3;
    }

  return VAR_3;
}
