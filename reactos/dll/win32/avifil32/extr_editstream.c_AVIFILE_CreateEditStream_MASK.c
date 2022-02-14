
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_3__ IAVIStream_iface; TYPE_1__ IAVIEditStream_iface; } ;
typedef int LPARAM ;
typedef int IAVIStream ;
typedef TYPE_2__ IAVIEditStreamImpl ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static IAVIEditStreamImpl *FUNC_3(IAVIStream *VAR_3)
{
  IAVIEditStreamImpl *VAR_4 = ((void*)0);

  VAR_4 = FUNC_1(FUNC_0(), VAR_0, sizeof(IAVIEditStreamImpl));
  if (VAR_4 == ((void*)0))
    return ((void*)0);

  VAR_4->IAVIEditStream_iface.lpVtbl = &VAR_2;
  VAR_4->IAVIStream_iface.lpVtbl = &VAR_1;
  VAR_4->ref = 1;

  FUNC_2(&VAR_4->IAVIStream_iface, (LPARAM)VAR_3, 0);

  return VAR_4;
}
