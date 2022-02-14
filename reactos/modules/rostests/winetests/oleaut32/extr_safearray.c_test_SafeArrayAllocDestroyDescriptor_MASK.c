
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {TYPE_1__* rgsabound; } ;
struct TYPE_9__ {int lLbound; scalar_t__ cElements; } ;
typedef TYPE_2__ SAFEARRAY ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (int,int,TYPE_2__**) ;

__attribute__((used)) static void FUNC_7(void)
{
  SAFEARRAY *VAR_4;
  HRESULT VAR_5;
  UINT VAR_6;


  VAR_5 = FUNC_1(0, &VAR_4);
  FUNC_5(VAR_5 == VAR_0, "0 dimensions gave hres 0x%x\n", VAR_5);

  VAR_5 = FUNC_1(65536, &VAR_4);
  FUNC_5(VAR_5 == VAR_0, "65536 dimensions gave hres 0x%x\n", VAR_5);

  if (0)
  {

  VAR_5=FUNC_1(1, ((void*)0));
  FUNC_5(VAR_5 == VAR_1,"NULL parm gave hres 0x%x\n", VAR_5);
  }


  for (VAR_6 = 5; VAR_6 <= 65535; VAR_6 += 30)
  {
    VAR_5 = FUNC_1(VAR_6, &VAR_4);
    FUNC_5(VAR_5 == VAR_2, "%d dimensions failed; hres 0x%x\n", VAR_6, VAR_5);

    if (VAR_5 == VAR_2)
    {
      FUNC_5(FUNC_4(VAR_4) == VAR_6, "Dimension is %d; should be %d\n",
         FUNC_4(VAR_4), VAR_6);

      VAR_5 = FUNC_3(VAR_4);
      FUNC_5(VAR_5 == VAR_2, "destroy failed; hres 0x%x\n", VAR_5);
    }
  }

  if (!&FUNC_6)
    return;

  VAR_5 = FUNC_6(VAR_3, 0, &VAR_4);
  FUNC_5(VAR_5 == VAR_0, "0 dimensions gave hres 0x%x\n", VAR_5);

  VAR_5 = FUNC_6(VAR_3, 65536, &VAR_4);
  FUNC_5(VAR_5 == VAR_0, "65536 dimensions gave hres 0x%x\n", VAR_5);

  VAR_5 = FUNC_6(VAR_3, 1, ((void*)0));
  FUNC_5(VAR_5 == VAR_1,"NULL parm gave hres 0x%x\n", VAR_5);

  VAR_5 = FUNC_6(-1, 1, &VAR_4);
  FUNC_5(VAR_5 == VAR_2, "VT = -1 gave hres 0x%x\n", VAR_5);

  VAR_4->rgsabound[0].cElements = 0;
  VAR_4->rgsabound[0].lLbound = 1;

  VAR_5 = FUNC_0(VAR_4);
  FUNC_5(VAR_5 == VAR_2, "SafeArrayAllocData gave hres 0x%x\n", VAR_5);

  VAR_5 = FUNC_2(VAR_4);
  FUNC_5(VAR_5 == VAR_2,"SafeArrayDestroy failed with hres %x\n",VAR_5);
}
