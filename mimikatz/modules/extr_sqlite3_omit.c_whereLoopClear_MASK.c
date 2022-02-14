
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {scalar_t__ aLTerm; scalar_t__ aLTermSpace; } ;
typedef TYPE_1__ WhereLoop ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(sqlite3 *VAR_0, WhereLoop *VAR_1){
  if( VAR_1->aLTerm!=VAR_1->aLTermSpace ) FUNC_0(VAR_0, VAR_1->aLTerm);
  FUNC_1(VAR_0, VAR_1);
  FUNC_2(VAR_1);
}
