
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chMsg ;
typedef int WCHAR ;
typedef int VOID ;
typedef scalar_t__ LPTSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int *,int,int ,scalar_t__*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int,char*,int) ;
 int FUNC_6 (int *,int,char*,int) ;

VOID
FUNC_7(LPTSTR VAR_1)
{
 WCHAR VAR_2[256];
 HANDLE VAR_3;
 LPCWSTR VAR_4[2];



 VAR_3 = FUNC_2(((void*)0),
            FUNC_4("tirpc.dll"));


 FUNC_6(VAR_2, sizeof(VAR_2), L"tirpc report: %d", FUNC_1());



 VAR_4[0] = (LPCWSTR)VAR_2;
 VAR_4[1] = VAR_1;

 if (VAR_3 != ((void*)0)) {
  FUNC_3(VAR_3,
   VAR_0,
   0,
   0,
   ((void*)0),
   2,
   0,
   VAR_4,
   ((void*)0));

  (VOID) FUNC_0(VAR_3);
 }
}
