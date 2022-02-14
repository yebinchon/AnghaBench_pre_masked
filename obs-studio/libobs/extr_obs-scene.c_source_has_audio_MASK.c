
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int output_flags; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(obs_source_t *VAR_2)
{
 return (VAR_2->info.output_flags &
  (VAR_0 | VAR_1)) != 0;
}
