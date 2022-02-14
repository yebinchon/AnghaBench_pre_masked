
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_label {scalar_t__ size; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 struct aa_label* FUNC_1 (struct aa_label*) ;
 struct aa_label* FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (struct aa_label*) ;
 int FUNC_4 (struct aa_label*,struct aa_label*) ;
 struct aa_label* FUNC_5 (struct aa_label*,struct aa_label*,struct aa_label*) ;

struct aa_label *FUNC_6(struct aa_label *VAR_0, struct aa_label *VAR_1,
    gfp_t VAR_2)
{
 struct aa_label *VAR_3 = ((void*)0);

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);

 if (VAR_0 == VAR_1)
  return FUNC_1(VAR_0);







 if (!VAR_3) {
  struct aa_label *VAR_4;

  VAR_0 = FUNC_1(VAR_0);
  VAR_1 = FUNC_1(VAR_1);




  VAR_4 = FUNC_2(VAR_0->size + VAR_1->size, ((void*)0), VAR_2);
  if (!VAR_4)
   goto out;

  VAR_3 = FUNC_5(VAR_4, VAR_0, VAR_1);
  FUNC_4(VAR_3, VAR_4);
out:
  FUNC_3(VAR_0);
  FUNC_3(VAR_1);
 }

 return VAR_3;
}
