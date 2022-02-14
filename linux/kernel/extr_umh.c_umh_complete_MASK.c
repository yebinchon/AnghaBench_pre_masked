
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {int complete; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct subprocess_info*) ;
 int FUNC_1 (struct completion*) ;
 struct completion* FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct subprocess_info *VAR_0)
{
 struct completion *VAR_1 = FUNC_2(&VAR_0->complete, ((void*)0));





 if (VAR_1)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_0);
}
