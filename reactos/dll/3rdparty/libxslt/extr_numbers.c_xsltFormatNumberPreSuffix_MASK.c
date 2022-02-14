
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xsltFormatNumberInfoPtr ;
typedef TYPE_2__* xsltDecimalFormatPtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_7__ {int permille; int percent; } ;
struct TYPE_6__ {int multiplier; void* is_multiplier_set; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_3(xsltDecimalFormatPtr VAR_2, xmlChar **VAR_3, xsltFormatNumberInfoPtr VAR_4)
{
    int VAR_5=0;
    int VAR_6;

    while (1) {




 if (**VAR_3 == 0)
     return VAR_5;

 if (**VAR_3 == VAR_0) {
     if (*++(*VAR_3) == 0)
  return -1;
 }
 else if (FUNC_0(VAR_2, *VAR_3))
     return VAR_5;




 else {




     if (FUNC_2(*VAR_3, VAR_2->percent) == 0) {
  if (VAR_4->is_multiplier_set)
      return -1;
  VAR_4->multiplier = 100;
  VAR_4->is_multiplier_set = VAR_1;
     } else if (FUNC_2(*VAR_3, VAR_2->permille) == 0) {
  if (VAR_4->is_multiplier_set)
      return -1;
  VAR_4->multiplier = 1000;
  VAR_4->is_multiplier_set = VAR_1;
     }
 }

 if ((VAR_6=FUNC_1(*VAR_3, 1)) < 1)
     return -1;
 VAR_5 += VAR_6;
 *VAR_3 += VAR_6;
    }
}
