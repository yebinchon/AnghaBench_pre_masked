
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {int IStorage_iface; } ;
struct TYPE_7__ {TYPE_2__ base; } ;
typedef TYPE_1__ StorageImpl ;
typedef TYPE_2__ StorageBaseImpl ;
typedef int LPCOLESTR ;
typedef int ILockBytes ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int,int ,int ,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_2__**) ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_4(
  HANDLE VAR_2,
  LPCOLESTR VAR_3,
  ILockBytes* VAR_4,
  DWORD VAR_5,
  BOOL VAR_6,
  BOOL VAR_7,
  ULONG VAR_8,
  StorageBaseImpl** VAR_9)
{
  StorageImpl *VAR_10;
  StorageBaseImpl *VAR_11;
  HRESULT VAR_12;

  VAR_12 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, &VAR_10);
  if (FUNC_0(VAR_12)) goto end;

  if (VAR_5 & VAR_0)
  {
    VAR_12 = FUNC_3(&VAR_10->base, VAR_1, &VAR_11);
    if (FUNC_0(VAR_12))
      FUNC_1(&VAR_10->base.IStorage_iface);
    else
      *VAR_9 = VAR_11;
  }
  else
    *VAR_9 = &VAR_10->base;

end:
  return VAR_12;
}
