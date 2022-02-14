
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct load_weight {int inv_weight; int weight; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct load_weight *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_0(VAR_2->inv_weight))
  return;

 VAR_3 = FUNC_1(VAR_2->weight);

 if (VAR_0 > 32 && FUNC_2(VAR_3 >= VAR_1))
  VAR_2->inv_weight = 1;
 else if (FUNC_2(!VAR_3))
  VAR_2->inv_weight = VAR_1;
 else
  VAR_2->inv_weight = VAR_1 / VAR_3;
}
