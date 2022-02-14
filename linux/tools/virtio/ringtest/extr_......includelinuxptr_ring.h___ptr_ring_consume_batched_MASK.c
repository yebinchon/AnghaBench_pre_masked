
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int dummy; } ;


 void* FUNC_0 (struct ptr_ring*) ;

__attribute__((used)) static inline int FUNC_1(struct ptr_ring *VAR_0,
          void **VAR_1, int VAR_2)
{
 void *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_0(VAR_0);
  if (!VAR_3)
   break;
  VAR_1[VAR_4] = VAR_3;
 }

 return VAR_4;
}
