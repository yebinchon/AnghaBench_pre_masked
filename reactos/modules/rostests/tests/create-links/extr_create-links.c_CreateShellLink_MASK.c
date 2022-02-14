
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_17__ {TYPE_1__* lpVtbl; } ;
struct TYPE_16__ {TYPE_2__* lpVtbl; } ;
struct TYPE_15__ {int (* Release ) (TYPE_3__*) ;scalar_t__ (* QueryInterface ) (TYPE_3__*,int *,int *) ;scalar_t__ (* SetDescription ) (TYPE_3__*,char*) ;scalar_t__ (* SetIconLocation ) (TYPE_3__*,char*,int) ;scalar_t__ (* SetWorkingDirectory ) (TYPE_3__*,char*) ;scalar_t__ (* SetArguments ) (TYPE_3__*,char*) ;scalar_t__ (* SetPath ) (TYPE_3__*,char*) ;} ;
struct TYPE_14__ {int (* Release ) (TYPE_4__*) ;scalar_t__ (* Save ) (TYPE_4__*,int *,int ) ;} ;
typedef int LPVOID ;
typedef char* LPCSTR ;
typedef TYPE_3__ IShellLinkA ;
typedef TYPE_4__ IPersistFile ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*,int,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int *,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_3__*) ;

HRESULT FUNC_13(LPCSTR VAR_7, LPCSTR VAR_8, LPCSTR VAR_9, LPCSTR VAR_10, LPCSTR VAR_11, int VAR_12, LPCSTR VAR_13)
{
 IShellLinkA* VAR_14;
 IPersistFile* VAR_15;
 WCHAR VAR_16[VAR_5];

 HRESULT VAR_17 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_4, (LPVOID*)&VAR_14);

 FUNC_3("creating shortcut file '%s' to %s...\n", VAR_7, VAR_8);

 if (FUNC_2(VAR_17)) {
  VAR_17 = VAR_14->lpVtbl->SetPath(VAR_14, VAR_8);

  if (VAR_9)
   VAR_17 = VAR_14->lpVtbl->SetArguments(VAR_14, VAR_9);

  if (VAR_10)
   VAR_17 = VAR_14->lpVtbl->SetWorkingDirectory(VAR_14, VAR_10);

  if (VAR_11)
   VAR_17 = VAR_14->lpVtbl->SetIconLocation(VAR_14, VAR_11, VAR_12);

  if (VAR_13)
   VAR_17 = VAR_14->lpVtbl->SetDescription(VAR_14, VAR_13);

  VAR_17 = VAR_14->lpVtbl->QueryInterface(VAR_14, &VAR_3, (LPVOID*)&VAR_15);

  if (FUNC_2(VAR_17)) {
   FUNC_1(VAR_2, 0, VAR_7, -1, VAR_16, VAR_5);

   VAR_17 = VAR_15->lpVtbl->Save(VAR_15, VAR_16, VAR_6);

   VAR_15->lpVtbl->Release(VAR_15);
  }

  VAR_14->lpVtbl->Release(VAR_14);
 }

 if (FUNC_2(VAR_17))
  FUNC_3("OK\n\n");
 else
  FUNC_3("error %08x\n\n", (int) VAR_17);

 return VAR_17;
}
