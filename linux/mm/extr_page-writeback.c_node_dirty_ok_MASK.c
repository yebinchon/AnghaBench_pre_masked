
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pglist_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct pglist_data*) ;
 scalar_t__ FUNC_1 (struct pglist_data*,int ) ;

bool FUNC_2(struct pglist_data *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5 = 0;

 VAR_5 += FUNC_1(VAR_3, VAR_0);
 VAR_5 += FUNC_1(VAR_3, VAR_1);
 VAR_5 += FUNC_1(VAR_3, VAR_2);

 return VAR_5 <= VAR_4;
}
