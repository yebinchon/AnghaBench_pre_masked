
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int arg; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ content; int base; } ;
typedef TYPE_2__ JsonPathItem ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

void
FUNC_2(JsonPathItem *VAR_7, JsonPathItem *VAR_8)
{
 FUNC_0(VAR_7->type == VAR_2 ||
     VAR_7->type == VAR_5 ||
     VAR_7->type == VAR_3 ||
     VAR_7->type == VAR_1 ||
     VAR_7->type == VAR_6 ||
     VAR_7->type == VAR_4 ||
     VAR_7->type == VAR_0);

 FUNC_1(VAR_8, VAR_7->base, VAR_7->content.arg);
}
