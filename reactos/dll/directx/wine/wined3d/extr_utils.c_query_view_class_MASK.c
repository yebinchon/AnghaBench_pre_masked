
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_format {scalar_t__ gl_view_class; int id; int rtInternal; int glGammaInternal; int glInternal; } ;
typedef scalar_t__ GLenum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_format *VAR_1)
{
    GLenum VAR_2, VAR_3, VAR_4;

    VAR_2 = FUNC_2(VAR_1->glInternal);
    VAR_3 = FUNC_2(VAR_1->glGammaInternal);
    VAR_4 = FUNC_2(VAR_1->rtInternal);

    if (VAR_2 == VAR_3 || VAR_3 == VAR_4)
    {
        VAR_1->gl_view_class = VAR_2;
        FUNC_0("Format %s is member of GL view class %#x.\n",
                FUNC_1(VAR_1->id), VAR_1->gl_view_class);
    }
    else
    {
        VAR_1->gl_view_class = VAR_0;
    }
}
