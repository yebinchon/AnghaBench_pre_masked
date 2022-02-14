
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* m; int w; int z; int y; int x; } ;
struct TYPE_7__ {void* m; int w; int z; int y; int x; } ;
struct TYPE_6__ {void* m; int w; int z; int y; int x; } ;
struct TYPE_5__ {void* m; int w; int z; int y; int x; } ;
typedef struct matrix4 {TYPE_4__ t; TYPE_3__ z; TYPE_2__ y; TYPE_1__ x; } const matrix4 ;
typedef void* __m128 ;


 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*,void*) ;

void FUNC_2(struct matrix4 *VAR_0, const struct matrix4 *VAR_1)
{
 if (VAR_0 == VAR_1) {
  struct matrix4 VAR_2 = *VAR_1;
  FUNC_2(VAR_0, &VAR_2);
  return;
 }
 __m128 VAR_3 = FUNC_1(VAR_1->x.m, VAR_1->z.m);
 __m128 VAR_4 = FUNC_1(VAR_1->y.m, VAR_1->t.m);
 __m128 VAR_5 = FUNC_0(VAR_1->x.m, VAR_1->z.m);
 __m128 VAR_6 = FUNC_0(VAR_1->y.m, VAR_1->t.m);

 VAR_0->x.m = FUNC_1(VAR_3, VAR_4);
 VAR_0->y.m = FUNC_0(VAR_3, VAR_4);
 VAR_0->z.m = FUNC_1(VAR_5, VAR_6);
 VAR_0->t.m = FUNC_0(VAR_5, VAR_6);

}
