
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct node {int dummy; } ;


 struct property* FUNC_0 (struct node*,char*) ;

__attribute__((used)) static bool FUNC_1(struct node *VAR_0)
{
 struct property *VAR_1;

 VAR_1 = FUNC_0(VAR_0, "interrupt-controller");
 if (VAR_1)
  return 1;

 VAR_1 = FUNC_0(VAR_0, "interrupt-map");
 if (VAR_1)
  return 1;

 return 0;
}
