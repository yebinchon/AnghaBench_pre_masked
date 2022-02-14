
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int dummy; } ;
struct hw20k2 {struct hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hw VAR_2 ;
 struct hw20k2* FUNC_0 (int,int ) ;

int FUNC_1(struct hw **VAR_3)
{
 struct hw20k2 *VAR_4;

 *VAR_3 = ((void*)0);
 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->hw = VAR_2;
 *VAR_3 = &VAR_4->hw;

 return 0;
}
