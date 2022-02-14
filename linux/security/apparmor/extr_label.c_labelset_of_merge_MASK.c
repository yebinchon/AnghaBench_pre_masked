
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_labelset {int dummy; } ;
struct aa_ns {struct aa_labelset labels; } ;
struct aa_label {int dummy; } ;


 struct aa_ns* FUNC_0 (struct aa_label*) ;
 scalar_t__ FUNC_1 (struct aa_ns*,struct aa_ns*) ;

__attribute__((used)) static struct aa_labelset *FUNC_2(struct aa_label *VAR_0,
          struct aa_label *VAR_1)
{
 struct aa_ns *VAR_2 = FUNC_0(VAR_0);
 struct aa_ns *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_2, VAR_3) <= 0)
  return &VAR_2->labels;
 return &VAR_3->labels;
}
