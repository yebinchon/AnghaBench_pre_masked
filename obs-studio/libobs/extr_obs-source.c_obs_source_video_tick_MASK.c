
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {scalar_t__ type; int output_flags; int (* video_tick ) (scalar_t__,float) ;} ;
struct TYPE_14__ {size_t num; TYPE_4__** array; } ;
struct TYPE_17__ {int showing; int active; int async_rendered; int deinterlace_rendered; TYPE_3__ context; TYPE_2__ info; TYPE_1__ filters; int activate_refs; int show_refs; scalar_t__ filter_texrender; scalar_t__ defer_update; } ;
typedef TYPE_4__ obs_source_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (scalar_t__,float) ;

void FUNC_10(obs_source_t *VAR_2, float VAR_3)
{
 bool VAR_4, VAR_5;

 if (!FUNC_6(VAR_2, "obs_source_video_tick"))
  return;

 if (VAR_2->info.type == VAR_1)
  FUNC_7(VAR_2);

 if ((VAR_2->info.output_flags & VAR_0) != 0)
  FUNC_1(VAR_2);

 if (VAR_2->defer_update)
  FUNC_5(VAR_2);


 if (VAR_2->filter_texrender)
  FUNC_3(VAR_2->filter_texrender);


 VAR_4 = !!VAR_2->show_refs;
 if (VAR_4 != VAR_2->showing) {
  if (VAR_4) {
   FUNC_8(VAR_2);
  } else {
   FUNC_4(VAR_2);
  }

  if (VAR_2->filters.num) {
   for (size_t VAR_6 = VAR_2->filters.num; VAR_6 > 0; VAR_6--) {
    obs_source_t *VAR_7 =
     VAR_2->filters.array[VAR_6 - 1];
    if (VAR_4) {
     FUNC_8(VAR_7);
    } else {
     FUNC_4(VAR_7);
    }
   }
  }

  VAR_2->showing = VAR_4;
 }


 VAR_5 = !!VAR_2->activate_refs;
 if (VAR_5 != VAR_2->active) {
  if (VAR_5) {
   FUNC_0(VAR_2);
  } else {
   FUNC_2(VAR_2);
  }

  if (VAR_2->filters.num) {
   for (size_t VAR_8 = VAR_2->filters.num; VAR_8 > 0; VAR_8--) {
    obs_source_t *VAR_9 =
     VAR_2->filters.array[VAR_8 - 1];
    if (VAR_5) {
     FUNC_0(VAR_9);
    } else {
     FUNC_2(VAR_9);
    }
   }
  }

  VAR_2->active = VAR_5;
 }

 if (VAR_2->context.data && VAR_2->info.video_tick)
  VAR_2->info.video_tick(VAR_2->context.data, VAR_3);

 VAR_2->async_rendered = 0;
 VAR_2->deinterlace_rendered = 0;
}
