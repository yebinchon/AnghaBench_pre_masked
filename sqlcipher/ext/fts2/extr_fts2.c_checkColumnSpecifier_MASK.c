
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nColumn; scalar_t__** azColumn; } ;
typedef TYPE_1__ fulltext_vtab ;


 scalar_t__ FUNC_0 (scalar_t__*,char const*,int) ;

__attribute__((used)) static int FUNC_1(
  fulltext_vtab *VAR_0,
  const char *VAR_1,
  int VAR_2
){
  int VAR_3;
  for(VAR_3=0; VAR_3<VAR_0->nColumn; VAR_3++){
    if( FUNC_0(VAR_0->azColumn[VAR_3], VAR_1, VAR_2)==0
        && VAR_0->azColumn[VAR_3][VAR_2]==0 ){
      return VAR_3;
    }
  }
  return -1;
}
