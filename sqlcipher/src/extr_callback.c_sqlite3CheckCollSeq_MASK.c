
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_9__ {scalar_t__ xCmp; char* zName; } ;
struct TYPE_8__ {int * db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ CollSeq ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ,TYPE_2__*,char const*) ;

int FUNC_3(Parse *VAR_2, CollSeq *VAR_3){
  if( VAR_3 && VAR_3->xCmp==0 ){
    const char *VAR_4 = VAR_3->zName;
    sqlite3 *VAR_5 = VAR_2->db;
    CollSeq *VAR_6 = FUNC_2(VAR_2, FUNC_0(VAR_5), VAR_3, VAR_4);
    if( !VAR_6 ){
      return VAR_0;
    }
    FUNC_1( VAR_6==VAR_3 );
  }
  return VAR_1;
}
