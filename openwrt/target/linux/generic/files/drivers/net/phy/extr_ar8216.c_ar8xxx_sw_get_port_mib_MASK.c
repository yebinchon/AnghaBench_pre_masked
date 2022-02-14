
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {char* s; } ;
struct switch_val {unsigned int port_vlan; int len; TYPE_2__ value; } ;
struct switch_dev {unsigned int ports; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {char* buf; int* mib_stats; scalar_t__ mib_type; int mib_lock; int mib_poll_interval; struct ar8xxx_chip* chip; } ;
struct ar8xxx_chip {unsigned int num_mibs; TYPE_1__* mib_decs; } ;
typedef int buf1 ;
struct TYPE_3__ {scalar_t__ type; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct ar8xxx_priv*) ;
 int FUNC_2 (struct ar8xxx_priv*) ;
 int FUNC_3 (struct ar8xxx_priv*,unsigned int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,...) ;
 int FUNC_7 (char const*,char*) ;
 struct ar8xxx_priv* FUNC_8 (struct switch_dev*) ;

int
FUNC_9(struct switch_dev *VAR_2,
         const struct switch_attr *VAR_3,
         struct switch_val *VAR_4)
{
 struct ar8xxx_priv *VAR_5 = FUNC_8(VAR_2);
 const struct ar8xxx_chip *VAR_6 = VAR_5->chip;
 u64 *VAR_7, VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 char *VAR_11 = VAR_5->buf;
 char VAR_12[64];
 const char *VAR_13;
 int VAR_14, VAR_15 = 0;
 bool VAR_16 = 1;

 if (!FUNC_1(VAR_5) || !VAR_5->mib_poll_interval)
  return -VAR_1;

 VAR_9 = VAR_4->port_vlan;
 if (VAR_9 >= VAR_2->ports)
  return -VAR_0;

 FUNC_4(&VAR_5->mib_lock);
 VAR_10 = FUNC_2(VAR_5);
 if (VAR_10)
  goto unlock;

 FUNC_3(VAR_5, VAR_9, 0);

 VAR_15 += FUNC_6(VAR_11 + VAR_15, sizeof(VAR_5->buf) - VAR_15,
   "MIB counters\n");

 VAR_7 = &VAR_5->mib_stats[VAR_9 * VAR_6->num_mibs];
 for (VAR_14 = 0; VAR_14 < VAR_6->num_mibs; VAR_14++) {
  if (VAR_6->mib_decs[VAR_14].type > VAR_5->mib_type)
   continue;
  VAR_13 = VAR_6->mib_decs[VAR_14].name;
  VAR_8 = VAR_7[VAR_14];
  VAR_15 += FUNC_6(VAR_11 + VAR_15, sizeof(VAR_5->buf) - VAR_15,
    "%-12s: %llu\n", VAR_13, VAR_8);
  if ((!FUNC_7(VAR_13, "TxByte") ||
      !FUNC_7(VAR_13, "RxGoodByte")) &&
      VAR_8 >= 1024) {
   FUNC_0(VAR_12, sizeof(VAR_12), VAR_8);
   --VAR_15;
   VAR_15 += FUNC_6(VAR_11 + VAR_15, sizeof(VAR_5->buf) - VAR_15,
     " (%s)\n", VAR_12);
  }
  if (VAR_16 && VAR_8)
   VAR_16 = 0;
 }

 if (VAR_16)
  VAR_15 = FUNC_6(VAR_11, sizeof(VAR_5->buf), "No MIB data");

 VAR_4->value.s = VAR_11;
 VAR_4->len = VAR_15;

 VAR_10 = 0;

unlock:
 FUNC_5(&VAR_5->mib_lock);
 return VAR_10;
}
