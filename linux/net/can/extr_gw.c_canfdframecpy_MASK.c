
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct canfd_frame {int data; int len; int flags; int can_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct canfd_frame *VAR_1, struct canfd_frame *VAR_2)
{





 VAR_1->can_id = VAR_2->can_id;
 VAR_1->flags = VAR_2->flags;
 VAR_1->len = VAR_2->len;
 FUNC_0(VAR_1->data, VAR_2->data, VAR_0);
}
