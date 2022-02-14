
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nm256 {int coeffs_current; scalar_t__ all_coeff_buf; int use_cache; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nm256*,int,scalar_t__,int) ;
 int FUNC_3 (struct nm256*,scalar_t__) ;
 int FUNC_4 (struct nm256*,int ,scalar_t__,int) ;
 int FUNC_5 (struct nm256*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct nm256 *VAR_10, int VAR_11, int VAR_12)
{

 u32 VAR_13 = (VAR_11 == VAR_6 ?
         VAR_3 : VAR_1);
 u32 VAR_14 = VAR_0;

 VAR_14 += (VAR_11 == VAR_6 ?
   VAR_4 : VAR_2);

 if (FUNC_3(VAR_10, VAR_13) & 1) {
  FUNC_0(VAR_10->card->dev,
   "NM256: Engine was enabled while loading coefficients!\n");
  return;
 }


 VAR_12 &= 7;
 if (VAR_11 == VAR_6)
  VAR_12 += 8;

 if (! VAR_10->use_cache) {
  FUNC_2(VAR_10, VAR_11, VAR_14, VAR_12);
  return;
 }
 if (! VAR_10->coeffs_current) {
  FUNC_4(VAR_10, VAR_9, VAR_10->all_coeff_buf,
           VAR_5 * 4);
  VAR_10->coeffs_current = 1;
 } else {
  u32 VAR_15 = VAR_10->all_coeff_buf;
  u32 VAR_16 = FUNC_1(VAR_12);
  u32 VAR_17 = VAR_16 + VAR_8[VAR_12];
  FUNC_5(VAR_10, VAR_14, VAR_15 + VAR_16);
  if (VAR_11 == VAR_7)
   VAR_17--;
  FUNC_5(VAR_10, VAR_14 + 4, VAR_15 + VAR_17);
 }
}
