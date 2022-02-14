
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gl_video {TYPE_2__* hwdec_overlay; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* overlay_frame ) (TYPE_2__*,int *,int *,int *,int) ;} ;


 int FUNC_0 (TYPE_2__*,int *,int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct gl_video *VAR_0)
{
    if (VAR_0->hwdec_overlay)
        VAR_0->hwdec_overlay->driver->overlay_frame(VAR_0->hwdec_overlay, ((void*)0), ((void*)0), ((void*)0), 1);
}
