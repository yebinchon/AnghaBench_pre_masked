
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct can_frame {int can_id; } ;
typedef int canid_t ;



__attribute__((used)) static canid_t FUNC_0(struct sk_buff *VAR_0)
{

 struct can_frame *VAR_1 = (struct can_frame *)VAR_0->data;

 return VAR_1->can_id;
}
