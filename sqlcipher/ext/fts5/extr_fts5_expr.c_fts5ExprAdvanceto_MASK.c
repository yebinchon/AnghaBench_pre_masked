
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_5__ {scalar_t__ iRowid; } ;
typedef TYPE_1__ Fts5IndexIter ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
  Fts5IndexIter *VAR_0,
  int VAR_1,
  i64 *VAR_2,
  int *VAR_3,
  int *VAR_4
){
  i64 VAR_5 = *VAR_2;
  i64 VAR_6;

  VAR_6 = VAR_0->iRowid;
  if( (VAR_1==0 && VAR_5>VAR_6) || (VAR_1 && VAR_5<VAR_6) ){
    int VAR_7 = FUNC_2(VAR_0, VAR_5);
    if( VAR_7 || FUNC_1(VAR_0) ){
      *VAR_3 = VAR_7;
      *VAR_4 = 1;
      return 1;
    }
    VAR_6 = VAR_0->iRowid;
    FUNC_0( (VAR_1==0 && VAR_6>=VAR_5) || (VAR_1==1 && VAR_6<=VAR_5) );
  }
  *VAR_2 = VAR_6;

  return 0;
}
