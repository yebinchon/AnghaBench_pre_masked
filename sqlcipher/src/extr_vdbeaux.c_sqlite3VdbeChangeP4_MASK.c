
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ mallocFailed; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_11__ {scalar_t__ magic; int nOp; TYPE_4__* aOp; TYPE_2__* db; } ;
typedef TYPE_3__ Vdbe ;
typedef int VTable ;
struct TYPE_9__ {void* p; int i; } ;
struct TYPE_12__ {int p4type; TYPE_1__ p4; } ;
typedef TYPE_4__ Op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,char const*,int) ;

void FUNC_5(Vdbe *VAR_3, int VAR_4, const char *VAR_5, int VAR_6){
  Op *VAR_7;
  sqlite3 *VAR_8;
  FUNC_1( VAR_3!=0 );
  VAR_8 = VAR_3->db;
  FUNC_1( VAR_3->magic==VAR_2 );
  FUNC_1( VAR_3->aOp!=0 || VAR_8->mallocFailed );
  if( VAR_8->mallocFailed ){
    if( VAR_6!=VAR_1 ) FUNC_2(VAR_8, VAR_6, (void*)*(char**)&VAR_5);
    return;
  }
  FUNC_1( VAR_3->nOp>0 );
  FUNC_1( VAR_4<VAR_3->nOp );
  if( VAR_4<0 ){
    VAR_4 = VAR_3->nOp - 1;
  }
  VAR_7 = &VAR_3->aOp[VAR_4];
  if( VAR_6>=0 || VAR_7->p4type ){
    FUNC_4(VAR_3, VAR_7, VAR_5, VAR_6);
    return;
  }
  if( VAR_6==VAR_0 ){


    VAR_7->p4.i = FUNC_0(VAR_5);
    VAR_7->p4type = VAR_0;
  }else if( VAR_5!=0 ){
    FUNC_1( VAR_6<0 );
    VAR_7->p4.p = (void*)VAR_5;
    VAR_7->p4type = (signed char)VAR_6;
    if( VAR_6==VAR_1 ) FUNC_3((VTable*)VAR_5);
  }
}
