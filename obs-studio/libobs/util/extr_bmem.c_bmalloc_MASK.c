
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* malloc ) (int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 void* FUNC_3 (size_t) ;
 void* FUNC_4 (int) ;

void *FUNC_5(size_t VAR_2)
{
 void *VAR_3 = VAR_0.malloc(VAR_2);
 if (!VAR_3 && !VAR_2)
  VAR_3 = VAR_0.malloc(1);
 if (!VAR_3) {
  FUNC_2();
  FUNC_0("Out of memory while trying to allocate %lu bytes",
         (unsigned long)VAR_2);
 }

 FUNC_1(&VAR_1);
 return VAR_3;
}
