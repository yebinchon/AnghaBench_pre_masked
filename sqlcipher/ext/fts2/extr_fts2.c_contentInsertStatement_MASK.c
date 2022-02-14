
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nColumn; int azContentColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef int StringBuffer ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 char const* FUNC_3 (int *) ;

__attribute__((used)) static const char *FUNC_4(fulltext_vtab *VAR_0){
  StringBuffer VAR_1;
  int VAR_2;

  FUNC_2(&VAR_1);
  FUNC_0(&VAR_1, "insert into %_content (rowid, ");
  FUNC_1(&VAR_1, VAR_0->nColumn, VAR_0->azContentColumn);
  FUNC_0(&VAR_1, ") values (?");
  for(VAR_2=0; VAR_2<VAR_0->nColumn; ++VAR_2)
    FUNC_0(&VAR_1, ", ?");
  FUNC_0(&VAR_1, ")");
  return FUNC_3(&VAR_1);
}
