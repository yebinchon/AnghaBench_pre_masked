
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int ports; } ;
struct ar8xxx_priv {int* mib_stats; scalar_t__ mib_type; TYPE_2__* chip; int mib_lock; TYPE_1__ dev; } ;
struct ar8xxx_mib_desc {scalar_t__ type; int size; scalar_t__ offset; } ;
struct TYPE_4__ {int reg_port_stats_start; int reg_port_stats_length; int num_mibs; struct ar8xxx_mib_desc* mib_decs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ar8xxx_priv*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ar8xxx_priv *VAR_0, int VAR_1, bool VAR_2)
{
 unsigned int VAR_3;
 u64 *VAR_4;
 int VAR_5;

 FUNC_0(VAR_1 >= VAR_0->dev.ports);

 FUNC_3(&VAR_0->mib_lock);

 VAR_3 = VAR_0->chip->reg_port_stats_start +
        VAR_0->chip->reg_port_stats_length * VAR_1;

 VAR_4 = &VAR_0->mib_stats[VAR_1 * VAR_0->chip->num_mibs];
 for (VAR_5 = 0; VAR_5 < VAR_0->chip->num_mibs; VAR_5++) {
  const struct ar8xxx_mib_desc *VAR_6;
  u64 VAR_7;

  VAR_6 = &VAR_0->chip->mib_decs[VAR_5];
  if (VAR_6->type > VAR_0->mib_type)
   continue;
  VAR_7 = FUNC_1(VAR_0, VAR_3 + VAR_6->offset);
  if (VAR_6->size == 2) {
   u64 VAR_8;

   VAR_8 = FUNC_1(VAR_0, VAR_3 + VAR_6->offset + 4);
   VAR_7 |= VAR_8 << 32;
  }

  if (VAR_2)
   VAR_4[VAR_5] = 0;
  else
   VAR_4[VAR_5] += VAR_7;
  FUNC_2();
 }
}
