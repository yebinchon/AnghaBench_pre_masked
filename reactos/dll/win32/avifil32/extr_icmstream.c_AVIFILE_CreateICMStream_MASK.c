
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {TYPE_2__ IAVIStream_iface; } ;
typedef int * REFIID ;
typedef int * LPVOID ;
typedef TYPE_1__ IAVIStreamImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int *,int **) ;
 int FUNC_6 (int) ;
 int VAR_2 ;

HRESULT FUNC_7(REFIID VAR_3, LPVOID *VAR_4)
{
  IAVIStreamImpl *VAR_5;
  HRESULT VAR_6;

  FUNC_6(VAR_3 != ((void*)0) && VAR_4 != ((void*)0));

  *VAR_4 = ((void*)0);

  VAR_5 = FUNC_3(FUNC_2(), VAR_1, sizeof(IAVIStreamImpl));
  if (VAR_5 == ((void*)0))
    return VAR_0;

  VAR_5->IAVIStream_iface.lpVtbl = &VAR_2;
  FUNC_0(VAR_5);

  VAR_6 = FUNC_5(&VAR_5->IAVIStream_iface, VAR_3, VAR_4);
  if (FUNC_1(VAR_6))
    FUNC_4(FUNC_2(), 0, VAR_5);

  return VAR_6;
}
