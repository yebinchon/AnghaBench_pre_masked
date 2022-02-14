
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_clock {int mutex; int cond; } ;


 int FUNC_0 (struct ff_clock*) ;
 struct ff_clock* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

struct ff_clock *FUNC_5(void)
{
 struct ff_clock *VAR_0 = FUNC_1(sizeof(struct ff_clock));

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 if (FUNC_4(&VAR_0->mutex, ((void*)0)) != 0)
  goto fail;

 if (FUNC_2(&VAR_0->cond, ((void*)0)) != 0)
  goto fail1;

 return VAR_0;

fail1:
 FUNC_3(&VAR_0->mutex);
fail:
 FUNC_0(VAR_0);

 return ((void*)0);
}
