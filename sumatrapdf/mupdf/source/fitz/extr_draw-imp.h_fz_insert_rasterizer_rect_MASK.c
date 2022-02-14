
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* rect ) (int *,TYPE_2__*,float,float,float,float) ;} ;
struct TYPE_6__ {TYPE_1__ fns; } ;
typedef TYPE_2__ fz_rasterizer ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,float,float,float,float) ;

__attribute__((used)) static inline void FUNC_1(fz_context *VAR_0, fz_rasterizer *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5)
{
 VAR_1->fns.rect(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
