
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,char const*) ;

__attribute__((used)) static inline bool FUNC_1(const obs_source_t *VAR_1,
        const char *VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_2))
  return 0;
 else if (VAR_1->info.type != VAR_0)
  return 0;

 return 1;
}
