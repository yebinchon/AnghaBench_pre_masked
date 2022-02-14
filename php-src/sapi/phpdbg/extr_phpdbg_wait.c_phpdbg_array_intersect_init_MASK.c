
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pos; int ** ht; } ;
typedef TYPE_1__ phpdbg_intersect_ptr ;
typedef int compare_func_t ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(phpdbg_intersect_ptr *VAR_1, HashTable *VAR_2, HashTable *VAR_3) {
 VAR_1->ht[0] = VAR_2;
 VAR_1->ht[1] = VAR_3;

 FUNC_1(VAR_1->ht[0], (compare_func_t) VAR_0, 0);
 FUNC_1(VAR_1->ht[1], (compare_func_t) VAR_0, 0);

 FUNC_0(VAR_1->ht[0], &VAR_1->pos[0]);
 FUNC_0(VAR_1->ht[1], &VAR_1->pos[1]);
}
