
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int * pos; int ** ht; } ;
typedef TYPE_1__ phpdbg_intersect_ptr ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(phpdbg_intersect_ptr *VAR_0, zval **VAR_1) {
 int VAR_2;
 zval *VAR_3[2];
 int VAR_4 = !VAR_0->ht[0] + !VAR_0->ht[1];

 if (VAR_4 > 0) {
  VAR_4 = !VAR_0->ht[0];

  if (!(*VAR_1 = FUNC_1(VAR_0->ht[VAR_4], &VAR_0->pos[VAR_4]))) {
   return 0;
  }

  FUNC_2(VAR_0->ht[VAR_4], &VAR_0->pos[VAR_4]);

  return VAR_4 ? 1 : -1;
 }

 if (!(VAR_3[0] = FUNC_1(VAR_0->ht[0], &VAR_0->pos[0]))) {
  VAR_0->ht[0] = ((void*)0);
  return FUNC_3(VAR_0, VAR_1);
 }
 if (!(VAR_3[1] = FUNC_1(VAR_0->ht[1], &VAR_0->pos[1]))) {
  VAR_0->ht[1] = ((void*)0);
  return FUNC_3(VAR_0, VAR_1);
 }

 VAR_2 = FUNC_0(VAR_3[0], VAR_3[1]);

 if (VAR_2 <= 0) {
  *VAR_1 = VAR_3[0];
  FUNC_2(VAR_0->ht[0], &VAR_0->pos[0]);
 }
 if (VAR_2 >= 0) {
  *VAR_1 = VAR_3[1];
  FUNC_2(VAR_0->ht[1], &VAR_0->pos[1]);
 }

 return VAR_2;
}
