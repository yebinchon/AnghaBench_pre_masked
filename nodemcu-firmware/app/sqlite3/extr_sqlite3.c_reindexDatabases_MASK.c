
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nDb; TYPE_4__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Table ;
struct TYPE_11__ {TYPE_1__* pSchema; } ;
struct TYPE_10__ {TYPE_2__* db; } ;
struct TYPE_8__ {int tblHash; } ;
typedef TYPE_3__ Parse ;
typedef int HashElem ;
typedef TYPE_4__ Db ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int *,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(Parse *VAR_0, char const *VAR_1){
  Db *VAR_2;
  int VAR_3;
  sqlite3 *VAR_4 = VAR_0->db;
  HashElem *VAR_5;
  Table *VAR_6;

  FUNC_0( FUNC_2(VAR_4) );
  for(VAR_3=0, VAR_2=VAR_4->aDb; VAR_3<VAR_4->nDb; VAR_3++, VAR_2++){
    FUNC_0( VAR_2!=0 );
    for(VAR_5=FUNC_4(&VAR_2->pSchema->tblHash); VAR_5; VAR_5=FUNC_5(VAR_5)){
      VAR_6 = (Table*)FUNC_3(VAR_5);
      FUNC_1(VAR_0, VAR_6, VAR_1);
    }
  }
}
