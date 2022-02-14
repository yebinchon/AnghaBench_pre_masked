
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct d3dtex {int w; int h; int tex_w; int tex_h; int device; int system; } ;
struct TYPE_6__ {int opt_texture_memory; int d3d_device; int device_texture_sys; } ;
typedef TYPE_1__ d3d_priv ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int,int ,int ,int,int *,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int,int) ;
 int FUNC_3 (TYPE_1__*,int*,int*) ;
 int FUNC_4 (TYPE_1__*,struct d3dtex*) ;

__attribute__((used)) static bool FUNC_5(d3d_priv *VAR_5, struct d3dtex *VAR_6, D3DFORMAT VAR_7,
                            int VAR_8, int VAR_9)
{
    FUNC_4(VAR_5, VAR_6);

    VAR_6->w = VAR_8;
    VAR_6->h = VAR_9;

    int VAR_10 = VAR_8, VAR_11 = VAR_9;
    FUNC_3(VAR_5, &VAR_10, &VAR_11);

    bool VAR_12 = !VAR_5->device_texture_sys;
    int VAR_13 = VAR_3;
    switch (VAR_5->opt_texture_memory) {
    case 1: VAR_13 = VAR_1; VAR_12 = 0; break;
    case 2: VAR_13 = VAR_0; VAR_12 = 0; break;
    case 3: VAR_13 = VAR_0; VAR_12 = 1; break;
    case 4: VAR_13 = VAR_2; VAR_12 = 1; break;
    }

    if (FUNC_0(FUNC_1(VAR_5->d3d_device, VAR_10, VAR_11, 1,
        VAR_4, VAR_7, VAR_13, &VAR_6->system, ((void*)0))))
    {
        FUNC_2(VAR_5, "Allocating %dx%d texture in system RAM failed.\n", VAR_8, VAR_9);
        goto error_exit;
    }

    if (VAR_12) {
        if (FUNC_0(FUNC_1(VAR_5->d3d_device, VAR_10, VAR_11, 1,
            VAR_4, VAR_7, VAR_0, &VAR_6->device, ((void*)0))))
        {
            FUNC_2(VAR_5, "Allocating %dx%d texture in video RAM failed.\n", VAR_8, VAR_9);
            goto error_exit;
        }
    }

    VAR_6->tex_w = VAR_10;
    VAR_6->tex_h = VAR_11;

    return 1;

error_exit:
    FUNC_4(VAR_5, VAR_6);
    return 0;
}
