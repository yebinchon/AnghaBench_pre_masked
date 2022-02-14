
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame {int full_range; int format; } ;
typedef int obs_source_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,struct obs_source_frame*) ;

void FUNC_2(obs_source_t *VAR_0,
        const struct obs_source_frame *VAR_1)
{
 if (!VAR_1) {
  FUNC_1(VAR_0, ((void*)0));
  return;
 }

 struct obs_source_frame VAR_2 = *VAR_1;
 VAR_2.full_range =
  FUNC_0(VAR_1->format) ? VAR_2.full_range : 1;

 FUNC_1(VAR_0, &VAR_2);
}
