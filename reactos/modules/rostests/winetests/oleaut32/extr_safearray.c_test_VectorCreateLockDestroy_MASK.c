
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARTYPE ;
typedef int SAFEARRAY ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int,char*,...) ;
 int * FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
  SAFEARRAY *VAR_4;
  HRESULT VAR_5;
  VARTYPE VAR_6;
  int VAR_7;

  if (!&FUNC_7)
  {
    FUNC_8("SafeArrayCreateVector not supported\n");
    return;
  }
  VAR_4 = FUNC_7(VAR_3, 0, 0);
  FUNC_6(VAR_4 != ((void*)0), "SACV with 0 elements failed.\n");

  VAR_5 = FUNC_1(VAR_4);
  FUNC_6(VAR_5 == VAR_0, "SafeArrayDestroy failed with hres %x\n",VAR_5);


  for (VAR_7 = 1; VAR_7 <= 101; VAR_7 += 10)
  {
    for (VAR_6 = VAR_2; VAR_6 < VAR_1; VAR_6++)
    {
      DWORD VAR_8 = FUNC_0(VAR_6);

      VAR_4 = FUNC_7(VAR_6, 0, VAR_7);

      if (VAR_8)
        FUNC_6(VAR_4 != ((void*)0), "VARTYPE %d (@%d elements) failed\n", VAR_6, VAR_7);
      else
        FUNC_6(VAR_4 == ((void*)0), "VARTYPE %d (@%d elements) succeeded!\n", VAR_6, VAR_7);

      if (VAR_4)
      {
        FUNC_6(FUNC_2(VAR_4) == 1, "VARTYPE %d (@%d elements) cDims %d, not 1\n",
           VAR_6, VAR_7, FUNC_2(VAR_4));
        FUNC_6(FUNC_3(VAR_4) == VAR_8,
           "VARTYPE %d (@%d elements) cbElements is %d, expected %d\n",
           VAR_6, VAR_7, FUNC_3(VAR_4), VAR_8);

        VAR_5 = FUNC_4(VAR_4);
        FUNC_6(VAR_5 == VAR_0, "Lock VARTYPE %d (@%d elements) failed; hres 0x%x\n",
           VAR_6, VAR_7, VAR_5);

        if (VAR_5 == VAR_0)
        {
          VAR_5 = FUNC_5(VAR_4);
          FUNC_6(VAR_5 == VAR_0, "Unlock VARTYPE %d (@%d elements) failed; hres 0x%x\n",
             VAR_6, VAR_7, VAR_5);

          VAR_5 = FUNC_1(VAR_4);
          FUNC_6(VAR_5 == VAR_0, "destroy VARTYPE %d (@%d elements) failed; hres 0x%x\n",
             VAR_6, VAR_7, VAR_5);
        }
      }
    }
  }
}
