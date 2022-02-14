
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slideshow {int mutex; scalar_t__ transition; int source; } ;
typedef int (* obs_source_enum_proc_t ) (int ,scalar_t__,void*) ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, obs_source_enum_proc_t VAR_1, void *VAR_2)
{
 struct slideshow *VAR_3 = VAR_0;

 FUNC_0(&VAR_3->mutex);
 if (VAR_3->transition)
  VAR_1(VAR_3->source, VAR_3->transition, VAR_2);
 FUNC_1(&VAR_3->mutex);
}
