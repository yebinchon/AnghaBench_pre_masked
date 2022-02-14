
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {char* s; } ;
struct switch_val {int port_vlan; int len; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct adm6996_priv {char* buf; int mib_lock; } ;
struct TYPE_5__ {char* name; scalar_t__ offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adm6996_priv*,scalar_t__) ;
 scalar_t__ FUNC_5 (char*,int,char*,...) ;
 struct adm6996_priv* FUNC_6 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_7(struct switch_dev *VAR_3,
         const struct switch_attr *VAR_4,
         struct switch_val *VAR_5)
{
 struct adm6996_priv *VAR_6 = FUNC_6(VAR_3);
 int VAR_7;
 char *VAR_8 = VAR_6->buf;
 int VAR_9, VAR_10 = 0;
 u32 VAR_11 = 0;

 VAR_7 = VAR_5->port_vlan;
 if (VAR_7 >= VAR_0)
  return -VAR_1;

 FUNC_2(&VAR_6->mib_lock);

 VAR_10 += FUNC_5(VAR_8 + VAR_10, sizeof(VAR_6->buf) - VAR_10,
   "Port %d MIB counters\n",
   VAR_7);

 for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_2); VAR_9++) {
  VAR_11 = FUNC_4(VAR_6, VAR_2[VAR_9].offset + FUNC_0(VAR_7));
  VAR_11 += FUNC_4(VAR_6, VAR_2[VAR_9].offset + FUNC_0(VAR_7) + 1) << 16;
  VAR_10 += FUNC_5(VAR_8 + VAR_10, sizeof(VAR_6->buf) - VAR_10,
    "%-12s: %u\n",
    VAR_2[VAR_9].name,
    VAR_11);
 }

 FUNC_3(&VAR_6->mib_lock);

 VAR_5->value.s = VAR_8;
 VAR_5->len = VAR_10;

 return 0;
}
