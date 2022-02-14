
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_gl_info {int dummy; } ;
struct wined3d_format {int block_byte_count; int block_height; int block_width; } ;
struct TYPE_3__ {int verify; int block_byte_count; int block_height; int block_width; int id; } ;
typedef int BOOL ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct wined3d_format*,int ) ;
 struct wined3d_format* FUNC_2 (struct wined3d_gl_info*,int ) ;

__attribute__((used)) static BOOL FUNC_3(struct wined3d_gl_info *VAR_5)
{
    struct wined3d_format *VAR_6;
    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); ++VAR_7)
    {
        if (!(VAR_6 = FUNC_2(VAR_5, VAR_4[VAR_7].id)))
            return VAR_0;

        VAR_6->block_width = VAR_4[VAR_7].block_width;
        VAR_6->block_height = VAR_4[VAR_7].block_height;
        VAR_6->block_byte_count = VAR_4[VAR_7].block_byte_count;
        FUNC_1(VAR_6, VAR_2);
        if (!VAR_4[VAR_7].verify)
            FUNC_1(VAR_6, VAR_3);
    }

    return VAR_1;
}
