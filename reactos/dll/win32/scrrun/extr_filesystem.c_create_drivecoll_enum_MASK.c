
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_5__ {int cur; struct drivecollection* coll; } ;
struct TYPE_6__ {TYPE_1__ drivecoll; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct enumvariant {int ref; TYPE_4__ IEnumVARIANT_iface; TYPE_3__ data; } ;
struct drivecollection {int IDriveCollection_iface; } ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct enumvariant* FUNC_1 (int) ;

__attribute__((used)) static HRESULT FUNC_2(struct drivecollection *VAR_3, IUnknown **VAR_4)
{
    struct enumvariant *VAR_5;

    *VAR_4 = ((void*)0);

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5) return VAR_0;

    VAR_5->IEnumVARIANT_iface.lpVtbl = &VAR_2;
    VAR_5->ref = 1;
    VAR_5->data.u.drivecoll.coll = VAR_3;
    VAR_5->data.u.drivecoll.cur = -1;
    FUNC_0(&VAR_3->IDriveCollection_iface);

    *VAR_4 = (IUnknown*)&VAR_5->IEnumVARIANT_iface;

    return VAR_1;
}
