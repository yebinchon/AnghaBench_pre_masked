
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int output_flags; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(obs_source_t *VAR_3, obs_source_t *VAR_4)
{
 uint32_t VAR_5 = VAR_3->info.output_flags;
 uint32_t VAR_6 = VAR_4->info.output_flags;

 if ((VAR_6 & VAR_1) != 0 &&
     (VAR_6 & VAR_2) == 0)
  VAR_6 &= ~VAR_0;

 return (VAR_5 & VAR_6) == VAR_6;
}
