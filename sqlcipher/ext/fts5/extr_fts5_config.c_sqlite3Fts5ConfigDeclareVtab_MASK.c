
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nCol; char const* zName; int db; int * azCol; } ;
typedef TYPE_1__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int*,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(Fts5Config *VAR_3){
  int VAR_4;
  int VAR_5 = VAR_2;
  char *VAR_6;

  VAR_6 = FUNC_1(&VAR_5, "CREATE TABLE x(");
  for(VAR_4=0; VAR_6 && VAR_4<VAR_3->nCol; VAR_4++){
    const char *VAR_7 = (VAR_4==0?"":", ");
    VAR_6 = FUNC_1(&VAR_5, "%z%s%Q", VAR_6, VAR_7, VAR_3->azCol[VAR_4]);
  }
  VAR_6 = FUNC_1(&VAR_5, "%z, %Q HIDDEN, %s HIDDEN)",
      VAR_6, VAR_3->zName, VAR_0
  );

  FUNC_0( VAR_6 || VAR_5==VAR_1 );
  if( VAR_6 ){
    VAR_5 = FUNC_2(VAR_3->db, VAR_6);
    FUNC_3(VAR_6);
  }

  return VAR_5;
}
