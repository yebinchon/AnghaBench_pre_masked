
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int track_t ;
typedef int track_format_t ;
struct TYPE_4__ {int (* get_track_format ) (int ,int ) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

track_format_t
FUNC_1(const CdIo_t *VAR_1, track_t VAR_2)
{
  if (!VAR_1) return VAR_0;

  if (VAR_1->op.get_track_format) {
    return VAR_1->op.get_track_format (VAR_1->env, VAR_2);
  } else {
    return VAR_0;
  }
}
