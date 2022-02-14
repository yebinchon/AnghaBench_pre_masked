
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int val; } ;
struct TYPE_6__ {TYPE_1__ string; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ val; } ;
typedef int PyObject ;
typedef TYPE_3__ JsonbValue ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_2(JsonbValue *VAR_1)
{
 FUNC_0(VAR_1->type == VAR_0);

 return FUNC_1(VAR_1->val.string.val, VAR_1->val.string.len);
}
