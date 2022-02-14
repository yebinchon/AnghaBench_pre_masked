
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ label; scalar_t__ arg; scalar_t__ type; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char** VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_3 (char*,scalar_t__,int ) ;
 void FUNC_4 (int) ;
 void FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(int VAR_6, FILE *VAR_7)
{
  int VAR_8;
  int VAR_9 = 0;
  int VAR_10;
  for(VAR_10=0; VAR_5[VAR_10].label; VAR_10++){
    if( FUNC_3(&VAR_3[VAR_6][1],VAR_5[VAR_10].label,FUNC_2(VAR_5[VAR_10].label))==0 ) break;
  }
  VAR_8 = VAR_3[VAR_6][0]=='-' ? 1 : 0;
  if( VAR_5[VAR_10].label==0 ){
    if( VAR_7 ){
      FUNC_1(VAR_7,"%sundefined option.\n",VAR_4);
      FUNC_0(VAR_6,1,VAR_7);
    }
    VAR_9++;
  }else if( VAR_5[VAR_10].arg==0 ){

  }else if( VAR_5[VAR_10].type==VAR_1 ){
    *((int*)VAR_5[VAR_10].arg) = VAR_8;
  }else if( VAR_5[VAR_10].type==VAR_0 ){
    (*(void(*)(int))(VAR_5[VAR_10].arg))(VAR_8);
  }else if( VAR_5[VAR_10].type==VAR_2 ){
    (*(void(*)(char *))(VAR_5[VAR_10].arg))(&VAR_3[VAR_6][2]);
  }else{
    if( VAR_7 ){
      FUNC_1(VAR_7,"%smissing argument on switch.\n",VAR_4);
      FUNC_0(VAR_6,1,VAR_7);
    }
    VAR_9++;
  }
  return VAR_9;
}
