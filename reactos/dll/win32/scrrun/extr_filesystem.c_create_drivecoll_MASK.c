
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct drivecollection {int ref; int drives; TYPE_1__ IDriveCollection_iface; int classinfo; scalar_t__ count; } ;
typedef int IUnknown ;
typedef TYPE_1__ IDriveCollection ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct drivecollection* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_3(IDriveCollection **VAR_4)
{
    struct drivecollection *VAR_5;
    DWORD VAR_6;

    *VAR_4 = ((void*)0);

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5) return VAR_1;

    VAR_5->IDriveCollection_iface.lpVtbl = &VAR_3;
    VAR_5->ref = 1;
    VAR_5->drives = VAR_6 = FUNC_0();

    for (VAR_5->count = 0; VAR_6; VAR_5->count++)
        VAR_6 &= VAR_6 - 1;

    FUNC_2(&VAR_0, (IUnknown *)&VAR_5->IDriveCollection_iface, &VAR_5->classinfo);
    *VAR_4 = &VAR_5->IDriveCollection_iface;
    return VAR_2;
}
