
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {int target; int level_count; int layer_count; } ;
struct wined3d_gl_info {int dummy; } ;
typedef int GLsizei ;
typedef int GLenum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,int ,int ,int ) ;
 int FUNC_3 (int,unsigned int,int ,int ,int ,int ) ;
 int FUNC_4 (int,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int,unsigned int,int ,int ,int ,int ,int ) ;
 unsigned int FUNC_6 (struct wined3d_texture*) ;
 int FUNC_7 (struct wined3d_texture*,int ) ;
 int FUNC_8 (struct wined3d_texture*,int ) ;

__attribute__((used)) static void FUNC_9(struct wined3d_texture *VAR_1,
        GLenum VAR_2, const struct wined3d_gl_info *VAR_3)
{
    unsigned int VAR_4 = FUNC_6(VAR_1);
    GLsizei VAR_5 = FUNC_7(VAR_1, 0);
    GLsizei VAR_6 = FUNC_8(VAR_1, 0);

    switch (VAR_1->target)
    {
        case 130:
            FUNC_0(FUNC_4(VAR_1->target, VAR_1->level_count,
                    VAR_2, VAR_6, VAR_5, VAR_1->layer_count));
            break;
        case 129:
            FUNC_0(FUNC_3(VAR_1->target, VAR_4,
                    VAR_2, VAR_6, VAR_5, VAR_0));
            break;
        case 128:
            FUNC_0(FUNC_5(VAR_1->target, VAR_4,
                    VAR_2, VAR_6, VAR_5, VAR_1->layer_count, VAR_0));
            break;
        default:
            FUNC_0(FUNC_2(VAR_1->target, VAR_1->level_count,
                    VAR_2, VAR_6, VAR_5));
            break;
    }

    FUNC_1("allocate immutable storage");
}
