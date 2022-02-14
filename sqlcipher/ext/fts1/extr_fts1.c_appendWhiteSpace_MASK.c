
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int * s; } ;
typedef TYPE_1__ StringBuffer ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(StringBuffer *VAR_0){
  if( VAR_0->len==0 ) return;
  if( FUNC_1(VAR_0->s[VAR_0->len-1]) ) return;
  FUNC_0(VAR_0, " ");
}
