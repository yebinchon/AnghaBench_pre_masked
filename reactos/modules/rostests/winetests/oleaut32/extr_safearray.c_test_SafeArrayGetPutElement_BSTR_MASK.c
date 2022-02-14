
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int cbElements; } ;
struct TYPE_8__ {int lLbound; int cElements; } ;
typedef TYPE_1__ SAFEARRAYBOUND ;
typedef TYPE_2__ SAFEARRAY ;
typedef char OLECHAR ;
typedef int LONG ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int*,int **) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int*,int *) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
  SAFEARRAYBOUND VAR_2;
  LONG VAR_3[1];
  SAFEARRAY *VAR_4;
  HRESULT VAR_5;
  BSTR VAR_6 = 0, VAR_7;
  const OLECHAR VAR_8[5] = { 'T','e','s','t','\0' };

  VAR_2.lLbound = 1;
  VAR_2.cElements = 1;

  VAR_4 = FUNC_0(VAR_1, 1, &VAR_2);
  FUNC_7(VAR_4 != ((void*)0), "BSTR test couldn't create array\n");
  if (!VAR_4)
    return;

  FUNC_7(VAR_4->cbElements == sizeof(BSTR), "BSTR size mismatch\n");

  VAR_3[0] = VAR_2.lLbound;
  VAR_6 = FUNC_4(VAR_8);
  FUNC_7 (VAR_6 != ((void*)0), "Expected non-NULL\n");
  VAR_5 = FUNC_3(VAR_4, VAR_3, VAR_6);
  FUNC_7(VAR_5 == VAR_0, "Failed to put bstr element hres 0x%x\n", VAR_5);
  VAR_7 = ((void*)0);
  VAR_5 = FUNC_2(VAR_4, VAR_3, &VAR_7);
  FUNC_7(VAR_5 == VAR_0, "Failed to get bstr element at hres 0x%x\n", VAR_5);
  if (VAR_5 == VAR_0)
    FUNC_7(FUNC_6(VAR_6) == FUNC_6(VAR_7), "Got len %d instead of %d\n", FUNC_6(VAR_7), FUNC_6(VAR_6));
  VAR_5 = FUNC_1(VAR_4);
  FUNC_7(VAR_5 == VAR_0, "got 0x%08x\n", VAR_5);
  FUNC_5(VAR_6);
  FUNC_5(VAR_7);
}
