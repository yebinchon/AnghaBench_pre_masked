
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ config; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;



__attribute__((used)) static inline bool FUNC_0(struct evsel *VAR_0,
          struct evsel *VAR_1)
{
 return (VAR_0->core.attr.type == VAR_1->core.attr.type) &&
        (VAR_0->core.attr.config == VAR_1->core.attr.config);
}
