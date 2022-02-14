
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

uint32_t FUNC_3(obs_source_t *VAR_1)
{
 if (!FUNC_0(VAR_1, "obs_source_get_width"))
  return 0;

 return (VAR_1->info.type != VAR_0)
         ? FUNC_2(VAR_1)
         : FUNC_1(VAR_1);
}
