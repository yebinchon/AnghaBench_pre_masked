
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sample_type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct evsel *VAR_1)
{
 return (VAR_1->core.attr.sample_type & VAR_0) != 0;
}
