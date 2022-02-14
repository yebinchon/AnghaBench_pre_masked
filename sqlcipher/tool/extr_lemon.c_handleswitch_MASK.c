
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ label; int type; scalar_t__ arg; } ;
typedef int FILE ;
 scalar_t__* VAR_0 ;
 int FUNC_0 (int) ;
 char* VAR_1 ;
 int FUNC_1 (int,int,int *) ;
 int FUNC_2 (int *,char*,char*) ;
 TYPE_1__* VAR_2 ;
 char* FUNC_3 (scalar_t__,char) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 double FUNC_5 (char*,char**) ;
 int FUNC_6 (char*,char**,int ) ;
 void FUNC_7 (double) ;
 void FUNC_8 (int) ;
 void FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(int VAR_3, FILE *VAR_4)
{
  int VAR_5 = 0;
  double VAR_6 = 0.0;
  char *VAR_7 = 0, *VAR_8;
  char *VAR_9;
  int VAR_10;
  int VAR_11 = 0;
  VAR_9 = FUNC_3(VAR_0[VAR_3],'=');
  FUNC_0( VAR_9!=0 );
  *VAR_9 = 0;
  for(VAR_10=0; VAR_2[VAR_10].label; VAR_10++){
    if( FUNC_4(VAR_0[VAR_3],VAR_2[VAR_10].label)==0 ) break;
  }
  *VAR_9 = '=';
  if( VAR_2[VAR_10].label==0 ){
    if( VAR_4 ){
      FUNC_2(VAR_4,"%sundefined option.\n",VAR_1);
      FUNC_1(VAR_3,0,VAR_4);
    }
    VAR_11++;
  }else{
    VAR_9++;
    switch( VAR_2[VAR_10].type ){
      case 131:
      case 133:
        if( VAR_4 ){
          FUNC_2(VAR_4,"%soption requires an argument.\n",VAR_1);
          FUNC_1(VAR_3,0,VAR_4);
        }
        VAR_11++;
        break;
      case 135:
      case 134:
        VAR_6 = FUNC_5(VAR_9,&VAR_8);
        if( *VAR_8 ){
          if( VAR_4 ){
            FUNC_2(VAR_4,
               "%sillegal character in floating-point argument.\n",VAR_1);
            FUNC_1(VAR_3,(int)((char*)VAR_8-(char*)VAR_0[VAR_3]),VAR_4);
          }
          VAR_11++;
        }
        break;
      case 129:
      case 132:
        VAR_5 = FUNC_6(VAR_9,&VAR_8,0);
        if( *VAR_8 ){
          if( VAR_4 ){
            FUNC_2(VAR_4,"%sillegal character in integer argument.\n",VAR_1);
            FUNC_1(VAR_3,(int)((char*)VAR_8-(char*)VAR_0[VAR_3]),VAR_4);
          }
          VAR_11++;
        }
        break;
      case 128:
      case 130:
        VAR_7 = VAR_9;
        break;
    }
    switch( VAR_2[VAR_10].type ){
      case 131:
      case 133:
        break;
      case 135:
        *(double*)(VAR_2[VAR_10].arg) = VAR_6;
        break;
      case 134:
        (*(void(*)(double))(VAR_2[VAR_10].arg))(VAR_6);
        break;
      case 129:
        *(int*)(VAR_2[VAR_10].arg) = VAR_5;
        break;
      case 132:
        (*(void(*)(int))(VAR_2[VAR_10].arg))((int)VAR_5);
        break;
      case 128:
        *(char**)(VAR_2[VAR_10].arg) = VAR_7;
        break;
      case 130:
        (*(void(*)(char *))(VAR_2[VAR_10].arg))(VAR_7);
        break;
    }
  }
  return VAR_11;
}
