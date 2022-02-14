
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output_flags; } ;
struct obs_source {TYPE_1__ info; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct obs_source *VAR_1)
{
 return VAR_1->info.output_flags & VAR_0;
}
