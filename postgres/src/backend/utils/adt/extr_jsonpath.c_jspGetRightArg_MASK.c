
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int right; } ;
struct TYPE_8__ {TYPE_1__ args; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ content; int base; } ;
typedef TYPE_3__ JsonPathItem ;


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
 int FUNC_1 (TYPE_3__*,int ,int ) ;

void
FUNC_2(JsonPathItem *VAR_14, JsonPathItem *VAR_15)
{
 FUNC_0(VAR_14->type == VAR_1 ||
     VAR_14->type == VAR_11 ||
     VAR_14->type == VAR_3 ||
     VAR_14->type == VAR_10 ||
     VAR_14->type == VAR_6 ||
     VAR_14->type == VAR_4 ||
     VAR_14->type == VAR_7 ||
     VAR_14->type == VAR_5 ||
     VAR_14->type == VAR_0 ||
     VAR_14->type == VAR_13 ||
     VAR_14->type == VAR_9 ||
     VAR_14->type == VAR_2 ||
     VAR_14->type == VAR_8 ||
     VAR_14->type == VAR_12);

 FUNC_1(VAR_15, VAR_14->base, VAR_14->content.args.right);
}
