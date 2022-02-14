
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {char* s; } ;
struct switch_val {int len; TYPE_2__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct mii_bus {int mdio_lock; } ;
struct arl_entry {int* mac; int portmap; } ;
struct TYPE_3__ {int ports; } ;
struct ar8xxx_priv {char* arl_buf; int reg_mutex; struct arl_entry* arl_table; TYPE_1__ dev; struct ar8xxx_chip* chip; struct mii_bus* mii_bus; } ;
struct ar8xxx_chip {int (* get_arl_entry ) (struct ar8xxx_priv*,struct arl_entry*,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,char*,...) ;
 int FUNC_5 (struct ar8xxx_priv*,struct arl_entry*,int *,int ) ;
 int FUNC_6 (struct ar8xxx_priv*,struct arl_entry*,int *,int ) ;
 struct ar8xxx_priv* FUNC_7 (struct switch_dev*) ;

int
FUNC_8(struct switch_dev *VAR_4,
   const struct switch_attr *VAR_5,
   struct switch_val *VAR_6)
{
 struct ar8xxx_priv *VAR_7 = FUNC_7(VAR_4);
 struct mii_bus *VAR_8 = VAR_7->mii_bus;
 const struct ar8xxx_chip *VAR_9 = VAR_7->chip;
 char *VAR_10 = VAR_7->arl_buf;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 struct arl_entry *VAR_15, *VAR_16;
 u32 VAR_17;

 if (!VAR_9->get_arl_entry)
  return -VAR_3;

 FUNC_2(&VAR_7->reg_mutex);
 FUNC_2(&VAR_8->mdio_lock);

 VAR_9->get_arl_entry(VAR_7, ((void*)0), ((void*)0), VAR_1);

 for(VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
  VAR_15 = &VAR_7->arl_table[VAR_11];
  duplicate:
  VAR_9->get_arl_entry(VAR_7, VAR_15, &VAR_17, VAR_0);

  if (!VAR_17)
   break;





  for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12) {
   VAR_16 = &VAR_7->arl_table[VAR_12];
   if (!FUNC_1(VAR_15->mac, VAR_16->mac, sizeof(VAR_15->mac))) {

    VAR_15->portmap &= ~VAR_16->portmap;
    if (!VAR_15->portmap)
     goto duplicate;
   }
  }
 }

 FUNC_3(&VAR_8->mdio_lock);

 VAR_14 += FUNC_4(VAR_10 + VAR_14, sizeof(VAR_7->arl_buf) - VAR_14,
                        "address resolution table\n");

 if (VAR_11 == VAR_2)
  VAR_14 += FUNC_4(VAR_10 + VAR_14, sizeof(VAR_7->arl_buf) - VAR_14,
    "Too many entries found, displaying the first %d only!\n",
    VAR_2);

 for (VAR_12 = 0; VAR_12 < VAR_7->dev.ports; ++VAR_12) {
  for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
   VAR_15 = &VAR_7->arl_table[VAR_13];
   if (!(VAR_15->portmap & FUNC_0(VAR_12)))
    continue;
   VAR_14 += FUNC_4(VAR_10 + VAR_14, sizeof(VAR_7->arl_buf) - VAR_14,
     "Port %d: MAC %02x:%02x:%02x:%02x:%02x:%02x\n",
     VAR_12,
     VAR_15->mac[5], VAR_15->mac[4], VAR_15->mac[3],
     VAR_15->mac[2], VAR_15->mac[1], VAR_15->mac[0]);
  }
 }

 VAR_6->value.s = VAR_10;
 VAR_6->len = VAR_14;

 FUNC_3(&VAR_7->reg_mutex);

 return 0;
}
