
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pnBytesFreed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_8__ {scalar_t__ nTabRef; } ;
typedef TYPE_2__ Table ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

void FUNC_1(sqlite3 *VAR_0, Table *VAR_1){

  if( !VAR_1 ) return;
  if( ((!VAR_0 || VAR_0->pnBytesFreed==0) && (--VAR_1->nTabRef)>0) ) return;
  FUNC_0(VAR_0, VAR_1);
}
