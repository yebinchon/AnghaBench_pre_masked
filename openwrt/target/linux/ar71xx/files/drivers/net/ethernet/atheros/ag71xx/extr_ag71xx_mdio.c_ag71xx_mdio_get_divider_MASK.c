
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct ag71xx_mdio {TYPE_2__* mii_bus; TYPE_1__* pdata; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {unsigned long ref_clock; unsigned long mdio_clock; scalar_t__ is_ar7240; scalar_t__ is_ar934x; scalar_t__ is_ar9330; } ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 unsigned long* VAR_3 ;
 unsigned long* VAR_4 ;
 int FUNC_1 (int *,char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ag71xx_mdio *VAR_5, u32 *VAR_6)
{
 unsigned long VAR_7, VAR_8;
 const u32 *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7 = VAR_5->pdata->ref_clock;
 VAR_8 = VAR_5->pdata->mdio_clock;

 if (!VAR_7 || !VAR_8)
  return -VAR_0;

 if (VAR_5->pdata->is_ar9330 || VAR_5->pdata->is_ar934x) {
  VAR_9 = VAR_4;
  VAR_10 = FUNC_0(VAR_4);
 } else if (VAR_5->pdata->is_ar7240) {
  VAR_9 = VAR_3;
  VAR_10 = FUNC_0(VAR_3);
 } else {
  VAR_9 = VAR_2;
  VAR_10 = FUNC_0(VAR_2);
 }

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  unsigned long VAR_12;

  VAR_12 = VAR_7 / VAR_9[VAR_11];
  if (VAR_12 <= VAR_8) {
   *VAR_6 = VAR_11;
   return 0;
  }
 }

 FUNC_1(&VAR_5->mii_bus->dev, "no divider found for %lu/%lu\n",
  VAR_7, VAR_8);
 return -VAR_1;
}
