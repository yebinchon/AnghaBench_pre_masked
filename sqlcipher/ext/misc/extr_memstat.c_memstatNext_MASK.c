
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {scalar_t__ iRowid; scalar_t__ iDb; scalar_t__ nDb; int* aVal; int * azDb; int db; } ;
typedef TYPE_1__ memstat_cursor ;
struct TYPE_4__ {int mNull; int eType; int eOp; } ;




 scalar_t__ VAR_0 ;

 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*,int*,int ) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int*,int*,int ) ;
 int FUNC_5 (int ,int*,int*,int ) ;

__attribute__((used)) static int FUNC_6(sqlite3_vtab_cursor *VAR_3){
  memstat_cursor *VAR_4 = (memstat_cursor*)VAR_3;
  int VAR_5;
  FUNC_0( VAR_4->iRowid<=VAR_0 );
  while(1){
    VAR_5 = (int)VAR_4->iRowid - 1;
    if( VAR_5<0 || (VAR_2[VAR_5].mNull & 2)!=0 || (++VAR_4->iDb)>=VAR_4->nDb ){
      VAR_4->iRowid++;
      if( VAR_4->iRowid>VAR_0 ) return VAR_1;
      VAR_4->iDb = 0;
      VAR_5++;
    }
    VAR_4->aVal[0] = 0;
    VAR_4->aVal[1] = 0;
    switch( VAR_2[VAR_5].eType ){
      case 129: {
        if( FUNC_3()>=3010000 ){
          FUNC_5(VAR_2[VAR_5].eOp,
                           &VAR_4->aVal[0], &VAR_4->aVal[1],0);
        }else{
          int VAR_6, VAR_7;
          FUNC_4(VAR_2[VAR_5].eOp, &VAR_6, &VAR_7, 0);
          VAR_4->aVal[0] = VAR_6;
          VAR_4->aVal[1] = VAR_7;
        }
        break;
      }
      case 130: {
        int VAR_8, VAR_9;
        FUNC_1(VAR_4->db, VAR_2[VAR_5].eOp, &VAR_8, &VAR_9, 0);
        VAR_4->aVal[0] = VAR_8;
        VAR_4->aVal[1] = VAR_9;
        break;
      }
      case 128: {
        int VAR_10;
        VAR_10 = FUNC_2(VAR_4->db, VAR_4->azDb[VAR_4->iDb],
                                  VAR_2[VAR_5].eOp, (void*)&VAR_4->aVal[0]);
        if( VAR_10!=VAR_1 ) continue;
        break;
      }
    }
    break;
  }
  return VAR_1;
}
