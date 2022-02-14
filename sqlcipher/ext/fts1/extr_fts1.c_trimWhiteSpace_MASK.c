
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * s; } ;
typedef TYPE_1__ StringBuffer ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(StringBuffer *VAR_0){
  while( VAR_0->len>0 && FUNC_0(VAR_0->s[VAR_0->len-1]) ){
    VAR_0->len--;
  }
}
