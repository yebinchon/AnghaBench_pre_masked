
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* elems; } ;
struct TYPE_10__ {TYPE_1__ array; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ content; int base; } ;
struct TYPE_11__ {int to; int from; } ;
typedef TYPE_4__ JsonPathItem ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

bool
FUNC_2(JsonPathItem *VAR_1, JsonPathItem *VAR_2, JsonPathItem *VAR_3,
      int VAR_4)
{
 FUNC_0(VAR_1->type == VAR_0);

 FUNC_1(VAR_2, VAR_1->base, VAR_1->content.array.elems[VAR_4].from);

 if (!VAR_1->content.array.elems[VAR_4].to)
  return 0;

 FUNC_1(VAR_3, VAR_1->base, VAR_1->content.array.elems[VAR_4].to);

 return 1;
}
