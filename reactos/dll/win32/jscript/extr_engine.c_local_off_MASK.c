
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arguments_off; int variables_off; } ;
typedef TYPE_1__ call_frame_t ;



__attribute__((used)) static inline unsigned FUNC_0(call_frame_t *VAR_0, int VAR_1)
{
    return VAR_1 < 0
        ? VAR_0->arguments_off - VAR_1-1
        : VAR_0->variables_off + VAR_1;
}
