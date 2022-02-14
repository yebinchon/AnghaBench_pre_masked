
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_vertex ;
struct TYPE_3__ {int process_arg; int (* process ) (int *,int ,int *,int *,int *) ;} ;
typedef TYPE_1__ fz_mesh_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,int *,int *,int *) ;
 int FUNC_1 (int *,int ,int *,int *,int *) ;

__attribute__((used)) static inline void
FUNC_2(fz_context *VAR_0, fz_mesh_processor *VAR_1, fz_vertex *VAR_2, fz_vertex *VAR_3, fz_vertex *VAR_4, fz_vertex *VAR_5)
{
 if (VAR_1->process)
 {
  VAR_1->process(VAR_0, VAR_1->process_arg, VAR_2, VAR_3, VAR_5);
  VAR_1->process(VAR_0, VAR_1->process_arg, VAR_5, VAR_4, VAR_3);
 }
}
