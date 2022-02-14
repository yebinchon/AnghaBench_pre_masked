
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int track_t ;
typedef int msf_t ;
typedef int lba_t ;
struct TYPE_5__ {scalar_t__ get_track_msf; int (* get_track_lba ) (int ,int ) ;} ;
struct TYPE_6__ {TYPE_1__ op; int env; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

lba_t
FUNC_4(const CdIo_t *VAR_1, track_t VAR_2)
{
  if (((void*)0) == VAR_1) {
    FUNC_1("Null CdIo object passed\n");
    return VAR_0;
  }

  if (VAR_1->op.get_track_lba) {
    return VAR_1->op.get_track_lba (VAR_1->env, VAR_2);
  } else {
    msf_t VAR_3;
    if (VAR_1->op.get_track_msf)
      if (FUNC_0(VAR_1, VAR_2, &VAR_3))
        return FUNC_2(&VAR_3);
    return VAR_0;
  }
}
