
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int refCount; TYPE_2__ IEnumGUID_iface; int key; } ;
typedef TYPE_1__ ProfilesEnumGuid ;
typedef TYPE_2__ IEnumGUID ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int,int *,int *,int *) ;
 int VAR_8 ;
 int FUNC_4 (char*,TYPE_2__*) ;
 int VAR_9 ;

__attribute__((used)) static HRESULT FUNC_5(IEnumGUID **VAR_10)
{
    ProfilesEnumGuid *VAR_11;

    VAR_11 = FUNC_1(FUNC_0(),VAR_4,sizeof(ProfilesEnumGuid));
    if (VAR_11 == ((void*)0))
        return VAR_2;

    VAR_11->IEnumGUID_iface.lpVtbl= &VAR_3;
    VAR_11->refCount = 1;

    if (FUNC_3(VAR_5, VAR_9, 0, ((void*)0), 0,
                    VAR_6 | VAR_7, ((void*)0), &VAR_11->key, ((void*)0)) != VAR_0)
    {
        FUNC_2(FUNC_0(), 0, VAR_11);
        return VAR_1;
    }

    *VAR_10 = &VAR_11->IEnumGUID_iface;
    FUNC_4("returning %p\n", *VAR_10);
    return VAR_8;
}
