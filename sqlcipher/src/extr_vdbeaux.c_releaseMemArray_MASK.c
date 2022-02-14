
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pnBytesFreed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_9__ {scalar_t__ db; int flags; scalar_t__ xDel; scalar_t__ szMalloc; int zMalloc; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(Mem *VAR_4, int VAR_5){
  if( VAR_4 && VAR_5 ){
    Mem *VAR_6 = &VAR_4[VAR_5];
    sqlite3 *VAR_7 = VAR_4->db;
    if( VAR_7->pnBytesFreed ){
      do{
        if( VAR_4->szMalloc ) FUNC_1(VAR_7, VAR_4->zMalloc);
      }while( (++VAR_4)<VAR_6 );
      return;
    }
    do{
      FUNC_0( (&VAR_4[1])==VAR_6 || VAR_4[0].db==VAR_4[1].db );
      FUNC_0( FUNC_3(VAR_4) );
      FUNC_5( VAR_4->flags & VAR_0 );
      FUNC_5( VAR_4->flags & VAR_1 );
      FUNC_5( VAR_4->xDel==VAR_3 );
      if( VAR_4->flags&(VAR_0|VAR_1) ){
        FUNC_4(VAR_4);
      }else if( VAR_4->szMalloc ){
        FUNC_2(VAR_7, VAR_4->zMalloc);
        VAR_4->szMalloc = 0;
      }

      VAR_4->flags = VAR_2;
    }while( (++VAR_4)<VAR_6 );
  }
}
