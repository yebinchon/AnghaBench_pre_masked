
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int p; } ;
typedef TYPE_1__ fz_vertex ;
struct TYPE_7__ {int process_arg; int (* prepare ) (int *,int ,TYPE_1__*,float*) ;} ;
typedef TYPE_2__ fz_mesh_processor ;
typedef int fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (float,float,int ) ;
 int FUNC_1 (int *,int ,TYPE_1__*,float*) ;

__attribute__((used)) static inline void
FUNC_2(fz_context *VAR_0, fz_mesh_processor *VAR_1, fz_vertex *VAR_2, fz_matrix VAR_3, float VAR_4, float VAR_5, float *VAR_6)
{
 VAR_2->p = FUNC_0(VAR_4, VAR_5, VAR_3);
 if (VAR_1->prepare)
 {
  VAR_1->prepare(VAR_0, VAR_1->process_arg, VAR_2, VAR_6);
 }
}
