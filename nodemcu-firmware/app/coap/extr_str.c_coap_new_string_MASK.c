
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* s; } ;
typedef TYPE_1__ str ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

str * FUNC_2(size_t VAR_0) {
  str *VAR_1 = (str *)FUNC_0(sizeof(str) + VAR_0 + 1);
  if ( !VAR_1 ) {
    return ((void*)0);
  }

  FUNC_1(VAR_1, 0, sizeof(str));
  VAR_1->s = ((unsigned char *)VAR_1) + sizeof(str);
  return VAR_1;
}
