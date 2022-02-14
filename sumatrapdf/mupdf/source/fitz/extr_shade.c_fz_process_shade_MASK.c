
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int fz_shade_process_fn ;
typedef int fz_shade_prepare_fn ;
struct TYPE_18__ {scalar_t__ use_function; scalar_t__ type; int colorspace; } ;
typedef TYPE_1__ fz_shade ;
typedef int fz_rect ;
struct TYPE_19__ {int ncomp; void* process_arg; int * process; int * prepare; TYPE_1__* shade; } ;
typedef TYPE_2__ fz_mesh_processor ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,TYPE_2__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_8 (int *,int ,char*,scalar_t__) ;

void
FUNC_9(fz_context *VAR_8, fz_shade *VAR_9, fz_matrix VAR_10, fz_rect VAR_11,
  fz_shade_prepare_fn *VAR_12, fz_shade_process_fn *VAR_13, void *VAR_14)
{
 fz_mesh_processor VAR_15;

 VAR_15.shade = VAR_9;
 VAR_15.prepare = VAR_12;
 VAR_15.process = VAR_13;
 VAR_15.process_arg = VAR_14;
 VAR_15.ncomp = (VAR_9->use_function > 0 ? 1 : FUNC_0(VAR_8, VAR_9->colorspace));

 if (VAR_9->type == VAR_1)
  FUNC_1(VAR_8, VAR_9, VAR_10, &VAR_15);
 else if (VAR_9->type == VAR_2)
  FUNC_2(VAR_8, VAR_9, VAR_10, &VAR_15, VAR_11);
 else if (VAR_9->type == VAR_7)
  FUNC_3(VAR_8, VAR_9, VAR_10, &VAR_15);
 else if (VAR_9->type == VAR_3)
  FUNC_4(VAR_8, VAR_9, VAR_10, &VAR_15);
 else if (VAR_9->type == VAR_4)
  FUNC_5(VAR_8, VAR_9, VAR_10, &VAR_15);
 else if (VAR_9->type == VAR_5)
  FUNC_6(VAR_8, VAR_9, VAR_10, &VAR_15);
 else if (VAR_9->type == VAR_6)
  FUNC_7(VAR_8, VAR_9, VAR_10, &VAR_15);
 else
  FUNC_8(VAR_8, VAR_0, "Unexpected mesh type %d\n", VAR_9->type);
}
