
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* Prev; struct TYPE_7__* Next; scalar_t__ Id; } ;
struct TYPE_6__ {int LineCount; TYPE_2__* LastLine; TYPE_2__* FirstLine; scalar_t__ NextLineId; } ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHELINE ;
typedef int INFCACHELINE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;

PINFCACHELINE
FUNC_3(PINFCACHESECTION VAR_0)
{
  PINFCACHELINE VAR_1;

  if (VAR_0 == ((void*)0))
    {
      FUNC_0("Invalid parameter\n");
      return ((void*)0);
    }

  VAR_1 = (PINFCACHELINE)FUNC_1(sizeof(INFCACHELINE));
  if (VAR_1 == ((void*)0))
    {
      FUNC_0("MALLOC() failed\n");
      return ((void*)0);
    }
  FUNC_2(VAR_1,
             sizeof(INFCACHELINE));
  VAR_1->Id = ++VAR_0->NextLineId;


  if (VAR_0->FirstLine == ((void*)0))
    {
      VAR_0->FirstLine = VAR_1;
      VAR_0->LastLine = VAR_1;
    }
  else
    {
      VAR_0->LastLine->Next = VAR_1;
      VAR_1->Prev = VAR_0->LastLine;
      VAR_0->LastLine = VAR_1;
    }
  VAR_0->LineCount++;

  return VAR_1;
}
