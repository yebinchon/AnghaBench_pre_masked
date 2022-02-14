
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int output_flags; } ;
struct TYPE_6__ {TYPE_3__** array; } ;
struct TYPE_8__ {TYPE_2__ info; TYPE_1__ filters; } ;
typedef TYPE_3__ obs_source_t ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_0(obs_source_t *VAR_2, obs_source_t *VAR_3,
          size_t VAR_4)
{
 bool VAR_5 = (VAR_3->info.output_flags & VAR_1) != 0;
 bool VAR_6;
 obs_source_t *VAR_7;

 if (VAR_4 == 0)
  return VAR_0;

 VAR_7 = VAR_2->filters.array[VAR_4 - 1];
 VAR_6 = (VAR_7->info.output_flags & VAR_1);

 if (VAR_6 == VAR_5)
  return VAR_4 - 1;
 else
  return FUNC_0(VAR_2, VAR_3, VAR_4 - 1);
}
