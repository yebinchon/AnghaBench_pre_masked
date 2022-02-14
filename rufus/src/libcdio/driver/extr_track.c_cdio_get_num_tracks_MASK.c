
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int track_t ;
struct TYPE_4__ {int (* get_num_tracks ) (int ) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

track_t
FUNC_1 (const CdIo_t *VAR_1)
{
  if (VAR_1 == ((void*)0)) return VAR_0;

  if (VAR_1->op.get_num_tracks) {
    return VAR_1->op.get_num_tracks (VAR_1->env);
  } else {
    return VAR_0;
  }
}
