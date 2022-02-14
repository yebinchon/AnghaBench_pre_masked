
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; } ;
struct TYPE_4__ {void* h; void* w; void* y; void* x; } ;
struct rawfb_context {TYPE_1__ fb; TYPE_2__ scissors; } ;


 int FUNC_0 (float const,int ) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct rawfb_context *VAR_0,
                 const float VAR_1,
                 const float VAR_2,
                 const float VAR_3,
                 const float VAR_4)
{
    VAR_0->scissors.x = FUNC_1(FUNC_0(VAR_1, 0), VAR_0->fb.w);
    VAR_0->scissors.y = FUNC_1(FUNC_0(VAR_2, 0), VAR_0->fb.h);
    VAR_0->scissors.w = FUNC_1(FUNC_0(VAR_3 + VAR_1, 0), VAR_0->fb.w);
    VAR_0->scissors.h = FUNC_1(FUNC_0(VAR_4 + VAR_2, 0), VAR_0->fb.h);
}
