
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int err_string ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int,int *,int ,int ,char*,size_t,int *) ;
 size_t FUNC_1 () ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (size_t) ;
 int VAR_4 ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*,size_t,...) ;
 scalar_t__ FUNC_9 (char*) ;

const char *FUNC_10(void)
{
 static char VAR_5[256] = { 0 };

 DWORD VAR_6, VAR_7;
 DWORD VAR_8, VAR_9;

 VAR_8 = FUNC_1();

 if ((FUNC_5(VAR_8) == VAR_0) && (FUNC_2(VAR_8) != ((void*)0))) {
  FUNC_8(VAR_5, "[0x%08lX] %s", VAR_8, FUNC_2(VAR_8));
  return VAR_5;
 }

 FUNC_8(VAR_5, "[0x%08lX] ", VAR_8);
 VAR_7 = (DWORD)FUNC_9(VAR_5);

 VAR_6 = FUNC_0(VAR_1|VAR_2, ((void*)0), FUNC_3(VAR_8),
  FUNC_4(VAR_3, VAR_4), &VAR_5[VAR_7],
  sizeof(VAR_5)-(DWORD)FUNC_9(VAR_5), ((void*)0));
 if (VAR_6 == 0) {
  VAR_9 = FUNC_1();
  if ((VAR_9) && (VAR_9 != 0x13D))
   FUNC_8(VAR_5, "Windows error code 0x%08lX (FormatMessage error code 0x%08lX)",
    VAR_8, VAR_9);
  else
   FUNC_8(VAR_5, "Unknown error 0x%08lX", VAR_8);
 } else {

  FUNC_7(VAR_7 > 2);
  VAR_6 += VAR_7 - 2;

  while ((VAR_5[VAR_6] == 0x0D) || (VAR_5[VAR_6] == 0x0A) || (VAR_5[VAR_6] == 0x20))
   VAR_5[VAR_6--] = 0;
 }

 FUNC_6(VAR_8);
 return VAR_5;
}
