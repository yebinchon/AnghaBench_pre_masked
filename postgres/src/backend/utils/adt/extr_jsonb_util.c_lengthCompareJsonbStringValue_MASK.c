
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int val; } ;
struct TYPE_5__ {TYPE_1__ string; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_1, const void *VAR_2)
{
 const JsonbValue *VAR_3 = (const JsonbValue *) VAR_1;
 const JsonbValue *VAR_4 = (const JsonbValue *) VAR_2;

 FUNC_0(VAR_3->type == VAR_0);
 FUNC_0(VAR_4->type == VAR_0);

 return FUNC_1(VAR_3->val.string.val, VAR_3->val.string.len,
         VAR_4->val.string.val, VAR_4->val.string.len);
}
