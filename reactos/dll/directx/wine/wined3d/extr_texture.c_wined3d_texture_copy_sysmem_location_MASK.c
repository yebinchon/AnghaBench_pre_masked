
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct wined3d_device* device; } ;
struct wined3d_texture {TYPE_2__* sub_resources; TYPE_1__ resource; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_bo_address {int addr; scalar_t__ buffer_object; } ;
struct TYPE_4__ {unsigned int size; int locations; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 struct wined3d_context* FUNC_2 (struct wined3d_device*,int *,int ) ;
 int FUNC_3 (struct wined3d_context*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ,unsigned int,int ) ;
 int FUNC_6 (int ,int ,unsigned int,int ) ;
 int FUNC_7 (int ,int ,unsigned int) ;
 int FUNC_8 (struct wined3d_texture*,unsigned int,struct wined3d_bo_address*,int ) ;
 int FUNC_9 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int ) ;

__attribute__((used)) static BOOL FUNC_10(struct wined3d_texture *VAR_4,
        unsigned int VAR_5, struct wined3d_context *VAR_6, DWORD VAR_7)
{
    unsigned int VAR_8 = VAR_4->sub_resources[VAR_5].size;
    struct wined3d_device *VAR_9 = VAR_4->resource.device;
    const struct wined3d_gl_info *VAR_10;
    struct wined3d_bo_address VAR_11, VAR_12;

    if (!FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7))
        return VAR_0;

    FUNC_8(VAR_4, VAR_5, &VAR_11, VAR_7);
    FUNC_8(VAR_4, VAR_5, &VAR_12,
            VAR_4->sub_resources[VAR_5].locations);

    if (VAR_11.buffer_object)
    {
        VAR_6 = FUNC_2(VAR_9, ((void*)0), 0);
        VAR_10 = VAR_6->gl_info;
        FUNC_0(FUNC_4(VAR_2, VAR_11.buffer_object));
        FUNC_0(FUNC_5(VAR_2, 0, VAR_8, VAR_12.addr));
        FUNC_0(FUNC_4(VAR_2, 0));
        FUNC_1("PBO upload");
        FUNC_3(VAR_6);
        return VAR_3;
    }

    if (VAR_12.buffer_object)
    {
        VAR_6 = FUNC_2(VAR_9, ((void*)0), 0);
        VAR_10 = VAR_6->gl_info;
        FUNC_0(FUNC_4(VAR_1, VAR_12.buffer_object));
        FUNC_0(FUNC_6(VAR_1, 0, VAR_8, VAR_11.addr));
        FUNC_0(FUNC_4(VAR_1, 0));
        FUNC_1("PBO download");
        FUNC_3(VAR_6);
        return VAR_3;
    }

    FUNC_7(VAR_11.addr, VAR_12.addr, VAR_8);
    return VAR_3;
}
