
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mld_msg {int mld_maxdelay; } ;
struct inet6_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct inet6_dev*) ;
 int FUNC_3 (struct inet6_dev*) ;
 int FUNC_4 (struct inet6_dev*) ;
 scalar_t__ FUNC_5 (struct inet6_dev*) ;
 int FUNC_6 (struct inet6_dev*) ;
 int FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct inet6_dev *VAR_2, struct mld_msg *VAR_3,
     unsigned long *VAR_4, bool VAR_5)
{
 unsigned long VAR_6;


 if (FUNC_5(VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_8(VAR_3->mld_maxdelay);
 if (!VAR_5)
  VAR_6 = FUNC_1(VAR_6, VAR_1);

 *VAR_4 = FUNC_0(FUNC_7(VAR_6), 1UL);






 if (VAR_5)
  FUNC_6(VAR_2);


 FUNC_3(VAR_2);

 FUNC_4(VAR_2);

 FUNC_2(VAR_2);

 return 0;
}
