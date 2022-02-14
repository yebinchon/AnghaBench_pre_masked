
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_2__ {int (* memcpy ) (void*,void*,size_t) ;} ;
struct function {TYPE_1__ fn; } ;
typedef int (* memcpy_t ) (void*,void*,size_t) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct timeval*,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct timeval*,struct timeval*,struct timeval*) ;
 double FUNC_3 (struct timeval*) ;

__attribute__((used)) static double FUNC_4(const struct function *VAR_1, size_t VAR_2, void *VAR_3, void *VAR_4)
{
 struct timeval VAR_5, VAR_6, VAR_7;
 memcpy_t VAR_8 = VAR_1->fn.memcpy;
 int VAR_9;





 VAR_8(VAR_4, VAR_3, VAR_2);

 FUNC_0(FUNC_1(&VAR_5, ((void*)0)));
 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9)
  VAR_8(VAR_4, VAR_3, VAR_2);
 FUNC_0(FUNC_1(&VAR_6, ((void*)0)));

 FUNC_2(&VAR_6, &VAR_5, &VAR_7);

 return (double)(((double)VAR_2 * VAR_0) / FUNC_3(&VAR_7));
}
