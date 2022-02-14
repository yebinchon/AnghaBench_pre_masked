
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_vtab ;
typedef int i64 ;
struct TYPE_6__ {int const nLeafAdd; int nAutoincrmerge; int db; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(sqlite3_vtab *VAR_1){
  const u32 VAR_2 = 64;

  Fts3Table *VAR_3 = (Fts3Table*)VAR_1;
  int VAR_4;
  i64 VAR_5 = FUNC_5(VAR_3->db);

  VAR_4 = FUNC_3(VAR_3);
  if( VAR_4==VAR_0
   && VAR_3->nLeafAdd>(VAR_2/16)
   && VAR_3->nAutoincrmerge && VAR_3->nAutoincrmerge!=0xff
  ){
    int VAR_6 = 0;
    int VAR_7;

    VAR_4 = FUNC_2(VAR_3, &VAR_6);
    FUNC_0( VAR_4==VAR_0 || VAR_6==0 );
    VAR_7 = VAR_3->nLeafAdd * VAR_6;
    VAR_7 += (VAR_7/2);
    if( VAR_7>(int)VAR_2 ) VAR_4 = FUNC_1(VAR_3, VAR_7, VAR_3->nAutoincrmerge);
  }
  FUNC_4(VAR_3);
  FUNC_6(VAR_3->db, VAR_5);
  return VAR_4;
}
