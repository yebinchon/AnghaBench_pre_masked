
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* propid_to_prop; void* propid_to_name; void* name_to_propid; } ;
typedef TYPE_1__ PropertyStorage_impl ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int ,int *,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_3(PropertyStorage_impl *VAR_6)
{
    HRESULT VAR_7 = VAR_5;

    VAR_6->name_to_propid = FUNC_2(
     VAR_1, VAR_2,
     VAR_6);
    if (!VAR_6->name_to_propid)
    {
        VAR_7 = VAR_4;
        goto end;
    }
    VAR_6->propid_to_name = FUNC_2(VAR_0,
     ((void*)0), VAR_6);
    if (!VAR_6->propid_to_name)
    {
        VAR_7 = VAR_4;
        goto end;
    }
    VAR_6->propid_to_prop = FUNC_2(VAR_0,
     VAR_3, VAR_6);
    if (!VAR_6->propid_to_prop)
    {
        VAR_7 = VAR_4;
        goto end;
    }
end:
    if (FUNC_0(VAR_7))
        FUNC_1(VAR_6);
    return VAR_7;
}
