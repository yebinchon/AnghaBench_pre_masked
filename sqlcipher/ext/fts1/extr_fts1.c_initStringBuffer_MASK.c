
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloced; char* s; scalar_t__ len; } ;
typedef TYPE_1__ StringBuffer ;


 char* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(StringBuffer *VAR_0){
  VAR_0->len = 0;
  VAR_0->alloced = 100;
  VAR_0->s = FUNC_0(100);
  VAR_0->s[0] = '\0';
}
