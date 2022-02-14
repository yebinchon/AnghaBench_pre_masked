
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef int LPCSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ,int ,scalar_t__*,int ,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_6(HKEY VAR_4, LPSTR VAR_5, LPCSTR VAR_6, DWORD VAR_7, int* VAR_8)
{
 DWORD VAR_9;
 char VAR_10[VAR_1];
 char VAR_11[5];

 if (!FUNC_3(VAR_4, VAR_6, 0, &VAR_9, (LPBYTE)VAR_5, &VAR_7))
 {
          if (VAR_9 == VAR_2)
   {
     FUNC_0(VAR_5, VAR_10, VAR_1);
     FUNC_5(VAR_5, VAR_10, VAR_7);
   }
   if (FUNC_1 (VAR_5, 2, VAR_11, 5))
             *VAR_8=FUNC_4(VAR_11);
          else
             *VAR_8=0;
   FUNC_1 (VAR_5, 1, VAR_5, VAR_7);
          FUNC_2(VAR_5);
   return VAR_3;
 }
 return VAR_0;
}
