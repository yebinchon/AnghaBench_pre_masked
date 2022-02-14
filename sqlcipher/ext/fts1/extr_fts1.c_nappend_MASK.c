
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int alloced; scalar_t__* s; } ;
typedef TYPE_1__ StringBuffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,char const*,int) ;
 scalar_t__* FUNC_2 (scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(StringBuffer *VAR_0, const char *VAR_1, int VAR_2){
  if( VAR_0->len + VAR_2 >= VAR_0->alloced ){
    VAR_0->alloced = VAR_0->len + VAR_2 + 100;
    VAR_0->s = FUNC_2(VAR_0->s, VAR_0->alloced+1);
    if( VAR_0->s==0 ){
      FUNC_0(VAR_0);
      return;
    }
  }
  FUNC_1(VAR_0->s + VAR_0->len, VAR_1, VAR_2);
  VAR_0->len += VAR_2;
  VAR_0->s[VAR_0->len] = 0;
}
