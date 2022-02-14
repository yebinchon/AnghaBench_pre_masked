
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_labelset {int lock; } ;
struct aa_label {scalar_t__ proxy; } ;


 int FUNC_0 (struct aa_label*,struct aa_label*) ;
 struct aa_label* FUNC_1 (struct aa_labelset*,struct aa_label*,int) ;
 int FUNC_2 (struct aa_label*,struct aa_label*) ;
 int FUNC_3 (struct aa_label*,struct aa_label*) ;
 int FUNC_4 (struct aa_label*,struct aa_label*) ;
 int FUNC_5 (struct aa_label*) ;
 scalar_t__ FUNC_6 (struct aa_label*) ;
 struct aa_labelset* FUNC_7 (struct aa_label*) ;
 scalar_t__ FUNC_8 (struct aa_label*,struct aa_label*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

bool FUNC_11(struct aa_label *VAR_0, struct aa_label *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3;

 if (FUNC_8(VAR_0, VAR_1) && FUNC_6(VAR_0) == FUNC_6(VAR_1)) {
  FUNC_9(&FUNC_7(VAR_0)->lock, VAR_2);
  if (VAR_0->proxy != VAR_1->proxy)
   FUNC_4(VAR_0, VAR_1);
  else
   FUNC_0(VAR_0, VAR_1);
  VAR_3 = FUNC_3(VAR_0, VAR_1);
  FUNC_10(&FUNC_7(VAR_0)->lock, VAR_2);
 } else {
  struct aa_label *VAR_4;
  struct aa_labelset *VAR_5 = FUNC_7(VAR_0);

  FUNC_9(&VAR_5->lock, VAR_2);
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  if (FUNC_6(VAR_0) != FUNC_6(VAR_1)) {
   FUNC_10(&VAR_5->lock, VAR_2);
   VAR_5 = FUNC_7(VAR_1);
   FUNC_9(&VAR_5->lock, VAR_2);
  }
  VAR_4 = FUNC_1(VAR_5, VAR_1, 1);
  VAR_3 = (VAR_4 == VAR_1);
  FUNC_10(&VAR_5->lock, VAR_2);
  FUNC_5(VAR_4);
 }

 return VAR_3;
}
