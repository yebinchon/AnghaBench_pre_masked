
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cbSize; int hProcess; int hInstApp; int lpClass; int lpDirectory; int lpParameters; int lpFile; int lpVerb; } ;
struct TYPE_7__ {int fMask; int * lpClass; int * lpDirectory; int * lpParameters; int * lpFile; int * lpVerb; int hProcess; int hInstApp; } ;
typedef TYPE_1__ SHELLEXECUTEINFOW ;
typedef TYPE_2__ SHELLEXECUTEINFOA ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static __inline BOOL FUNC_6(SHELLEXECUTEINFOA* VAR_4)
{
 BOOL VAR_5 = VAR_2;
 DWORD VAR_6 = VAR_1;
 SHELLEXECUTEINFOW VAR_7;


 if (VAR_4->cbSize != sizeof(SHELLEXECUTEINFOW)) {
  FUNC_1(VAR_0); return VAR_2;
 }
 FUNC_3(&VAR_7, VAR_4, VAR_4->cbSize);
 VAR_7.lpVerb = FUNC_5(VAR_4->lpVerb);
 VAR_7.lpFile = FUNC_5(VAR_4->lpFile);
 VAR_7.lpParameters = FUNC_5(VAR_4->lpParameters);
 VAR_7.lpDirectory = FUNC_5(VAR_4->lpDirectory);
 if (VAR_7.fMask & VAR_3) {
  VAR_7.lpClass = FUNC_5(VAR_4->lpClass);
 } else {
  VAR_7.lpClass = ((void*)0);
 }
 VAR_5 = FUNC_2(&VAR_7);
 VAR_6 = FUNC_0();

 VAR_4->hInstApp = VAR_7.hInstApp;
 VAR_4->hProcess = VAR_7.hProcess;
 FUNC_4(VAR_7.lpVerb);
 FUNC_4(VAR_7.lpFile);
 FUNC_4(VAR_7.lpParameters);
 FUNC_4(VAR_7.lpDirectory);
 FUNC_4(VAR_7.lpClass);
 FUNC_1(VAR_6);
 return VAR_5;
}
