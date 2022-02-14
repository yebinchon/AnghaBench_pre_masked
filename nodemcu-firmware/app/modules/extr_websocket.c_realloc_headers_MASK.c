
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* key; struct TYPE_5__* value; } ;
typedef TYPE_1__ header_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static header_t *FUNC_2(header_t *VAR_0, int VAR_1) {
  if(VAR_0) {
    for(header_t *VAR_2 = VAR_0; VAR_2->key; VAR_2++) {
      FUNC_0(VAR_2->value);
      FUNC_0(VAR_2->key);
    }
    FUNC_0(VAR_0);
  }
  if(!VAR_1)
    return ((void*)0);
  return (header_t *)FUNC_1(sizeof(header_t) * (VAR_1 + 1));
}
