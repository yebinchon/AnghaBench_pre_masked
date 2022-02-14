
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
typedef scalar_t__ GLuint ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(const struct wined3d_gl_info *VAR_1, GLuint VAR_2, GLuint VAR_3, GLuint VAR_4, GLuint VAR_5,
        GLuint VAR_6, GLuint VAR_7, GLuint VAR_8)
{
    if(VAR_4 == VAR_0) {
        FUNC_1("glAlphaFragmentOp1ATI(%s, %s, %s, %s, %s, %s)\n", FUNC_5(VAR_2), FUNC_6(VAR_3), FUNC_3(VAR_5),
              FUNC_6(VAR_6), FUNC_7(VAR_7), FUNC_2(VAR_8));
        FUNC_0(FUNC_8(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8));
    } else {
        FUNC_1("glColorFragmentOp1ATI(%s, %s, %s, %s, %s, %s, %s)\n", FUNC_5(VAR_2), FUNC_6(VAR_3),
              FUNC_4(VAR_4), FUNC_3(VAR_5),
              FUNC_6(VAR_6), FUNC_7(VAR_7), FUNC_2(VAR_8));
        FUNC_0(FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
    }
}
