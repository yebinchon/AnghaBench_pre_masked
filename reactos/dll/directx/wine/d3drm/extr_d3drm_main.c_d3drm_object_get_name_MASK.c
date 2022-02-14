
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3drm_object {scalar_t__ name; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;

HRESULT FUNC_2(struct d3drm_object *VAR_2, DWORD *VAR_3, char *VAR_4)
{
    DWORD VAR_5;

    if (!VAR_3)
        return VAR_1;

    VAR_5 = VAR_2->name ? FUNC_1(VAR_2->name) + 1 : 0;
    if (VAR_4 && *VAR_3 < VAR_5)
        return VAR_1;

    if (VAR_4)
    {
        if (VAR_2->name)
            FUNC_0(VAR_4, VAR_2->name, VAR_5);
        else if (*VAR_3)
            *VAR_4 = 0;
    }

    *VAR_3 = VAR_5;

    return VAR_0;
}
