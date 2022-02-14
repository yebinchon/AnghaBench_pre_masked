
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nSrc; int * aSrc; } ;
typedef TYPE_1__ UnionTab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (int*,TYPE_1__*,int *,char**) ;

__attribute__((used)) static int FUNC_5(UnionTab *VAR_2, char **VAR_3){
  int VAR_4 = VAR_1;
  char *VAR_5 = 0;
  int VAR_6;

  FUNC_0( *VAR_3==0 );
  VAR_5 = FUNC_4(&VAR_4, VAR_2, &VAR_2->aSrc[0], VAR_3);
  for(VAR_6=1; VAR_6<VAR_2->nSrc; VAR_6++){
    char *VAR_7 = FUNC_4(&VAR_4, VAR_2, &VAR_2->aSrc[VAR_6], VAR_3);
    if( VAR_4==VAR_1 && FUNC_3(VAR_7, VAR_5) ){
      *VAR_3 = FUNC_2("source table schema mismatch");
      VAR_4 = VAR_0;
    }
    FUNC_1(VAR_7);
  }
  FUNC_1(VAR_5);

  return VAR_4;
}
