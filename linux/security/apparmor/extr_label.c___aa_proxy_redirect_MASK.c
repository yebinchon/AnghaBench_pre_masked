
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aa_label {int flags; TYPE_1__* proxy; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int label; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct aa_label*) ;
 int FUNC_2 (struct aa_label*) ;
 TYPE_3__* FUNC_3 (struct aa_label*) ;
 TYPE_2__* FUNC_4 (struct aa_label*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 struct aa_label* FUNC_7 (int ,int *) ;

void FUNC_8(struct aa_label *VAR_1, struct aa_label *VAR_2)
{
 struct aa_label *VAR_3;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_2);
 FUNC_5(&FUNC_4(VAR_1)->lock);

 VAR_3 = FUNC_7(VAR_1->proxy->label,
     &FUNC_3(VAR_1)->lock);
 FUNC_6(VAR_1->proxy->label, FUNC_1(VAR_2));
 VAR_1->flags |= VAR_0;
 FUNC_2(VAR_3);
}
