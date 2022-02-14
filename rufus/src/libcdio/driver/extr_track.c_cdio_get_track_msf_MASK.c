
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int track_t ;
typedef int msf_t ;
typedef scalar_t__ lba_t ;
struct TYPE_4__ {int (* get_track_msf ) (int ,int ,int *) ;scalar_t__ (* get_track_lba ) (int ,int ) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

bool
FUNC_3(const CdIo_t *VAR_1, track_t VAR_2, msf_t *VAR_3)
{
  if (!VAR_1) return 0;

  if (VAR_1->op.get_track_msf) {
    return VAR_1->op.get_track_msf (VAR_1->env, VAR_2, VAR_3);
  } else if (VAR_1->op.get_track_lba) {
    lba_t VAR_4 = VAR_1->op.get_track_lba (VAR_1->env, VAR_2);
    if (VAR_4 == VAR_0) return 0;
    FUNC_0(VAR_4, VAR_3);
    return 1;
  } else {
    return 0;
  }
}
