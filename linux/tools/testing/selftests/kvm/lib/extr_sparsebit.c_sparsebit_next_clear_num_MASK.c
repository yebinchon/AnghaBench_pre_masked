
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {int dummy; } ;
typedef int sparsebit_num_t ;
typedef int sparsebit_idx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sparsebit*,int) ;
 scalar_t__ FUNC_2 (struct sparsebit*,int,int) ;
 int FUNC_3 (struct sparsebit*,int) ;
 int FUNC_4 (struct sparsebit*,int) ;

sparsebit_idx_t FUNC_5(struct sparsebit *VAR_0,
 sparsebit_idx_t VAR_1, sparsebit_num_t VAR_2)
{
 sparsebit_idx_t VAR_3;

 FUNC_0(VAR_2 >= 1);

 for (VAR_3 = FUNC_3(VAR_0, VAR_1);
  VAR_3 != 0 && VAR_3 + VAR_2 - 1 >= VAR_3;
  VAR_3 = FUNC_3(VAR_0, VAR_3)) {
  FUNC_0(FUNC_1(VAR_0, VAR_3));





  if (FUNC_2(VAR_0, VAR_3, VAR_2))
   return VAR_3;





  VAR_3 = FUNC_4(VAR_0, VAR_3);
  if (VAR_3 == 0)
   return 0;
 }

 return 0;
}
