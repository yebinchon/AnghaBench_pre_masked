
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {int (* get_total_bytes ) (int ) ;} ;
struct TYPE_10__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_output_t ;


 scalar_t__ FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_3__ const*,char*) ;
 int FUNC_3 (int ) ;

uint64_t FUNC_4(const obs_output_t *VAR_0)
{
 if (!FUNC_2(VAR_0, "obs_output_get_total_bytes"))
  return 0;
 if (!VAR_0->info.get_total_bytes)
  return 0;

 if (FUNC_0(VAR_0) && !FUNC_1(VAR_0))
  return 0;

 return VAR_0->info.get_total_bytes(VAR_0->context.data);
}
