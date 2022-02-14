
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int LPWSTR ;
typedef scalar_t__ DWORD ;


 int * FUNC_0 (int ,int*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__*,int ) ;
 scalar_t__* FUNC_9 (scalar_t__*,char) ;

int FUNC_10(int VAR_3, char *VAR_4[])
{
 wchar_t VAR_5[VAR_1];
 LPWSTR VAR_6;
 LPWSTR *VAR_7;
 int VAR_8 = VAR_0;

 FUNC_4(VAR_2);
 FUNC_7();

 VAR_6 = FUNC_1();
 VAR_7 = FUNC_0(VAR_6, &VAR_3);
 if (VAR_7 && VAR_3 == 4) {
  DWORD VAR_9 = FUNC_2(((void*)0), VAR_5, VAR_1);
  if (VAR_9) {
   wchar_t *VAR_10 = FUNC_9(VAR_5, '\\');
   if (VAR_10) {
    *(++VAR_10) = 0;
    FUNC_8(VAR_10, VAR_7[1]);
    VAR_8 = FUNC_6(VAR_7, VAR_5);
   }
  }
 }
 FUNC_3(VAR_7);

 FUNC_5(VAR_4);
 return VAR_8;
}
