
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usage; struct wined3d_format* format; } ;
struct wined3d_texture {TYPE_1__ resource; int flags; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_format {int glType; struct wined3d_context* glFormat; int id; struct wined3d_texture* glInternal; struct wined3d_texture* rtInternal; struct wined3d_texture* glGammaInternal; scalar_t__ conv_byte_count; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_color_key_conversion {int dst_format; } ;
typedef struct wined3d_texture* GLenum ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,struct wined3d_texture*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct wined3d_color_key_conversion* FUNC_3 (struct wined3d_texture*,int ) ;
 struct wined3d_format* FUNC_4 (struct wined3d_gl_info const*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct wined3d_texture*,struct wined3d_texture*,struct wined3d_gl_info const*) ;
 int FUNC_7 (struct wined3d_texture*,struct wined3d_texture*,struct wined3d_format const*,struct wined3d_gl_info const*) ;
 int FUNC_8 (struct wined3d_texture*,struct wined3d_context*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct wined3d_texture*,struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_10(struct wined3d_texture *VAR_3, struct wined3d_context *VAR_4, BOOL VAR_5)
{
    const struct wined3d_format *VAR_6 = VAR_3->resource.format;
    const struct wined3d_gl_info *VAR_7 = VAR_4->gl_info;
    const struct wined3d_color_key_conversion *VAR_8;
    GLenum VAR_9;

    FUNC_1("texture %p, context %p, format %s.\n", VAR_3, VAR_4, FUNC_2(VAR_6->id));

    if (VAR_6->conv_byte_count)
    {
        VAR_3->flags |= VAR_2;
    }
    else if ((VAR_8 = FUNC_3(VAR_3, VAR_0)))
    {
        VAR_3->flags |= VAR_2;
        VAR_6 = FUNC_4(VAR_7, VAR_8->dst_format, VAR_3->resource.usage);
        FUNC_1("Using format %s for color key conversion.\n", FUNC_2(VAR_6->id));
    }

    FUNC_8(VAR_3, VAR_4, VAR_5);

    if (VAR_5)
        VAR_9 = VAR_6->glGammaInternal;
    else if (VAR_3->resource.usage & VAR_1
            && FUNC_5(&VAR_3->resource))
        VAR_9 = VAR_6->rtInternal;
    else
        VAR_9 = VAR_6->glInternal;

    if (!VAR_9)
        FUNC_0("No GL internal format for format %s.\n", FUNC_2(VAR_6->id));

    FUNC_1("internal %#x, format %#x, type %#x.\n", VAR_9, VAR_6->glFormat, VAR_6->glType);

    if (FUNC_9(VAR_3, VAR_7))
        FUNC_6(VAR_3, VAR_9, VAR_7);
    else
        FUNC_7(VAR_3, VAR_9, VAR_6, VAR_7);
}
