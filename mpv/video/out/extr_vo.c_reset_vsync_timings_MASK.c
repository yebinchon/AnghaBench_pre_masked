
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int expecting_vsync; scalar_t__ num_successive_vsyncs; scalar_t__ base_vsync; scalar_t__ drop_point; } ;
struct vo {struct vo_internal* in; } ;



__attribute__((used)) static void FUNC_0(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;
    VAR_1->drop_point = 0;
    VAR_1->base_vsync = 0;
    VAR_1->expecting_vsync = 0;
    VAR_1->num_successive_vsyncs = 0;
}
