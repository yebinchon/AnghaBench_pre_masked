
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_labelset {int lock; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 struct aa_label* FUNC_1 (struct aa_label*) ;
 struct aa_label* FUNC_2 (struct aa_labelset*,struct aa_label*,int) ;
 int FUNC_3 (struct aa_label*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

struct aa_label *FUNC_8(struct aa_labelset *VAR_0, struct aa_label *VAR_1)
{
 struct aa_label *VAR_2;
 unsigned long VAR_3;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);


 if (!FUNC_3(VAR_1)) {
  FUNC_4(&VAR_0->lock, VAR_3);
  VAR_2 = FUNC_1(VAR_1);
  FUNC_5(&VAR_0->lock, VAR_3);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_6(&VAR_0->lock, VAR_3);
 VAR_2 = FUNC_2(VAR_0, VAR_1, 0);
 FUNC_7(&VAR_0->lock, VAR_3);

 return VAR_2;
}
