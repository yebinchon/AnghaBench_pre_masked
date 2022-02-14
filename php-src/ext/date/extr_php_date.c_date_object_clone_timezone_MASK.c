
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int ce; } ;
typedef TYPE_3__ zend_object ;
struct TYPE_12__ {int abbr; int dst; int utc_offset; } ;
struct TYPE_13__ {TYPE_1__ z; int utc_offset; int tz; } ;
struct TYPE_15__ {int initialized; int type; TYPE_3__ std; TYPE_2__ tzi; } ;
typedef TYPE_4__ php_timezone_obj ;





 TYPE_3__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static zend_object *FUNC_4(zend_object *VAR_0)
{
 php_timezone_obj *VAR_1 = FUNC_1(VAR_0);
 php_timezone_obj *VAR_2 = FUNC_1(FUNC_0(VAR_1->std.ce));

 FUNC_3(&VAR_2->std, &VAR_1->std);
 if (!VAR_1->initialized) {
  return &VAR_2->std;
 }

 VAR_2->type = VAR_1->type;
 VAR_2->initialized = 1;
 switch (VAR_2->type) {
  case 129:
   VAR_2->tzi.tz = VAR_1->tzi.tz;
   break;
  case 128:
   VAR_2->tzi.utc_offset = VAR_1->tzi.utc_offset;
   break;
  case 130:
   VAR_2->tzi.z.utc_offset = VAR_1->tzi.z.utc_offset;
   VAR_2->tzi.z.dst = VAR_1->tzi.z.dst;
   VAR_2->tzi.z.abbr = FUNC_2(VAR_1->tzi.z.abbr);
   break;
 }

 return &VAR_2->std;
}
