
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zMsg ;
typedef void* sqlite3_int64 ;
struct TYPE_6__ {int szPg; int iCol; } ;
typedef TYPE_1__ GState ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char*,char*,void*,...) ;

__attribute__((used)) static void FUNC_6(GState *VAR_0){
  int VAR_1;
  int VAR_2;
  int VAR_3;
  int VAR_4;
  sqlite3_int64 VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  char VAR_11[200];

  VAR_1 = FUNC_0(VAR_0, 3);
  for(VAR_2=0; VAR_2<VAR_1; VAR_2++){
    VAR_3 = FUNC_0(VAR_0, 8+VAR_2*2);
    VAR_4 = FUNC_3(VAR_0, &VAR_3);
    VAR_5 = FUNC_3(VAR_0, &VAR_3);
    if( VAR_4 > VAR_0->szPg-35 ){
      FUNC_5(sizeof(VAR_11), VAR_11,
         "# overflow rowid %lld", VAR_5);
      FUNC_4("%s\n", VAR_11);
      continue;
    }
    VAR_10 = VAR_3;
    VAR_6 = FUNC_3(VAR_0, &VAR_3);
    VAR_10 += VAR_6;
    for(VAR_7=0; VAR_7<VAR_0->iCol; VAR_7++){
      VAR_8 = FUNC_3(VAR_0, &VAR_3);
      VAR_10 += FUNC_2(VAR_8);
    }
    VAR_8 = FUNC_3(VAR_0, &VAR_3);
    VAR_9 = FUNC_2(VAR_8);
    FUNC_5(sizeof(VAR_11), VAR_11,
         "rowid %12lld size %5d offset %8d",
          VAR_5, VAR_9, FUNC_1(VAR_0, VAR_10));
    FUNC_4("%s\n", VAR_11);
  }
}
