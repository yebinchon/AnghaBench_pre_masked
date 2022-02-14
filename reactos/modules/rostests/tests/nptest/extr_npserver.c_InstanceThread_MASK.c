
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ LPVOID ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int *,scalar_t__,scalar_t__*,int *) ;

VOID FUNC_6 (LPVOID VAR_1)
{
   CHAR VAR_2[VAR_0];
   CHAR VAR_3[VAR_0];
   DWORD VAR_4, VAR_5, VAR_6;
   BOOL VAR_7;
   HANDLE VAR_8;

   VAR_8 = (HANDLE)VAR_1;
   while (1)
     {
 VAR_7 = FUNC_4(VAR_8,
       VAR_2,
       VAR_0,
       &VAR_4,
       ((void*)0));
 if (!VAR_7 || VAR_4 == 0)
   break;

 FUNC_3(VAR_2, VAR_3, &VAR_5);

 VAR_7 = FUNC_5(VAR_8,
        VAR_3,
        VAR_5,
        &VAR_6,
        ((void*)0));
 if (!VAR_7 || VAR_5 != VAR_6)
   break;
    }

   FUNC_2(VAR_8);
   FUNC_1(VAR_8);
   FUNC_0(VAR_8);
}
