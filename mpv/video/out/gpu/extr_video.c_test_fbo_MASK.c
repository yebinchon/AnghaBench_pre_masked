
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_tex {int dummy; } ;
struct ra_format {int name; } ;
struct gl_video {int ra; int log; } ;


 int FUNC_0 (struct gl_video*,char*,int ) ;
 int FUNC_1 (int ,struct ra_tex**) ;
 int FUNC_2 (int ,int ,struct ra_tex**,int,int,struct ra_format const*) ;

__attribute__((used)) static bool FUNC_3(struct gl_video *VAR_0, const struct ra_format *VAR_1)
{
    FUNC_0(VAR_0, "Testing FBO format %s\n", VAR_1->name);
    struct ra_tex *VAR_2 = ((void*)0);
    bool VAR_3 = FUNC_2(VAR_0->ra, VAR_0->log, &VAR_2, 16, 16, VAR_1);
    FUNC_1(VAR_0->ra, &VAR_2);
    return VAR_3;
}
