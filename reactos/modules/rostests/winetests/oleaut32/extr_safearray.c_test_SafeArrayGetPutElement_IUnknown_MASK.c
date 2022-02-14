
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ref; int IUnknown_iface; } ;
struct TYPE_10__ {int cbElements; } ;
struct TYPE_9__ {int lLbound; int cElements; } ;
typedef TYPE_1__ SAFEARRAYBOUND ;
typedef TYPE_2__ SAFEARRAY ;
typedef int LPUNKNOWN ;
typedef int LONG ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int*,int **) ;
 int FUNC_3 (TYPE_2__*,int*,int *) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,...) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
  SAFEARRAYBOUND VAR_3;
  LONG VAR_4[1];
  SAFEARRAY *VAR_5;
  HRESULT VAR_6;
  IUnknown *VAR_7;

  VAR_3.lLbound = 1;
  VAR_3.cElements = 1;
  VAR_5 = FUNC_0(VAR_1, 1, &VAR_3);
  FUNC_4(VAR_5 != ((void*)0), "UNKNOWN test couldn't create array\n");
  if (!VAR_5)
    return;

  FUNC_4(VAR_5->cbElements == sizeof(LPUNKNOWN), "LPUNKNOWN size mismatch\n");

  VAR_4[0] = VAR_3.lLbound;
  VAR_2.ref = 1;
  VAR_6 = FUNC_3(VAR_5, VAR_4, &VAR_2.IUnknown_iface);
  FUNC_4(VAR_6 == VAR_0, "Failed to put bstr element hres 0x%x\n", VAR_6);
  FUNC_4(VAR_2.ref == 2,"Failed to increment refcount of iface.\n");
  VAR_7 = ((void*)0);
  VAR_6 = FUNC_2(VAR_5, VAR_4, &VAR_7);
  FUNC_4(VAR_2.ref == 3,"Failed to increment refcount of iface.\n");
  FUNC_4(VAR_6 == VAR_0, "Failed to get bstr element at hres 0x%x\n", VAR_6);
  if (VAR_6 == VAR_0)
    FUNC_4(VAR_7 == &VAR_2.IUnknown_iface, "Got %p instead of %p\n", VAR_7, &VAR_2.IUnknown_iface);
  VAR_6 = FUNC_1(VAR_5);
  FUNC_4(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);
  FUNC_4(VAR_2.ref == 2,"Failed to decrement refcount of iface.\n");
}
