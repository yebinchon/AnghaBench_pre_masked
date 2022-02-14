
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* m; } ;
struct TYPE_5__ {void* m; } ;
struct TYPE_4__ {void* m; } ;
struct matrix3 {TYPE_3__ z; TYPE_2__ y; TYPE_1__ x; int t; } ;
typedef int __m128 ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (void*,void*) ;
 void* FUNC_3 (int ,void*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,struct matrix3 const*) ;

void FUNC_6(struct matrix3 *VAR_0, const struct matrix3 *VAR_1)
{
 __m128 VAR_2, VAR_3;
 FUNC_5(&VAR_0->t, &VAR_1->t, VAR_1);
 FUNC_4(&VAR_0->t, &VAR_0->t);

 VAR_2 = FUNC_2(VAR_1->x.m, VAR_1->y.m);
 VAR_3 = FUNC_1(VAR_1->y.m, VAR_1->x.m);
 VAR_0->x.m = FUNC_3(VAR_2, VAR_1->z.m, FUNC_0(3, 0, 2, 0));
 VAR_0->y.m = FUNC_3(VAR_2, VAR_1->z.m, FUNC_0(3, 1, 3, 1));
 VAR_0->z.m = FUNC_3(VAR_3, VAR_1->z.m, FUNC_0(3, 2, 2, 0));
}
