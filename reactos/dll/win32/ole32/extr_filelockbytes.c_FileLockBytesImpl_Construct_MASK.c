
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ ILockBytes_iface; int * pwcsName; int flProtect; scalar_t__ hfile; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ ILockBytes ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef TYPE_2__ FileLockBytesImpl ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;

HRESULT FUNC_8(HANDLE VAR_6, DWORD VAR_7, LPCWSTR VAR_8, ILockBytes **VAR_9)
{
  FileLockBytesImpl *VAR_10;
  WCHAR VAR_11[VAR_4];

  if (VAR_6 == VAR_3)
    return VAR_0;

  VAR_10 = FUNC_3(FUNC_1(), 0, sizeof(FileLockBytesImpl));

  if (!VAR_10)
    return VAR_1;

  VAR_10->ILockBytes_iface.lpVtbl = &VAR_2;
  VAR_10->ref = 1;
  VAR_10->hfile = VAR_6;
  VAR_10->flProtect = FUNC_2(VAR_7);

  if(VAR_8) {
    if (!FUNC_0(VAR_8, VAR_4, VAR_11, ((void*)0)))
    {
      FUNC_6(VAR_11, VAR_8, VAR_4);
    }
    VAR_10->pwcsName = FUNC_3(FUNC_1(), 0,
                              (FUNC_7(VAR_11)+1)*sizeof(WCHAR));
    if (!VAR_10->pwcsName)
    {
       FUNC_4(FUNC_1(), 0, VAR_10);
       return VAR_1;
    }
    FUNC_5(VAR_10->pwcsName, VAR_11);
  }
  else
    VAR_10->pwcsName = ((void*)0);

  *VAR_9 = &VAR_10->ILockBytes_iface;

  return VAR_5;
}
