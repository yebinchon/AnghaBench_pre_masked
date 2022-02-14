
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_1__ value; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ content; } ;
typedef int Numeric ;
typedef TYPE_3__ JsonPathItem ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

Numeric
FUNC_1(JsonPathItem *VAR_1)
{
 FUNC_0(VAR_1->type == VAR_0);

 return (Numeric) VAR_1->content.value.data;
}
