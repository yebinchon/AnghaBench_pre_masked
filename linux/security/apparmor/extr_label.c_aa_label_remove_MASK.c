
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_labelset {int lock; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct aa_label*,int ) ;
 int FUNC_2 (struct aa_label*) ;
 struct aa_labelset* FUNC_3 (struct aa_label*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

bool FUNC_7(struct aa_label *VAR_0)
{
 struct aa_labelset *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_0(!VAR_1);

 FUNC_5(&VAR_1->lock, VAR_2);
 VAR_3 = FUNC_1(VAR_0, FUNC_4(FUNC_2(VAR_0)));
 FUNC_6(&VAR_1->lock, VAR_2);

 return VAR_3;
}
