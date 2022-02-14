
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int track_t ;
typedef int track_flag_t ;
struct TYPE_4__ {int (* get_track_preemphasis ) (int ,int ) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

track_flag_t
FUNC_1(const CdIo *VAR_1, track_t VAR_2)
{
  if (VAR_1->op.get_track_preemphasis) {
    return VAR_1->op.get_track_preemphasis (VAR_1->env, VAR_2);
  } else {
    return VAR_0;
  }
}
