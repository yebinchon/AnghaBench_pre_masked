
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct uniphier_aio_sub {int threshold; scalar_t__ wr_total; scalar_t__ rd_total; scalar_t__ wr_org; scalar_t__ rd_org; scalar_t__ wr_offs; scalar_t__ rd_offs; TYPE_4__* swm; TYPE_2__* aio; } ;
struct regmap {int dummy; } ;
struct TYPE_7__ {int map; } ;
struct TYPE_8__ {scalar_t__ dir; TYPE_3__ rb; } ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct TYPE_5__ {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (struct uniphier_aio_sub*,scalar_t__) ;
 int FUNC_8 (struct uniphier_aio_sub*,scalar_t__,int) ;
 int FUNC_9 (struct uniphier_aio_sub*,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct regmap*,int ,int ,int ) ;
 int FUNC_12 (struct regmap*,int ,int ) ;
 int FUNC_13 (scalar_t__) ;

int FUNC_14(struct uniphier_aio_sub *VAR_5, u64 VAR_6, u64 VAR_7,
    int VAR_8)
{
 struct regmap *VAR_9 = VAR_5->aio->chip->regmap;
 u64 VAR_10 = VAR_7 - VAR_6;
 int VAR_11;

 if (VAR_7 < VAR_6 || VAR_8 < 0)
  return -VAR_3;

 FUNC_12(VAR_9, FUNC_3(VAR_5->swm->rb.map), 0);
 FUNC_12(VAR_9, FUNC_1(VAR_5->swm->rb.map),
       FUNC_10(VAR_6));
 FUNC_12(VAR_9, FUNC_2(VAR_5->swm->rb.map),
       FUNC_13(VAR_6));
 FUNC_12(VAR_9, FUNC_4(VAR_5->swm->rb.map),
       FUNC_10(VAR_7));
 FUNC_12(VAR_9, FUNC_5(VAR_5->swm->rb.map),
       FUNC_13(VAR_7));

 FUNC_12(VAR_9, VAR_0, FUNC_0(VAR_5->swm->rb.map));

 VAR_11 = FUNC_8(VAR_5, VAR_10, 2 * VAR_8);
 if (VAR_11)
  return VAR_11;

 if (VAR_5->swm->dir == VAR_4) {
  FUNC_7(VAR_5, VAR_6);
  FUNC_9(VAR_5, VAR_7 - VAR_8);

  FUNC_11(VAR_9, FUNC_6(VAR_5->swm->rb.map),
       VAR_2,
       VAR_2);
 } else {
  FUNC_7(VAR_5, VAR_7 - VAR_8);
  FUNC_9(VAR_5, VAR_6);

  FUNC_11(VAR_9, FUNC_6(VAR_5->swm->rb.map),
       VAR_1,
       VAR_1);
 }

 VAR_5->threshold = 2 * VAR_8;
 VAR_5->rd_offs = 0;
 VAR_5->wr_offs = 0;
 VAR_5->rd_org = 0;
 VAR_5->wr_org = 0;
 VAR_5->rd_total = 0;
 VAR_5->wr_total = 0;

 return 0;
}
