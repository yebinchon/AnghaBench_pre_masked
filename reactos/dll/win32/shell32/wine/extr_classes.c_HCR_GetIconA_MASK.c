
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSTR ;
typedef char* LPCSTR ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int *) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,char*,char*) ;

BOOL FUNC_5(LPCSTR VAR_4, LPSTR VAR_5, LPCSTR VAR_6, DWORD VAR_7, int* VAR_8)
{
 HKEY VAR_9;
 char VAR_10[VAR_3];
 BOOL VAR_11 = VAR_0;

 FUNC_3("%s\n",VAR_4 );

 FUNC_4(VAR_10, "%s\\DefaultIcon",VAR_4);

 if (!FUNC_2(VAR_1, VAR_10, 0, VAR_2, &VAR_9))
 {
   VAR_11 = FUNC_0(VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
   FUNC_1(VAR_9);
 }
 FUNC_3("-- %s %i\n", VAR_5, *VAR_8);
 return VAR_11;
}
