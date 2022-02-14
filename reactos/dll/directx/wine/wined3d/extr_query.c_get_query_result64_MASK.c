
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
typedef int UINT64 ;
typedef int GLuint64 ;
typedef int GLuint ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static UINT64 FUNC_3(GLuint VAR_2, const struct wined3d_gl_info *VAR_3)
{
    if (VAR_3->supported[VAR_0])
    {
        GLuint64 VAR_4;
        FUNC_0(FUNC_1(VAR_2, VAR_1, &VAR_4));
        return VAR_4;
    }
    else
    {
        GLuint VAR_5;
        FUNC_0(FUNC_2(VAR_2, VAR_1, &VAR_5));
        return VAR_5;
    }
}
