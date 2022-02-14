
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nColumn; char** azContentColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_7__ {char const* s; } ;
typedef TYPE_2__ StringBuffer ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static const char *FUNC_2(fulltext_vtab *VAR_0){
  StringBuffer VAR_1;
  int VAR_2;

  FUNC_1(&VAR_1);
  FUNC_0(&VAR_1, "update %_content set ");
  for(VAR_2=0; VAR_2<VAR_0->nColumn; ++VAR_2) {
    if( VAR_2>0 ){
      FUNC_0(&VAR_1, ", ");
    }
    FUNC_0(&VAR_1, VAR_0->azContentColumn[VAR_2]);
    FUNC_0(&VAR_1, " = ?");
  }
  FUNC_0(&VAR_1, " where rowid = ?");
  return VAR_1.s;
}
