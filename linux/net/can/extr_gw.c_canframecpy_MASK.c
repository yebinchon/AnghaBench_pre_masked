
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct canfd_frame {scalar_t__ data; int len; int can_id; } ;
struct can_frame {scalar_t__ data; int can_dlc; int can_id; } ;



__attribute__((used)) static void FUNC_0(struct canfd_frame *VAR_0, struct can_frame *VAR_1)
{





 VAR_0->can_id = VAR_1->can_id;
 VAR_0->len = VAR_1->can_dlc;
 *(u64 *)VAR_0->data = *(u64 *)VAR_1->data;
}
