
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {scalar_t__ Buffer; } ;
struct TYPE_7__ {int RefCount; TYPE_3__ IStream_iface; scalar_t__* size; scalar_t__ pos; scalar_t__ data; TYPE_2__* pMsg; } ;
typedef TYPE_1__ RpcStreamImpl ;
typedef TYPE_2__* PMIDL_STUB_MESSAGE ;
typedef scalar_t__* LPDWORD ;
typedef TYPE_3__ IStream ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_3(PMIDL_STUB_MESSAGE VAR_3, BOOL VAR_4, ULONG *VAR_5, IStream **VAR_6)
{
  RpcStreamImpl *VAR_7;

  *VAR_6 = ((void*)0);
  VAR_7 = FUNC_1(FUNC_0(), 0, sizeof(RpcStreamImpl));
  if (!VAR_7) return VAR_0;
  VAR_7->IStream_iface.lpVtbl = &VAR_1;
  VAR_7->RefCount = 1;
  VAR_7->pMsg = VAR_3;
  VAR_7->size = (LPDWORD)VAR_3->Buffer;
  VAR_7->data = VAR_3->Buffer + sizeof(DWORD);
  VAR_7->pos = 0;
  if (VAR_4) *VAR_7->size = 0;
  FUNC_2("init size=%d\n", *VAR_7->size);

  if (VAR_5) *VAR_5 = *VAR_7->size;
  *VAR_6 = &VAR_7->IStream_iface;
  return VAR_2;
}
