
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cElements; scalar_t__ lLbound; } ;
typedef TYPE_1__ SAFEARRAYBOUND ;
typedef int SAFEARRAY ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,char*,scalar_t__,...) ;
 int * FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(void)
{
  SAFEARRAYBOUND VAR_6[4];
  SAFEARRAY *VAR_7;
  HRESULT VAR_8;
  BOOL VAR_9 = VAR_2;
  int VAR_10;


  VAR_8 = FUNC_3(((void*)0));
  FUNC_5(VAR_8 == VAR_0, "Lock NULL array hres 0x%x\n", VAR_8);
  VAR_8 = FUNC_4(((void*)0));
  FUNC_5(VAR_8 == VAR_0, "Lock NULL array hres 0x%x\n", VAR_8);

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++)
  {
    VAR_6[VAR_10].lLbound = 0;
    VAR_6[VAR_10].cElements = 8;
  }

  VAR_7 = FUNC_1(VAR_5, FUNC_0(VAR_6), VAR_6);


test_LockUnlock_Vector:
  if (VAR_7)
  {
    int VAR_11 = 0;

    VAR_8 = FUNC_4(VAR_7);
    FUNC_5 (VAR_8 == VAR_1, "Bad %sUnlock gave hres 0x%x\n",
        VAR_9 ? "vector " : "\n", VAR_8);

    while ((VAR_8 = FUNC_3(VAR_7)) == VAR_3)
      VAR_11++;
    FUNC_5 (VAR_11 == 65535 && VAR_8 == VAR_1, "Lock %sfailed at %d; hres 0x%x\n",
        VAR_9 ? "vector " : "\n", VAR_11, VAR_8);

    if (VAR_11 == 65535 && VAR_8 == VAR_1)
    {
      while ((VAR_8 = FUNC_4(VAR_7)) == VAR_3)
        VAR_11--;
      FUNC_5 (VAR_11 == 0 && VAR_8 == VAR_1, "Unlock %sfailed at %d; hres 0x%x\n",
          VAR_9 ? "vector " : "\n", VAR_11, VAR_8);
    }

    VAR_8 = FUNC_2(VAR_7);
    FUNC_5(VAR_8 == VAR_3, "got 0x%08x\n", VAR_8);
  }

  if (VAR_9 == VAR_2 && &FUNC_6)
  {

    VAR_7 = FUNC_6(VAR_5, 0, 100);
    VAR_9 = VAR_4;
    goto test_LockUnlock_Vector;
  }
}
