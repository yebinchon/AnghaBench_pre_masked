
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3drm_object {int classname; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

HRESULT FUNC_2(struct d3drm_object *VAR_2, DWORD *VAR_3, char *VAR_4)
{
    DWORD VAR_5;

    if (!VAR_3)
        return VAR_1;

    VAR_5 = FUNC_1(VAR_2->classname) + 1;
    if (VAR_4 && *VAR_3 < VAR_5)
        return VAR_1;

    *VAR_3 = VAR_5;

    if (VAR_4)
        FUNC_0(VAR_4, VAR_2->classname, VAR_5);

    return VAR_0;
}
