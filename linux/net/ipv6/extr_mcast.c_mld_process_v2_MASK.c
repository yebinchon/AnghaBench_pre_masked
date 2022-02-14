
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mld2_query {int dummy; } ;
struct inet6_dev {unsigned long mc_maxdelay; } ;


 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct inet6_dev*,struct mld2_query*) ;
 int FUNC_2 (struct inet6_dev*,struct mld2_query*) ;
 int FUNC_3 (struct inet6_dev*,struct mld2_query*) ;
 int FUNC_4 (struct mld2_query*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct inet6_dev *VAR_0, struct mld2_query *VAR_1,
     unsigned long *VAR_2)
{
 *VAR_2 = FUNC_0(FUNC_5(FUNC_4(VAR_1)), 1UL);

 FUNC_3(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1);

 VAR_0->mc_maxdelay = *VAR_2;

 return 0;
}
