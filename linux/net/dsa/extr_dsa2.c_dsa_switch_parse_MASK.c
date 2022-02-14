
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dst; scalar_t__ index; struct dsa_chip_data* cd; } ;
struct dsa_chip_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,struct dsa_chip_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_1, struct dsa_chip_data *VAR_2)
{
 VAR_1->cd = VAR_2;




 VAR_1->index = 0;
 VAR_1->dst = FUNC_1(0);
 if (!VAR_1->dst)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}
