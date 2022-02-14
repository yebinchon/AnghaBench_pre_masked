
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ type; int output_flags; scalar_t__ video_render; } ;
struct TYPE_16__ {scalar_t__ num; } ;
struct TYPE_15__ {int data; } ;
struct TYPE_18__ {scalar_t__ filter_target; TYPE_3__ info; int rendering_filter; TYPE_2__ filters; scalar_t__ filter_parent; int enabled; TYPE_1__ context; } ;
typedef TYPE_4__ obs_source_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_13(obs_source_t *VAR_5)
{
 if (VAR_5->info.type != VAR_2 &&
     (VAR_5->info.output_flags & VAR_4) == 0) {
  if (VAR_5->filter_parent)
   FUNC_10(VAR_5);
  return;
 }

 if (VAR_5->info.type == VAR_3 &&
     (VAR_5->info.output_flags & VAR_1) != 0 &&
     !VAR_5->rendering_filter) {
  if (FUNC_4(VAR_5))
   FUNC_3(VAR_5);
  FUNC_11(VAR_5);
 }

 if (!VAR_5->context.data || !VAR_5->enabled) {
  if (VAR_5->filter_parent)
   FUNC_10(VAR_5);
  return;
 }

 FUNC_0(VAR_0,
         FUNC_5(VAR_5->info.type),
         FUNC_6(VAR_5));

 if (VAR_5->filters.num && !VAR_5->rendering_filter)
  FUNC_9(VAR_5);

 else if (VAR_5->info.video_render)
  FUNC_7(VAR_5);

 else if (VAR_5->filter_target)
  FUNC_12(VAR_5->filter_target);

 else if (FUNC_4(VAR_5))
  FUNC_2(VAR_5);

 else
  FUNC_8(VAR_5);

 FUNC_1();
}
