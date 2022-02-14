
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct switch_port_stats {int tx_bytes; int rx_bytes; } ;
struct switch_dev {int dummy; } ;
struct adm6996_priv {int mib_lock; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adm6996_priv*,scalar_t__) ;
 struct adm6996_priv* FUNC_4 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_5(struct switch_dev *VAR_5, int VAR_6,
   struct switch_port_stats *VAR_7)
{
 struct adm6996_priv *VAR_8 = FUNC_4(VAR_5);
 int VAR_9;
 u32 VAR_10 = 0;

 if (VAR_6 >= VAR_2)
  return -VAR_3;

 FUNC_1(&VAR_8->mib_lock);

 VAR_9 = VAR_1;
 VAR_10 = FUNC_3(VAR_8, VAR_4[VAR_9].offset + FUNC_0(VAR_6));
 VAR_10 += FUNC_3(VAR_8, VAR_4[VAR_9].offset + FUNC_0(VAR_6) + 1) << 16;
 VAR_7->tx_bytes = VAR_10;

 VAR_9 = VAR_0;
 VAR_10 = FUNC_3(VAR_8, VAR_4[VAR_9].offset + FUNC_0(VAR_6));
 VAR_10 += FUNC_3(VAR_8, VAR_4[VAR_9].offset + FUNC_0(VAR_6) + 1) << 16;
 VAR_7->rx_bytes = VAR_10;

 FUNC_2(&VAR_8->mib_lock);

 return 0;
}
