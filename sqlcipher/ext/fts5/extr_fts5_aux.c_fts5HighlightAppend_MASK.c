
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zOut; } ;
typedef TYPE_1__ HighlightContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(
  int *VAR_2,
  HighlightContext *VAR_3,
  const char *VAR_4, int VAR_5
){
  if( *VAR_2==VAR_1 && VAR_4 ){
    if( VAR_5<0 ) VAR_5 = (int)FUNC_1(VAR_4);
    VAR_3->zOut = FUNC_0("%z%.*s", VAR_3->zOut, VAR_5, VAR_4);
    if( VAR_3->zOut==0 ) *VAR_2 = VAR_0;
  }
}
