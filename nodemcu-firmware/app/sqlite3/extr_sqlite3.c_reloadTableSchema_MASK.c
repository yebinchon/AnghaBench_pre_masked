
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_12__ {int zName; int pSchema; struct TYPE_12__* pNext; } ;
typedef TYPE_1__ Trigger ;
struct TYPE_13__ {int zName; int pSchema; } ;
typedef TYPE_2__ Table ;
struct TYPE_14__ {int db; } ;
typedef TYPE_3__ Parse ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_3__*) ;
 char* FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (int *,int ,int,int ,int ,int ,int ) ;
 int FUNC_8 (int *,int,char*) ;
 char* FUNC_9 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(Parse *VAR_2, Table *VAR_3, const char *VAR_4){
  Vdbe *VAR_5;
  char *VAR_6;
  int VAR_7;

  Trigger *VAR_8;


  VAR_5 = FUNC_3(VAR_2);
  if( FUNC_0(VAR_5==0) ) return;
  FUNC_1( FUNC_2(VAR_2->db) );
  VAR_7 = FUNC_5(VAR_2->db, VAR_3->pSchema);
  FUNC_1( VAR_7>=0 );



  for(VAR_8=FUNC_6(VAR_2, VAR_3); VAR_8; VAR_8=VAR_8->pNext){
    int VAR_9 = FUNC_5(VAR_2->db, VAR_8->pSchema);
    FUNC_1( VAR_9==VAR_7 || VAR_9==1 );
    FUNC_7(VAR_5, VAR_1, VAR_9, 0, 0, VAR_8->zName, 0);
  }



  FUNC_7(VAR_5, VAR_0, VAR_7, 0, 0, VAR_3->zName, 0);


  VAR_6 = FUNC_4(VAR_2->db, "tbl_name=%Q", VAR_4);
  if( !VAR_6 ) return;
  FUNC_8(VAR_5, VAR_7, VAR_6);





  if( (VAR_6=FUNC_9(VAR_2, VAR_3))!=0 ){
    FUNC_8(VAR_5, 1, VAR_6);
  }

}
