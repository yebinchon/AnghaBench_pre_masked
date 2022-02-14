
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int nextPos; int base; } ;
typedef TYPE_1__ JsonPathItem ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

bool
FUNC_3(JsonPathItem *VAR_41, JsonPathItem *VAR_42)
{
 if (FUNC_1(VAR_41))
 {
  FUNC_0(VAR_41->type == VAR_37 ||
      VAR_41->type == VAR_31 ||
      VAR_41->type == VAR_6 ||
      VAR_41->type == VAR_30 ||
      VAR_41->type == VAR_20 ||
      VAR_41->type == VAR_3 ||
      VAR_41->type == VAR_4 ||
      VAR_41->type == VAR_5 ||
      VAR_41->type == VAR_18 ||
      VAR_41->type == VAR_14 ||
      VAR_41->type == VAR_8 ||
      VAR_41->type == VAR_13 ||
      VAR_41->type == VAR_34 ||
      VAR_41->type == VAR_40 ||
      VAR_41->type == VAR_22 ||
      VAR_41->type == VAR_1 ||
      VAR_41->type == VAR_38 ||
      VAR_41->type == VAR_27 ||
      VAR_41->type == VAR_10 ||
      VAR_41->type == VAR_26 ||
      VAR_41->type == VAR_33 ||
      VAR_41->type == VAR_25 ||
      VAR_41->type == VAR_12 ||
      VAR_41->type == VAR_29 ||
      VAR_41->type == VAR_16 ||
      VAR_41->type == VAR_17 ||
      VAR_41->type == VAR_23 ||
      VAR_41->type == VAR_24 ||
      VAR_41->type == VAR_2 ||
      VAR_41->type == VAR_32 ||
      VAR_41->type == VAR_28 ||
      VAR_41->type == VAR_19 ||
      VAR_41->type == VAR_39 ||
      VAR_41->type == VAR_35 ||
      VAR_41->type == VAR_0 ||
      VAR_41->type == VAR_15 ||
      VAR_41->type == VAR_7 ||
      VAR_41->type == VAR_11 ||
      VAR_41->type == VAR_9 ||
      VAR_41->type == VAR_21 ||
      VAR_41->type == VAR_36);

  if (VAR_42)
   FUNC_2(VAR_42, VAR_41->base, VAR_41->nextPos);
  return 1;
 }

 return 0;
}
