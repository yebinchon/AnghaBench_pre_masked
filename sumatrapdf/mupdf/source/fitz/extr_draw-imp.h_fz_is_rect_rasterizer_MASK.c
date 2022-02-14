
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* is_rect ) (int *,TYPE_2__*) ;} ;
struct TYPE_6__ {TYPE_1__ fns; } ;
typedef TYPE_2__ fz_rasterizer ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_1(fz_context *VAR_0, fz_rasterizer *VAR_1)
{
 return VAR_1->fns.is_rect(VAR_0, VAR_1);
}
