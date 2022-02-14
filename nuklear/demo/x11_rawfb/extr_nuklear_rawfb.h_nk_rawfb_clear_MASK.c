
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h; int w; } ;
struct rawfb_context {TYPE_1__ fb; } ;
struct nk_color {int dummy; } ;


 int FUNC_0 (struct rawfb_context const*,int ,int ,int ,int ,int ,struct nk_color const) ;

__attribute__((used)) static void
FUNC_1(const struct rawfb_context *VAR_0, const struct nk_color VAR_1)
{
    FUNC_0(VAR_0, 0, 0, VAR_0->fb.w, VAR_0->fb.h, 0, VAR_1);
}
