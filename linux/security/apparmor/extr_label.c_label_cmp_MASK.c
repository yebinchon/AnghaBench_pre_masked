
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_label {int size; int vec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct aa_label *VAR_0, struct aa_label *VAR_1)
{
 FUNC_0(!VAR_1);

 if (VAR_0 == VAR_1)
  return 0;

 return FUNC_1(VAR_0->vec, VAR_0->size, VAR_1->vec, VAR_1->size);
}
