
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_cmd_keypress_notify {int value; } ;
struct sk_buff {scalar_t__ data; } ;
struct l2cap_conn {int dummy; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct l2cap_conn *VAR_0,
       struct sk_buff *VAR_1)
{
 struct smp_cmd_keypress_notify *VAR_2 = (void *) VAR_1->data;

 FUNC_0("value 0x%02x", VAR_2->value);

 return 0;
}
