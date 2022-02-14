
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int l2factor; TYPE_1__* image; } ;
typedef TYPE_2__ fz_image_key ;
typedef int fz_context ;
struct TYPE_3__ {int h; int w; } ;


 int FUNC_0 (char*,int,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, char *VAR_1, int VAR_2, void *VAR_3)
{
 fz_image_key *VAR_4 = (fz_image_key *)VAR_3;
 FUNC_0(VAR_1, VAR_2, "(image %d x %d sf=%d)", VAR_4->image->w, VAR_4->image->h, VAR_4->l2factor);
}
