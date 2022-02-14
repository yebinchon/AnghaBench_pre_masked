
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct calldata {int dummy; } ;
typedef int stack ;
struct TYPE_6__ {int signals; } ;
struct TYPE_7__ {int sync_offset; TYPE_1__ context; } ;
typedef TYPE_2__ obs_source_t ;
typedef int int64_t ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*) ;
 int FUNC_2 (struct calldata*,char*,int ) ;
 int FUNC_3 (struct calldata*,char*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int ,char*,struct calldata*) ;

void FUNC_6(obs_source_t *VAR_0, int64_t VAR_1)
{
 if (FUNC_4(VAR_0, "obs_source_set_sync_offset")) {
  struct calldata VAR_2;
  uint8_t VAR_3[128];

  FUNC_0(&VAR_2, VAR_3, sizeof(VAR_3));
  FUNC_3(&VAR_2, "source", VAR_0);
  FUNC_2(&VAR_2, "offset", VAR_1);

  FUNC_5(VAR_0->context.signals, "audio_sync",
          &VAR_2);

  VAR_0->sync_offset = FUNC_1(&VAR_2, "offset");
 }
}
