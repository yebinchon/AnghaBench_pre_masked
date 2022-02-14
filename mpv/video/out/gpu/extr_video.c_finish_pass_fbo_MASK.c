
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_fbo {int dummy; } ;
struct mp_rect {int dummy; } ;
struct gl_video {int dummy; } ;


 int FUNC_0 (struct gl_video*) ;
 int FUNC_1 (struct gl_video*,char*) ;
 int FUNC_2 (struct gl_video*) ;
 int FUNC_3 (struct gl_video*,int ) ;
 int FUNC_4 (struct gl_video*,struct ra_fbo,int,struct mp_rect const*) ;

__attribute__((used)) static void FUNC_5(struct gl_video *VAR_0, struct ra_fbo VAR_1,
                            bool VAR_2, const struct mp_rect *VAR_3)
{
    FUNC_2(VAR_0);
    FUNC_3(VAR_0, FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3));
    FUNC_1(VAR_0, "after rendering");
    FUNC_0(VAR_0);
}
