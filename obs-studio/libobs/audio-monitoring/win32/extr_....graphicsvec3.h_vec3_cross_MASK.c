
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int m; } ;
typedef int __m128 ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct vec3 *VAR_0, const struct vec3 *VAR_1,
         const struct vec3 *VAR_2)
{
 __m128 VAR_3 = FUNC_2(VAR_1->m, VAR_1->m, FUNC_0(3, 0, 2, 1));
 __m128 VAR_4 = FUNC_2(VAR_2->m, VAR_2->m, FUNC_0(3, 1, 0, 2));
 __m128 VAR_5 = FUNC_2(VAR_1->m, VAR_1->m, FUNC_0(3, 1, 0, 2));
 __m128 VAR_6 = FUNC_2(VAR_2->m, VAR_2->m, FUNC_0(3, 0, 2, 1));
 VAR_0->m = FUNC_3(FUNC_1(VAR_3, VAR_4), FUNC_1(VAR_5, VAR_6));
}
