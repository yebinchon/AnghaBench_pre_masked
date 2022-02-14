
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum attr_type { ____Placeholder_attr_type } attr_type ;
struct TYPE_5__ {void* pval; } ;
struct TYPE_6__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ attr_t ;


 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static attr_t *FUNC_1(enum attr_type VAR_0, void *VAR_1)
{
  attr_t *VAR_2 = FUNC_0(sizeof(attr_t));
  VAR_2->type = VAR_0;
  VAR_2->u.pval = VAR_1;
  return VAR_2;
}
