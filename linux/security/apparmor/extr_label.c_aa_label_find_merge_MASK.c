
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_labelset {int lock; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 struct aa_label* FUNC_1 (struct aa_labelset*,struct aa_label*,struct aa_label*) ;
 struct aa_label* FUNC_2 (struct aa_label*) ;
 int FUNC_3 (struct aa_label*) ;
 scalar_t__ FUNC_4 (struct aa_label*) ;
 struct aa_labelset* FUNC_5 (struct aa_label*,struct aa_label*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

struct aa_label *FUNC_8(struct aa_label *VAR_0, struct aa_label *VAR_1)
{
 struct aa_labelset *VAR_2;
 struct aa_label *VAR_3, *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 unsigned long VAR_6;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);

 if (FUNC_4(VAR_0))
  VAR_0 = VAR_4 = FUNC_2(VAR_0);
 if (FUNC_4(VAR_1))
  VAR_1 = VAR_5 = FUNC_2(VAR_1);
 VAR_2 = FUNC_5(VAR_0, VAR_1);
 FUNC_6(&VAR_2->lock, VAR_6);
 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1);
 FUNC_7(&VAR_2->lock, VAR_6);
 FUNC_3(VAR_4);
 FUNC_3(VAR_5);

 return VAR_3;
}
