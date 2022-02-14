
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {int dummy; } ;
typedef scalar_t__ sparsebit_num_t ;
typedef scalar_t__ sparsebit_idx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sparsebit*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sparsebit*,scalar_t__) ;

bool FUNC_3(struct sparsebit *VAR_0,
 sparsebit_idx_t VAR_1, sparsebit_num_t VAR_2)
{
 sparsebit_idx_t VAR_3;

 FUNC_0(VAR_2 > 0);
 FUNC_0(VAR_1 + VAR_2 - 1 >= VAR_1);


 if (!FUNC_1(VAR_0, VAR_1))
  return 0;


 VAR_3 = FUNC_2(VAR_0, VAR_1);






 return VAR_3 == 0 || VAR_3 - VAR_1 >= VAR_2;
}
