
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atm_vcc {TYPE_2__* dev; } ;
struct TYPE_3__ {int vpi_bits; int vci_bits; } ;
struct TYPE_4__ {TYPE_1__ ci_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atm_vcc const*,short,int) ;

__attribute__((used)) static int FUNC_1(const struct atm_vcc *VAR_4, short *VAR_5, int *VAR_6)
{
 static short VAR_7;
 static int VAR_8;
 short VAR_9;
 int VAR_10;
 int VAR_11;

 if (*VAR_5 != VAR_2 && *VAR_6 != VAR_1) {
  VAR_11 = FUNC_0(VAR_4, *VAR_5, *VAR_6);
  return VAR_11;
 }

 if (*VAR_5 != VAR_2)
  VAR_7 = *VAR_5;
 else if (VAR_7 >= 1 << VAR_4->dev->ci_range.vpi_bits)
  VAR_7 = 0;
 if (*VAR_6 != VAR_1)
  VAR_8 = *VAR_6;
 else if (VAR_8 < VAR_0 || VAR_8 >= 1 << VAR_4->dev->ci_range.vci_bits)
   VAR_8 = VAR_0;
 VAR_9 = VAR_7;
 VAR_10 = VAR_8;
 do {
  if (!FUNC_0(VAR_4, VAR_7, VAR_8)) {
   *VAR_5 = VAR_7;
   *VAR_6 = VAR_8;
   return 0;
  }
  if (*VAR_6 == VAR_1) {
   VAR_8++;
   if (VAR_8 >= 1 << VAR_4->dev->ci_range.vci_bits)
    VAR_8 = VAR_0;
  }
  if ((VAR_8 == VAR_0 || *VAR_6 != VAR_1) &&
      *VAR_5 == VAR_2) {
   VAR_7++;
   if (VAR_7 >= 1 << VAR_4->dev->ci_range.vpi_bits)
    VAR_7 = 0;
  }
 } while (VAR_9 != VAR_7 || VAR_10 != VAR_8);
 return -VAR_3;
}
