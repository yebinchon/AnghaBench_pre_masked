
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nColumn; int azContentColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_8__ {char const* s; } ;
typedef TYPE_2__ StringBuffer ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static const char *FUNC_3(fulltext_vtab *VAR_0){
  StringBuffer VAR_1;
  int VAR_2;

  FUNC_2(&VAR_1);
  FUNC_0(&VAR_1, "insert into %_content (rowid, ");
  FUNC_1(&VAR_1, VAR_0->nColumn, VAR_0->azContentColumn);
  FUNC_0(&VAR_1, ") values (?");
  for(VAR_2=0; VAR_2<VAR_0->nColumn; ++VAR_2)
    FUNC_0(&VAR_1, ", ?");
  FUNC_0(&VAR_1, ")");
  return VAR_1.s;
}
