
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {TYPE_2__ IAVIStream_iface; } ;
typedef int * REFIID ;
typedef int * LPVOID ;
typedef TYPE_1__ IAVIStreamImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int *,int **) ;
 int FUNC_5 (int) ;
 int VAR_2 ;

HRESULT FUNC_6(REFIID VAR_3, LPVOID *VAR_4)
{
  IAVIStreamImpl *VAR_5;
  HRESULT VAR_6;

  FUNC_5(VAR_3 != ((void*)0) && VAR_4 != ((void*)0));

  *VAR_4 = ((void*)0);

  VAR_5 = FUNC_2(FUNC_1(), VAR_1, sizeof(IAVIStreamImpl));
  if (VAR_5 == ((void*)0))
    return VAR_0;

  VAR_5->IAVIStream_iface.lpVtbl = &VAR_2;

  VAR_6 = FUNC_4(&VAR_5->IAVIStream_iface, VAR_3, VAR_4);
  if (FUNC_0(VAR_6))
    FUNC_3(FUNC_1(), 0, VAR_5);

  return VAR_6;
}
