
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_5__ {char* data; int datalen; } ;
struct TYPE_6__ {TYPE_1__ value; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ content; } ;
typedef TYPE_3__ JsonPathItem ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

char *
FUNC_1(JsonPathItem *VAR_3, int32 *VAR_4)
{
 FUNC_0(VAR_3->type == VAR_0 ||
     VAR_3->type == VAR_1 ||
     VAR_3->type == VAR_2);

 if (VAR_4)
  *VAR_4 = VAR_3->content.value.datalen;
 return VAR_3->content.value.data;
}
