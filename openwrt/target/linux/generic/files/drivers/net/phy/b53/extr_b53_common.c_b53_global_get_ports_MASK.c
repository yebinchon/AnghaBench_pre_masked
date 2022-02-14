
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; } ;
struct switch_val {TYPE_1__ value; int len; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct b53_device {int enabled_ports; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int) ;
 struct b53_device* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_1,
    const struct switch_attr *VAR_2,
    struct switch_val *VAR_3)
{
 struct b53_device *VAR_4 = FUNC_1(VAR_1);

 VAR_3->len = FUNC_0(VAR_4->buf, VAR_0, "0x%04x",
       VAR_4->enabled_ports);
 VAR_3->value.s = VAR_4->buf;

 return 0;
}
