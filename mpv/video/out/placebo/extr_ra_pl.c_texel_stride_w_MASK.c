
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* format; } ;
struct pl_tex {TYPE_2__ params; } ;
struct TYPE_3__ {size_t texel_size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(size_t VAR_0, const struct pl_tex *VAR_1)
{
    size_t VAR_2 = VAR_1->params.format->texel_size;
    int VAR_3 = VAR_0 / VAR_2;
    FUNC_0(VAR_3 * VAR_2 == VAR_0);
    return VAR_3;
}
