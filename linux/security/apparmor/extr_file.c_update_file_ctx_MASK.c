
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aa_label {int dummy; } ;
struct aa_file_ctx {int lock; int allow; int label; } ;


 int VAR_0 ;
 struct aa_label* FUNC_0 (struct aa_label*,struct aa_label*,int ) ;
 int FUNC_1 (struct aa_label*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct aa_label*) ;
 struct aa_label* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct aa_file_ctx *VAR_1, struct aa_label *VAR_2,
       u32 VAR_3)
{
 struct aa_label *VAR_4, *VAR_5;


 FUNC_5(&VAR_1->lock);
 VAR_5 = FUNC_4(VAR_1->label,
     FUNC_2(&VAR_1->lock));
 VAR_4 = FUNC_0(VAR_5, VAR_2, VAR_0);
 if (VAR_4) {
  if (VAR_4 != VAR_5) {
   FUNC_3(VAR_1->label, VAR_4);
   FUNC_1(VAR_5);
  } else
   FUNC_1(VAR_4);
  VAR_1->allow |= VAR_3;
 }
 FUNC_6(&VAR_1->lock);
}
