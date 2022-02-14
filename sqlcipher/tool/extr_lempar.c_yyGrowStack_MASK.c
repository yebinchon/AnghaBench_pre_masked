
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ yyStackEntry ;
struct TYPE_3__ {int yystksz; scalar_t__* yystack; scalar_t__* yytos; scalar_t__ yystk0; } ;
typedef TYPE_1__ yyParser ;
typedef int pNew ;


 int FUNC_0 (scalar_t__,char*,char*,int,int) ;
 scalar_t__* FUNC_1 (int) ;
 scalar_t__* FUNC_2 (scalar_t__*,int) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static int FUNC_3(yyParser *VAR_2){
  int VAR_3;
  int VAR_4;
  yyStackEntry *VAR_5;

  VAR_3 = VAR_2->yystksz*2 + 100;
  VAR_4 = VAR_2->yytos ? (int)(VAR_2->yytos - VAR_2->yystack) : 0;
  if( VAR_2->yystack==&VAR_2->yystk0 ){
    VAR_5 = FUNC_1(VAR_3*sizeof(VAR_5[0]));
    if( VAR_5 ) VAR_5[0] = VAR_2->yystk0;
  }else{
    VAR_5 = FUNC_2(VAR_2->yystack, VAR_3*sizeof(VAR_5[0]));
  }
  if( VAR_5 ){
    VAR_2->yystack = VAR_5;
    VAR_2->yytos = &VAR_2->yystack[VAR_4];

    if( VAR_0 ){
      FUNC_0(VAR_0,"%sStack grows from %d to %d entries.\n",
              VAR_1, VAR_2->yystksz, VAR_3);
    }

    VAR_2->yystksz = VAR_3;
  }
  return VAR_5==0;
}
