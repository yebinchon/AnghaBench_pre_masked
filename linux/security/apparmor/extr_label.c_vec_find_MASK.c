
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;
struct aa_labelset {int lock; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 struct aa_label* FUNC_1 (struct aa_profile**,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct aa_labelset* FUNC_4 (struct aa_profile**,int) ;

__attribute__((used)) static struct aa_label *FUNC_5(struct aa_profile **VAR_0, int VAR_1)
{
 struct aa_labelset *VAR_2;
 struct aa_label *VAR_3;
 unsigned long VAR_4;

 FUNC_0(!VAR_0);
 FUNC_0(!*VAR_0);
 FUNC_0(VAR_1 <= 0);

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 FUNC_2(&VAR_2->lock, VAR_4);
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_2->lock, VAR_4);

 return VAR_3;
}
