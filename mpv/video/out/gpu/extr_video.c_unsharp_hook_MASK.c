
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image {int dummy; } ;
struct TYPE_2__ {int unsharp; } ;
struct gl_video {TYPE_1__ opts; int sc; } ;
struct gl_transform {int dummy; } ;


 int FUNC_0 (struct gl_video*,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct gl_video *VAR_0, struct image VAR_1,
                         struct gl_transform *VAR_2, void *VAR_3)
{
    FUNC_0(VAR_0, "unsharp masking");
    FUNC_1(VAR_0->sc, VAR_0->opts.unsharp);
}
