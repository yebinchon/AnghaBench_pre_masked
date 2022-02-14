
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int aToken ;
struct TYPE_4__ {char const* z; int n; } ;
typedef TYPE_1__ Token ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,int*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char **FUNC_5(const char *VAR_1, int *VAR_2){
  int VAR_3 = 0;
  Token *VAR_4 = FUNC_2( FUNC_4(VAR_1) * sizeof(VAR_4[0]) );
  int VAR_5 = 1;
  int VAR_6, VAR_7;
  int VAR_8 = 0;
  char **VAR_9;
  char *VAR_10;
  while( VAR_5>0 ){
    VAR_5 = FUNC_1(VAR_1, &VAR_6);
    if( VAR_6!=VAR_0 ){
      VAR_4[VAR_3].z = VAR_1;
      VAR_4[VAR_3].n = VAR_5;
      VAR_3++;
      VAR_8 += VAR_5+1;
    }
    VAR_1 += VAR_5;
  }
  VAR_9 = (char**)FUNC_2( VAR_3*sizeof(char*) + VAR_8 );
  VAR_10 = (char*)&VAR_9[VAR_3];
  VAR_3--;
  for(VAR_7=0; VAR_7<VAR_3; VAR_7++){
    VAR_9[VAR_7] = VAR_10;
    VAR_5 = VAR_4[VAR_7].n;
    FUNC_3(VAR_10, VAR_4[VAR_7].z, VAR_5);
    VAR_10[VAR_5] = 0;
    VAR_10 += VAR_5+1;
  }
  VAR_9[VAR_3] = 0;
  FUNC_0(VAR_4);
  *VAR_2 = VAR_3;
  return VAR_9;
}
