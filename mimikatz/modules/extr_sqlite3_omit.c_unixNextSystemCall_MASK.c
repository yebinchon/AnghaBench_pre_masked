
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_3__ {char const* zName; scalar_t__ pCurrent; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_3(sqlite3_vfs *VAR_1, const char *VAR_2){
  int VAR_3 = -1;

  FUNC_1(VAR_1);
  if( VAR_2 ){
    for(VAR_3=0; VAR_3<FUNC_0(VAR_0)-1; VAR_3++){
      if( FUNC_2(VAR_2, VAR_0[VAR_3].zName)==0 ) break;
    }
  }
  for(VAR_3++; VAR_3<FUNC_0(VAR_0); VAR_3++){
    if( VAR_0[VAR_3].pCurrent!=0 ) return VAR_0[VAR_3].zName;
  }
  return 0;
}
