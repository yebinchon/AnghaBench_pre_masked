
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int typalign; int typbyval; int typlen; int element_type; } ;
struct TYPE_6__ {scalar_t__ ea_magic; int typalign; int typbyval; int typlen; int element_type; } ;
typedef TYPE_1__ ExpandedArrayHeader ;
typedef int Datum ;
typedef TYPE_2__ ArrayMetaState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;

ExpandedArrayHeader *
FUNC_5(Datum VAR_2, ArrayMetaState *VAR_3)
{

 if (FUNC_3(FUNC_2(VAR_2)))
 {
  ExpandedArrayHeader *VAR_4 = (ExpandedArrayHeader *) FUNC_1(VAR_2);

  FUNC_0(VAR_4->ea_magic == VAR_1);

  if (VAR_3)
  {
   VAR_3->element_type = VAR_4->element_type;
   VAR_3->typlen = VAR_4->typlen;
   VAR_3->typbyval = VAR_4->typbyval;
   VAR_3->typalign = VAR_4->typalign;
  }
  return VAR_4;
 }


 VAR_2 = FUNC_4(VAR_2, VAR_0, VAR_3);
 return (ExpandedArrayHeader *) FUNC_1(VAR_2);
}
