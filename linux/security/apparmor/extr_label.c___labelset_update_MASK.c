
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ns {int labels; int lock; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 struct aa_label* FUNC_1 (struct aa_label*) ;
 int FUNC_2 (struct aa_label*) ;
 struct aa_label* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct aa_ns *VAR_0)
{
 struct aa_label *VAR_1;

 FUNC_0(!VAR_0);
 FUNC_0(!FUNC_4(&VAR_0->lock));

 do {
  VAR_1 = FUNC_3(&VAR_0->labels);
  if (VAR_1) {
   struct aa_label *VAR_2 = FUNC_1(VAR_1);

   FUNC_2(VAR_2);
   FUNC_2(VAR_1);
  }
 } while (VAR_1);
}
