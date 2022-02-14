
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float x; void* m; } ;
struct quat {int m; } ;
typedef void* __m128 ;


 void* FUNC_0 (int ,void*) ;
 int FUNC_1 (void*,void*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,void*,int) ;

__attribute__((used)) static inline float FUNC_4(const struct quat *VAR_0, const struct quat *VAR_1)
{
 struct vec3 VAR_2;
 __m128 VAR_3 = FUNC_2(VAR_0->m, VAR_1->m);
 VAR_2.m = FUNC_0(FUNC_1(VAR_3, VAR_3), VAR_3);
 VAR_2.m = FUNC_0(FUNC_3(VAR_2.m, VAR_2.m, 0x55), VAR_2.m);
 return VAR_2.x;
}
