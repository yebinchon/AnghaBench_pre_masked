
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocations; } ;
typedef TYPE_1__ ser_context ;


 int FUNC_0 (void*,char,size_t) ;
 void* FUNC_1 (size_t,size_t,size_t) ;
 int FUNC_2 (int *,void**) ;

__attribute__((used)) static inline void *FUNC_3(size_t VAR_0, size_t VAR_1, size_t VAR_2, ser_context *VAR_3)
{
 void *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_4, '\0', VAR_0 * VAR_1 + VAR_2);
 FUNC_2(&VAR_3->allocations, &VAR_4);
 return VAR_4;
}
