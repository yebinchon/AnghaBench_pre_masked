
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Id; } ;
struct TYPE_7__ {int Line; } ;
typedef TYPE_1__* PINFCONTEXT ;
typedef int PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHELINE ;
typedef int * PCWSTR ;
typedef int INFSTATUS ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

INFSTATUS
FUNC_5(PINFCONTEXT VAR_3, PCWSTR VAR_4)
{
  PINFCACHESECTION VAR_5;
  PINFCACHELINE VAR_6;

  if (((void*)0) == VAR_3)
    {
      FUNC_1("Invalid parameter\n");
      return VAR_0;
    }

  VAR_5 = FUNC_4(VAR_3);
  VAR_6 = FUNC_3(VAR_5);
  if (((void*)0) == VAR_6)
    {
      FUNC_0("Failed to create line\n");
      return VAR_1;
    }
  VAR_3->Line = VAR_6->Id;

  if (((void*)0) != VAR_4 && ((void*)0) == FUNC_2(VAR_6, VAR_4))
    {
      FUNC_0("Failed to add key\n");
      return VAR_1;
    }

  return VAR_2;
}
