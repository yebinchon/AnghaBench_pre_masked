
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d {int ref; int flags; int adapter_count; int * adapters; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;

HRESULT FUNC_4(struct wined3d *VAR_3, DWORD VAR_4)
{
    BOOL VAR_5;

    VAR_3->ref = 1;
    VAR_3->flags = VAR_4;

    FUNC_0("Initializing adapters.\n");

    if (VAR_4 & VAR_1)
        VAR_5 = FUNC_3(&VAR_3->adapters[0], 0);
    else
        VAR_5 = FUNC_2(&VAR_3->adapters[0], 0, VAR_4);
    if (!VAR_5)
    {
        FUNC_1("Failed to initialize adapter.\n");
        return VAR_0;
    }
    VAR_3->adapter_count = 1;

    return VAR_2;
}
