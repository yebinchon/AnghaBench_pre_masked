
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int mutex; int ts_offset; } ;
struct TYPE_6__ {TYPE_1__ pause; } ;
typedef TYPE_2__ obs_output_t ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

uint64_t FUNC_3(obs_output_t *VAR_0)
{
 uint64_t VAR_1;

 if (!FUNC_0(VAR_0, "obs_output_get_pause_offset"))
  return 0;

 FUNC_1(&VAR_0->pause.mutex);
 VAR_1 = VAR_0->pause.ts_offset;
 FUNC_2(&VAR_0->pause.mutex);

 return VAR_1;
}
