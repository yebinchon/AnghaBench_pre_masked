
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_6__ {char* zName; scalar_t__ xCmp; scalar_t__ xDel; } ;
typedef TYPE_1__ CollSeq ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int *,int const,char*,int ) ;

__attribute__((used)) static int FUNC_2(sqlite3 *VAR_2, CollSeq *VAR_3){
  CollSeq *VAR_4;
  char *VAR_5 = VAR_3->zName;
  int VAR_6;
  static const u8 VAR_7[] = { 130, 129, 128 };
  for(VAR_6=0; VAR_6<3; VAR_6++){
    VAR_4 = FUNC_1(VAR_2, VAR_7[VAR_6], VAR_5, 0);
    if( VAR_4->xCmp!=0 ){
      FUNC_0(VAR_3, VAR_4, sizeof(CollSeq));
      VAR_3->xDel = 0;
      return VAR_1;
    }
  }
  return VAR_0;
}
