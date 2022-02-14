
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ track_t ;
struct TYPE_5__ {int (* get_track_channels ) (int ,scalar_t__) ;} ;
struct TYPE_6__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

int
FUNC_4(const CdIo_t *VAR_1, track_t VAR_2)
{
  track_t VAR_3;
  if (((void*)0) == VAR_1) {
    FUNC_1("Null CdIo object passed\n");
    return -1;
  }
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_2 > VAR_3) {
     FUNC_2(VAR_0, "Number of tracks exceeds maximum (%d vs. %d)\n",
              VAR_2, VAR_3);
     return -1;
  }
  if (VAR_1->op.get_track_channels) {
    return VAR_1->op.get_track_channels (VAR_1->env, VAR_2);
  } else {
    return -2;
  }
}
