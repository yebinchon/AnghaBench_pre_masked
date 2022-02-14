
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netns_ipvs {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct netns_ipvs*,int ) ;

__attribute__((used)) static int FUNC_2(struct netns_ipvs *VAR_2, struct nlattr **VAR_3)
{
 int VAR_4;

 if (!VAR_3[VAR_1])
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2,
          FUNC_0(VAR_3[VAR_1]));
 return VAR_4;
}
