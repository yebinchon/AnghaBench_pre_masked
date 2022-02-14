
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_ctx {int num_sources; int * sources; } ;



__attribute__((used)) static bool FUNC_0(struct tl_ctx *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_sources; VAR_1++) {
        if (!VAR_0->sources[VAR_1])
            return 1;
    }
    return 0;
}
