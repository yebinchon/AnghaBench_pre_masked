
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3drm_object {int * name; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

HRESULT FUNC_4(struct d3drm_object *VAR_2, const char *VAR_3)
{
    DWORD VAR_4;

    FUNC_1(VAR_2->name);
    VAR_2->name = ((void*)0);

    if (VAR_3)
    {
        VAR_4 = FUNC_3(VAR_3) + 1;
        if (!(VAR_2->name = FUNC_0(VAR_4)))
            return VAR_1;
        FUNC_2(VAR_2->name, VAR_3, VAR_4);
    }

    return VAR_0;
}
