
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int Id; } ;
struct TYPE_8__ {int Section; scalar_t__ Line; int Inf; } ;
typedef TYPE_1__* PINFCONTEXT ;
typedef TYPE_2__* PINFCACHESECTION ;
typedef int PINFCACHE ;
typedef int PCWSTR ;
typedef int INFSTATUS ;
typedef int INFCONTEXT ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 TYPE_1__* FUNC_5 (int) ;

INFSTATUS
FUNC_6(PINFCACHE VAR_2,
                     PCWSTR VAR_3,
                     PINFCONTEXT *VAR_4)
{
  PINFCACHESECTION VAR_5;
  FUNC_0("InfpFindOrAddSection section %S\n", VAR_3);

  *VAR_4 = FUNC_5(sizeof(INFCONTEXT));
  if (((void*)0) == *VAR_4)
    {
      FUNC_1("MALLOC() failed\n");
      return VAR_0;
    }

  (*VAR_4)->Inf = VAR_2;
  (*VAR_4)->Line = 0;
  VAR_5 = FUNC_4(VAR_2, VAR_3);
  if (((void*)0) == VAR_5)
    {
      FUNC_0("Section not found, creating it\n");
      VAR_5 = FUNC_3(VAR_2, VAR_3);
      if (((void*)0) == VAR_5)
        {
          FUNC_0("Failed to create section\n");
          FUNC_2(*VAR_4);
          return VAR_0;
        }
    }

  (*VAR_4)->Section = VAR_5->Id;
  return VAR_1;
}
