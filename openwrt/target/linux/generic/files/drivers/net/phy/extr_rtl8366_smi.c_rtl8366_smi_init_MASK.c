
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl8366_smi {int parent; TYPE_2__* ops; TYPE_1__* ext_mbus; int gpio_sck; int gpio_sda; } ;
struct TYPE_4__ {int (* detect ) (struct rtl8366_smi*) ;int (* setup ) (struct rtl8366_smi*) ;} ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366_smi*) ;
 int FUNC_1 (struct rtl8366_smi*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rtl8366_smi*) ;
 int FUNC_6 (struct rtl8366_smi*,int) ;
 int FUNC_7 (struct rtl8366_smi*) ;
 int FUNC_8 (struct rtl8366_smi*) ;
 int FUNC_9 (struct rtl8366_smi*) ;
 int FUNC_10 (struct rtl8366_smi*) ;
 int FUNC_11 (struct rtl8366_smi*) ;

int FUNC_12(struct rtl8366_smi *VAR_1)
{
 int VAR_2;

 if (!VAR_1->ops)
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1, FUNC_4(VAR_1->parent));
 if (VAR_2)
  goto err_out;

 if (!VAR_1->ext_mbus)
  FUNC_3(VAR_1->parent, "using GPIO pins %u (SDA) and %u (SCK)\n",
    VAR_1->gpio_sda, VAR_1->gpio_sck);
 else
  FUNC_3(VAR_1->parent, "using MDIO bus '%s'\n", VAR_1->ext_mbus->name);

 VAR_2 = VAR_1->ops->detect(VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_1->parent, "chip detection failed, err=%d\n", VAR_2);
  goto err_free_sck;
 }

 VAR_2 = FUNC_8(VAR_1);
 if (VAR_2)
  goto err_free_sck;

 VAR_2 = VAR_1->ops->setup(VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_1->parent, "chip setup failed, err=%d\n", VAR_2);
  goto err_free_sck;
 }

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_1->parent, "VLAN initialization failed, err=%d\n",
   VAR_2);
  goto err_free_sck;
 }

 VAR_2 = FUNC_6(VAR_1, 1);
 if (VAR_2)
  goto err_free_sck;

 VAR_2 = FUNC_9(VAR_1);
 if (VAR_2)
  goto err_free_sck;

 FUNC_5(VAR_1);

 return 0;

 err_free_sck:
 FUNC_0(VAR_1);
 err_out:
 return VAR_2;
}
