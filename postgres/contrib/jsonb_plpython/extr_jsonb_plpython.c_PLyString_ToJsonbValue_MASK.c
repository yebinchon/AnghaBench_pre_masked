
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; int len; } ;
struct TYPE_6__ {TYPE_1__ string; } ;
struct TYPE_7__ {TYPE_2__ val; int type; } ;
typedef int PyObject ;
typedef TYPE_3__ JsonbValue ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(PyObject *VAR_1, JsonbValue *VAR_2)
{
 VAR_2->type = VAR_0;
 VAR_2->val.string.val = FUNC_0(VAR_1);
 VAR_2->val.string.len = FUNC_1(VAR_2->val.string.val);
}
