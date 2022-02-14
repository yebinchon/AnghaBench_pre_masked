
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int * bus; } ;
struct dt_info {int dummy; } ;
struct check {int dummy; } ;


 scalar_t__ FUNC_0 (struct node*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct check *VAR_1, struct dt_info *VAR_2, struct node *VAR_3)
{
 if (FUNC_0(VAR_3, "simple-bus"))
  VAR_3->bus = &VAR_0;
}
