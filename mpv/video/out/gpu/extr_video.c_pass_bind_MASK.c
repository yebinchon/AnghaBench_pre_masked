
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image {int dummy; } ;
struct gl_video {int num_pass_imgs; int pass_imgs; } ;


 int FUNC_0 (struct gl_video*,int ,int,struct image) ;

__attribute__((used)) static int FUNC_1(struct gl_video *VAR_0, struct image VAR_1)
{
    int VAR_2 = VAR_0->num_pass_imgs;
    FUNC_0(VAR_0, VAR_0->pass_imgs, VAR_0->num_pass_imgs, VAR_1);
    return VAR_2;
}
