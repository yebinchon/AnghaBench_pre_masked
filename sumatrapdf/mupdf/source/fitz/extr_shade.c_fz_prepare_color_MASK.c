
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_vertex ;
struct TYPE_3__ {int process_arg; int (* prepare ) (int *,int ,int *,float*) ;} ;
typedef TYPE_1__ fz_mesh_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,int *,float*) ;

__attribute__((used)) static inline void
FUNC_1(fz_context *VAR_0, fz_mesh_processor *VAR_1, fz_vertex *VAR_2, float *VAR_3)
{
 if (VAR_1->prepare)
 {
  VAR_1->prepare(VAR_0, VAR_1->process_arg, VAR_2, VAR_3);
 }
}
