
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int lock; int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdspm*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hdspm*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hdspm *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_2->lock);

 if (32 == VAR_3) {
  VAR_4 = 7;
 } else {
  VAR_3 >>= 7;
  VAR_4 = 0;
  while (VAR_3) {
   VAR_4++;
   VAR_3 >>= 1;
  }
 }

 VAR_2->control_register &= ~VAR_0;
 VAR_2->control_register |= FUNC_1(VAR_4);

 FUNC_2(VAR_2, VAR_1, VAR_2->control_register);

 FUNC_0(VAR_2);

 FUNC_4(&VAR_2->lock);

 return 0;
}
