
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descendant_info {int exists; int * target; } ;
typedef int obs_source_t ;



__attribute__((used)) static void FUNC_0(obs_source_t *VAR_0, obs_source_t *VAR_1,
        void *VAR_2)
{
 struct descendant_info *VAR_3 = VAR_2;
 if (VAR_1 == VAR_3->target || VAR_0 == VAR_3->target)
  VAR_3->exists = 1;
}
