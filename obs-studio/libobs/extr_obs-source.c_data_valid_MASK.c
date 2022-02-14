
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;
struct obs_source {TYPE_1__ context; } ;


 scalar_t__ FUNC_0 (struct obs_source const*,char const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct obs_source *VAR_0, const char *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) && VAR_0->context.data;
}
