
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xFullPathname ) (TYPE_1__*,char const*,int,char*) ;scalar_t__ pAppData; } ;
typedef TYPE_1__ sqlite3_vfs ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char const*,int,char*) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vfs *VAR_1,
  const char *VAR_2,
  int VAR_3,
  char *VAR_4
){
  int VAR_5;
  sqlite3_vfs *VAR_6 = (sqlite3_vfs *)VAR_1->pAppData;
  VAR_5 = VAR_6->xFullPathname(VAR_6, VAR_2, VAR_3, VAR_4);





  if( VAR_5==VAR_0 ){
    int VAR_7, VAR_8;
    char *VAR_9 = VAR_4;
    int VAR_10 = (int)FUNC_0(VAR_9);
    while( VAR_10>1 && VAR_9[VAR_10-1]=='/' ){ VAR_10--; }
    for(VAR_7=VAR_8=0; VAR_7<VAR_10; VAR_7++){
      if( VAR_9[VAR_7]=='/' ){
        if( VAR_9[VAR_7+1]=='/' ) continue;
        if( VAR_9[VAR_7+1]=='.' && VAR_7+2<VAR_10 && VAR_9[VAR_7+2]=='/' ){
          VAR_7 += 1;
          continue;
        }
        if( VAR_9[VAR_7+1]=='.' && VAR_7+3<VAR_10 && VAR_9[VAR_7+2]=='.' && VAR_9[VAR_7+3]=='/' ){
          while( VAR_8>0 && VAR_9[VAR_8-1]!='/' ){ VAR_8--; }
          if( VAR_8>0 ){ VAR_8--; }
          VAR_7 += 2;
          continue;
        }
      }
      VAR_9[VAR_8++] = VAR_9[VAR_7];
    }
    VAR_9[VAR_8] = 0;
  }

  return VAR_5;
}
