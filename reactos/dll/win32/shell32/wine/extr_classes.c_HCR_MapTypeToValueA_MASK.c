
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSTR ;
typedef char* LPCSTR ;
typedef int LONG ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,char*,int ) ;

BOOL FUNC_6(LPCSTR VAR_5, LPSTR VAR_6, LONG VAR_7, BOOL VAR_8)
{
 HKEY VAR_9;
 char VAR_10[VAR_3 + 2];

 FUNC_4("%s %p\n", VAR_5, VAR_6);


        if (VAR_5[0] == '.')
          VAR_8 = VAR_0;

 if (VAR_8)
   VAR_10[0] = '.';

 FUNC_5(VAR_10 + (VAR_8?1:0), VAR_5, VAR_3);

 if (FUNC_2(VAR_1, VAR_10, 0, VAR_2, &VAR_9))
 {
   return VAR_0;
 }
 if (FUNC_3(VAR_9, ((void*)0), VAR_6, &VAR_7))
 {
   FUNC_0(VAR_9);
   return VAR_0;
 }

 FUNC_0(VAR_9);

 FUNC_4("--UE;\n} %s\n", VAR_6);

 return VAR_4;
}
