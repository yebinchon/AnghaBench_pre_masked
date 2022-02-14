
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PHKEY ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int *,int*,int ,int*) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;

LONG
FUNC_5(PHKEY VAR_3)
{
  LONG VAR_4;
  char VAR_5[80];
  HKEY VAR_6;
  HKEY VAR_7;
  DWORD VAR_8;
  DWORD VAR_9;
  DWORD VAR_10;

  *VAR_3 = 0;

  VAR_4 = FUNC_1(VAR_1,
        "HARDWARE\\DESCRIPTION\\System\\MultifunctionAdapter",
        &VAR_6);
  if (VAR_4 != VAR_0)
    return 0;


  for (VAR_8 = 0; ; VAR_8++)
    {
      FUNC_3(VAR_5, "%lu", VAR_8);

      VAR_4 = FUNC_1(VAR_6,
     VAR_5,
     &VAR_7);
      if (VAR_4 != VAR_0)
 {
   FUNC_0(VAR_6);
   return VAR_4;
 }

      VAR_10 = 80;
      VAR_4 = FUNC_2(VAR_7,
          "Identifier",
          ((void*)0),
          &VAR_9,
          (LPBYTE)VAR_5,
          &VAR_10);
      if (VAR_4 != VAR_0)
 {
   FUNC_0(VAR_7);
   FUNC_0(VAR_6);
   return VAR_4;
 }

      if (VAR_9 == VAR_2 && FUNC_4(VAR_5, "pnp bios") == 0)
 {
   *VAR_3 = VAR_7;
   FUNC_0(VAR_6);
   return VAR_0;
 }

      FUNC_0(VAR_7);
    }

  return 1;
}
