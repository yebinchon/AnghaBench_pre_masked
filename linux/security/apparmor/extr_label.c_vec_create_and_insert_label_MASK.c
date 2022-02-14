
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int label; } ;
struct aa_labelset {int lock; } ;
struct aa_label {int * vec; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 struct aa_label* FUNC_1 (struct aa_labelset*,struct aa_label*,int) ;
 struct aa_label* FUNC_2 (int *) ;
 int FUNC_3 (struct aa_profile*) ;
 struct aa_label* FUNC_4 (int,int *,int ) ;
 int FUNC_5 (struct aa_label*,struct aa_label*) ;
 struct aa_labelset* FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static struct aa_label *FUNC_9(struct aa_profile **VAR_0,
          int VAR_1, gfp_t VAR_2)
{
 struct aa_label *VAR_3 = ((void*)0);
 struct aa_labelset *VAR_4;
 unsigned long VAR_5;
 struct aa_label *VAR_6;
 int VAR_7;

 FUNC_0(!VAR_0);

 if (VAR_1 == 1)
  return FUNC_2(&VAR_0[0]->label);

 VAR_4 = FUNC_6(&VAR_0[VAR_1 - 1]->label);




 VAR_6 = FUNC_4(VAR_1, ((void*)0), VAR_2);
 if (!VAR_6)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_6->vec[VAR_7] = FUNC_3(VAR_0[VAR_7]);

 FUNC_7(&VAR_4->lock, VAR_5);
 VAR_3 = FUNC_1(VAR_4, VAR_6, 0);
 FUNC_8(&VAR_4->lock, VAR_5);
 FUNC_5(VAR_3, VAR_6);

 return VAR_3;
}
