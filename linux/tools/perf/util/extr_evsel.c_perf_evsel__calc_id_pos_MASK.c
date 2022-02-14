
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sample_type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; int is_pos; int id_pos; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct evsel *VAR_0)
{
 VAR_0->id_pos = FUNC_0(VAR_0->core.attr.sample_type);
 VAR_0->is_pos = FUNC_1(VAR_0->core.attr.sample_type);
}
