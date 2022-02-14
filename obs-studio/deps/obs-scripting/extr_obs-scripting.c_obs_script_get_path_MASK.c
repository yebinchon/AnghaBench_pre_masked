
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* array; } ;
struct TYPE_6__ {TYPE_1__ path; } ;
typedef TYPE_2__ obs_script_t ;


 scalar_t__ FUNC_0 (TYPE_2__ const*) ;

const char *FUNC_1(const obs_script_t *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0) ? VAR_0->path.array : "";
 return VAR_1 ? VAR_1 : "";
}
