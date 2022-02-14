
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* Next; } ;
struct TYPE_9__ {int Line; int Section; int Inf; } ;
struct TYPE_8__ {int Id; } ;
typedef TYPE_2__* PINFCONTEXT ;
typedef TYPE_3__* PINFCACHELINE ;
typedef int INFSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;

INFSTATUS
FUNC_1(PINFCONTEXT VAR_3,
                 PINFCONTEXT VAR_4)
{
  PINFCACHELINE VAR_5;

  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
    return VAR_0;

  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 == ((void*)0))
    return VAR_0;

  if (VAR_5->Next == ((void*)0))
    return VAR_1;

  if (VAR_3 != VAR_4)
    {
      VAR_4->Inf = VAR_3->Inf;
      VAR_4->Section = VAR_3->Section;
    }
  VAR_4->Line = VAR_5->Next->Id;

  return VAR_2;
}
