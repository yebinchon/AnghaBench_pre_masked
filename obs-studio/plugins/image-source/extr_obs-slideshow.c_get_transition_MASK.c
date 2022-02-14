
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slideshow {int mutex; int * transition; } ;
typedef int obs_source_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static obs_source_t *FUNC_3(struct slideshow *VAR_0)
{
 obs_source_t *VAR_1;

 FUNC_1(&VAR_0->mutex);
 VAR_1 = VAR_0->transition;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_0->mutex);

 return VAR_1;
}
