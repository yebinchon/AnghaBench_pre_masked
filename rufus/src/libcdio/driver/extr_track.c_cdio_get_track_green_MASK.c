
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int track_t ;
struct TYPE_4__ {int (* get_track_green ) (int ,int ) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 int FUNC_0 (int ,int ) ;

bool
FUNC_1(const CdIo_t *VAR_0, track_t VAR_1)
{
  if (VAR_0 == ((void*)0)) {
    return 0;
  }

  if (VAR_0->op.get_track_green) {
    return VAR_0->op.get_track_green (VAR_0->env, VAR_1);
  } else {
    return 0;
  }
}
