
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ifinfomsg {int ifi_index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nlattr*,int ,int ) ;
 int FUNC_1 (struct nlattr*) ;

int FUNC_2(struct ifinfomsg *VAR_2, struct nlattr **VAR_3)
{
 if (!VAR_3[VAR_1])
  return 0;

 return FUNC_0(VAR_3[VAR_1], VAR_2->ifi_index,
          FUNC_1(VAR_3[VAR_0]));
}
