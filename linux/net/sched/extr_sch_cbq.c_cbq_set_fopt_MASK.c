
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cbq_fopt {int defchange; int defmap; int split; } ;
struct cbq_class {int dummy; } ;


 int FUNC_0 (struct cbq_class*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct cbq_class *VAR_0, struct tc_cbq_fopt *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->split, VAR_1->defmap, VAR_1->defchange);
 return 0;
}
