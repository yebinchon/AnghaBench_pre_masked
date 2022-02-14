
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct smc_link*) ;
 int FUNC_1 (struct smc_link*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct smc_link *VAR_3)
{
 if (VAR_3->state == VAR_2 &&
     !FUNC_1(VAR_3, VAR_1, 1)) {
  FUNC_0(VAR_3);
  return 0;
 }
 return -VAR_0;
}
