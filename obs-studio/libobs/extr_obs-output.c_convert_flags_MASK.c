
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int flags; } ;
struct obs_output {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(const struct obs_output *VAR_4,
     uint32_t VAR_5, bool *VAR_6, bool *VAR_7,
     bool *VAR_8, bool *VAR_9)
{
 *VAR_6 = (VAR_4->info.flags & VAR_1) != 0;
 if (!VAR_5)
  VAR_5 = VAR_4->info.flags;
 else
  VAR_5 &= VAR_4->info.flags;

 *VAR_7 = (VAR_5 & VAR_3) != 0;
 *VAR_8 = (VAR_5 & VAR_0) != 0;
 *VAR_9 = (VAR_5 & VAR_2) != 0;
}
