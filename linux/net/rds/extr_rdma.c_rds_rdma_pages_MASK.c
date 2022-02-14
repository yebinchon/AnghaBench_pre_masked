
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iovec {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct rds_iovec*) ;

__attribute__((used)) static int FUNC_1(struct rds_iovec VAR_1[], int VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4;
 unsigned int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_0(&VAR_1[VAR_5]);
  if (VAR_4 == 0)
   return -VAR_0;

  VAR_3 += VAR_4;





  if (VAR_3 < 0)
   return -VAR_0;
 }

 return VAR_3;
}
