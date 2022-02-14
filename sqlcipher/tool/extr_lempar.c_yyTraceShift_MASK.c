
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* yytos; } ;
typedef TYPE_2__ yyParser ;
struct TYPE_4__ {size_t major; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*,char*,char const*,int,int) ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static void FUNC_1(yyParser *VAR_5, int VAR_6, const char *VAR_7){
  if( VAR_3 ){
    if( VAR_6<VAR_0 ){
      FUNC_0(VAR_3,"%s%s '%d', go to state %d\n",
         VAR_4, VAR_7, VAR_2[VAR_5->yytos->major],
         VAR_6);
    }else{
      FUNC_0(VAR_3,"%s%s '%d', pending reduce %d\n",
         VAR_4, VAR_7, VAR_2[VAR_5->yytos->major],
         VAR_6 - VAR_1);
    }
  }
}
