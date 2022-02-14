
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_3__ {char* pRead; int iPos; } ;
typedef TYPE_1__ LcsIterator ;


 int FUNC_0 (char*,int*) ;

__attribute__((used)) static int FUNC_1(LcsIterator *VAR_0){
  char *VAR_1 = VAR_0->pRead;
  sqlite3_int64 VAR_2;
  int VAR_3 = 0;

  VAR_1 += FUNC_0(VAR_1, &VAR_2);
  if( VAR_2==0 || VAR_2==1 ){
    VAR_1 = 0;
    VAR_3 = 1;
  }else{
    VAR_0->iPos += (int)(VAR_2-2);
  }

  VAR_0->pRead = VAR_1;
  return VAR_3;
}
