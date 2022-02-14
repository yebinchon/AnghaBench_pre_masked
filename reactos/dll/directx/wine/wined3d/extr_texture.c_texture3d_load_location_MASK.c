
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_texture_sub_resource {int locations; TYPE_2__* buffer; int buffer_object; int offset; } ;
struct TYPE_3__ {int * heap_memory; } ;
struct wined3d_texture {int download_count; TYPE_1__ resource; struct wined3d_texture_sub_resource* sub_resources; } ;
struct wined3d_context {int dummy; } ;
struct wined3d_const_bo_address {int * member_1; int member_0; int addr; } ;
struct wined3d_bo_address {int * member_1; int member_0; int addr; } ;
struct TYPE_4__ {int name; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_1 ;




 int FUNC_1 (struct wined3d_texture*,unsigned int,struct wined3d_context*,struct wined3d_bo_address*) ;
 int FUNC_2 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int) ;
 int FUNC_3 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int *,struct wined3d_const_bo_address*,unsigned int,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct wined3d_texture*,struct wined3d_context*,int) ;
 int FUNC_6 (struct wined3d_texture*,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_7 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int) ;

__attribute__((used)) static BOOL FUNC_8(struct wined3d_texture *VAR_2, unsigned int VAR_3,
        struct wined3d_context *VAR_4, DWORD VAR_5)
{
    struct wined3d_texture_sub_resource *VAR_6 = &VAR_2->sub_resources[VAR_3];
    unsigned int VAR_7, VAR_8;

    if (!FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5))
        return VAR_0;

    switch (VAR_5)
    {
        case 129:
        case 128:
            if (VAR_6->locations & 130)
            {
                struct wined3d_const_bo_address VAR_9 = {0, *VAR_2->resource.heap_memory};
                VAR_9.addr += VAR_6->offset;
                FUNC_5(VAR_2, VAR_4,
                        VAR_5 == 128);
                FUNC_6(VAR_2, VAR_3, &VAR_7, &VAR_8);
                FUNC_3(VAR_2, VAR_3, VAR_4, ((void*)0), &VAR_9, VAR_7, VAR_8);
            }
            else if (VAR_6->locations & 131)
            {

                struct wined3d_const_bo_address VAR_10 = {&VAR_6->buffer_object, ((void*)0)};



                FUNC_5(VAR_2, VAR_4,
                        VAR_5 == 128);
                FUNC_6(VAR_2, VAR_3, &VAR_7, &VAR_8);
                FUNC_3(VAR_2, VAR_3, VAR_4, ((void*)0), &VAR_10, VAR_7, VAR_8);
            }
            else if (VAR_6->locations & 129)
            {
                FUNC_2(VAR_2, VAR_3, VAR_4, VAR_1);
            }
            else if (VAR_6->locations & 128)
            {
                FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0);
            }
            else
            {
                FUNC_0("Implement texture loading from %s.\n", FUNC_4(VAR_6->locations));
                return VAR_0;
            }
            break;

        case 130:
            if (VAR_6->locations & (129 | 128))
            {
                struct wined3d_bo_address VAR_11 = {0, *VAR_2->resource.heap_memory};

                VAR_11.addr += VAR_6->offset;
                if (VAR_6->locations & 129)
                    FUNC_5(VAR_2, VAR_4, VAR_0);
                else
                    FUNC_5(VAR_2, VAR_4, VAR_1);

                FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_11);
                ++VAR_2->download_count;
            }
            else
            {
                FUNC_0("Implement WINED3D_LOCATION_SYSMEM loading from %s.\n",
                        FUNC_4(VAR_6->locations));
                return VAR_0;
            }
            break;

        case 131:
            if (VAR_6->locations & (129 | 128))
            {

                struct wined3d_bo_address VAR_12 = {&VAR_6->buffer_object, ((void*)0)};




                if (VAR_6->locations & 129)
                    FUNC_5(VAR_2, VAR_4, VAR_0);
                else
                    FUNC_5(VAR_2, VAR_4, VAR_1);

                FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_12);
            }
            else
            {
                FUNC_0("Implement WINED3D_LOCATION_BUFFER loading from %s.\n",
                        FUNC_4(VAR_6->locations));
                return VAR_0;
            }
            break;

        default:
            FUNC_0("Implement %s loading from %s.\n", FUNC_4(VAR_5),
                    FUNC_4(VAR_6->locations));
            return VAR_0;
    }

    return VAR_1;
}
