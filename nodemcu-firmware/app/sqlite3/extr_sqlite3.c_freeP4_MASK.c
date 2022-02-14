
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_9__ {int pnBytesFreed; } ;
typedef TYPE_1__ sqlite3 ;
typedef int VTable ;
typedef int Mem ;
typedef int KeyInfo ;
typedef int FuncDef ;
typedef int Expr ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,void*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(sqlite3 *VAR_0, int VAR_1, void *VAR_2){
  FUNC_0( VAR_0 );
  switch( VAR_1 ){
    case 135: {
      FUNC_2(VAR_0, (sqlite3_context*)VAR_2);
      break;
    }
    case 129:
    case 133:
    case 137:
    case 132: {
      FUNC_4(VAR_0, VAR_2);
      break;
    }
    case 131: {
      if( VAR_0->pnBytesFreed==0 ) FUNC_6((KeyInfo*)VAR_2);
      break;
    }






    case 134: {
      FUNC_1(VAR_0, (FuncDef*)VAR_2);
      break;
    }
    case 130: {
      if( VAR_0->pnBytesFreed==0 ){
        FUNC_7((sqlite3_value*)VAR_2);
      }else{
        FUNC_3(VAR_0, (Mem*)VAR_2);
      }
      break;
    }
    case 128 : {
      if( VAR_0->pnBytesFreed==0 ) FUNC_8((VTable *)VAR_2);
      break;
    }
  }
}
