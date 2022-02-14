
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_10__ {int iMalloc; } ;
struct TYPE_9__ {scalar_t__ etype; scalar_t__ pidl; } ;
struct TYPE_8__ {int cbSize; scalar_t__ lpIDList; int nShow; int * lpDirectory; int * lpParameters; int * lpFile; int * lpVerb; int hwnd; int fMask; } ;
typedef TYPE_1__ SHELLEXECUTEINFOW ;
typedef int HWND ;
typedef TYPE_2__ Entry ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_7__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static BOOL FUNC_7(Entry* VAR_6, HWND VAR_7, UINT VAR_8)
{
 WCHAR VAR_9[VAR_3];

 if (VAR_6->etype == VAR_0) {
  BOOL VAR_10 = VAR_5;

  SHELLEXECUTEINFOW VAR_11;

  VAR_11.cbSize = sizeof(SHELLEXECUTEINFOW);
  VAR_11.fMask = VAR_4;
  VAR_11.hwnd = VAR_7;
  VAR_11.lpVerb = ((void*)0);
  VAR_11.lpFile = ((void*)0);
  VAR_11.lpParameters = ((void*)0);
  VAR_11.lpDirectory = ((void*)0);
  VAR_11.nShow = VAR_8;
  VAR_11.lpIDList = FUNC_5(VAR_6, VAR_7);

  if (!FUNC_2(&VAR_11)) {
   FUNC_3(VAR_7, FUNC_0());
   VAR_10 = VAR_1;
  }

  if (VAR_11.lpIDList != VAR_6->pidl)
   FUNC_1(VAR_2.iMalloc, VAR_11.lpIDList);

  return VAR_10;
 }

 FUNC_4(VAR_6, VAR_9);


 return FUNC_6(VAR_7, VAR_9, VAR_8);
}
