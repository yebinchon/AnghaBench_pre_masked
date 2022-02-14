
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double prop_card; int full_card; int abbr_card; } ;
typedef TYPE_1__ VarStringSortSupport ;
struct TYPE_5__ {int abbreviate; scalar_t__ ssup_extra; } ;
typedef TYPE_2__* SortSupport ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,double,double,double,...) ;
 double FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_3(int VAR_2, SortSupport VAR_3)
{
 VarStringSortSupport *VAR_4 = (VarStringSortSupport *) VAR_3->ssup_extra;
 double VAR_5,
    VAR_6;

 FUNC_0(VAR_3->abbreviate);


 if (VAR_2 < 100)
  return 0;

 VAR_5 = FUNC_2(&VAR_4->abbr_card);
 VAR_6 = FUNC_2(&VAR_4->full_card);






 if (VAR_5 <= 1.0)
  VAR_5 = 1.0;

 if (VAR_6 <= 1.0)
  VAR_6 = 1.0;
 if (VAR_5 > VAR_6 * VAR_4->prop_card)
 {
  if (VAR_2 > 10000)
   VAR_4->prop_card *= 0.65;

  return 0;
 }
 return 1;
}
