
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int TestDb ;
struct TYPE_2__ {int ** apScan; } ;
typedef TYPE_1__ SqlDb ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,void*,int,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(
  TestDb *VAR_2,
  void *VAR_3,
  int VAR_4,
  void *VAR_5, int VAR_6,
  void *VAR_7, int VAR_8,
  void (*VAR_9)(void *, void *, int , void *, int)
){
  SqlDb *VAR_10 = (SqlDb *)VAR_2;
  sqlite3_stmt *VAR_11;

  FUNC_0( VAR_4==1 || VAR_4==0 );
  VAR_11 = VAR_10->apScan[(VAR_5==0) + (VAR_7==0)*2 + VAR_4*4];

  if( VAR_5 ) FUNC_1(VAR_11, 1, VAR_5, VAR_6, VAR_1);
  if( VAR_7 ) FUNC_1(VAR_11, 2, VAR_7, VAR_8, VAR_1);

  while( VAR_0==FUNC_5(VAR_11) ){
    void *VAR_12; int VAR_13;
    void *VAR_14; int VAR_15;

    VAR_13 = FUNC_3(VAR_11, 0);
    VAR_12 = (void *)FUNC_2(VAR_11, 0);
    VAR_15 = FUNC_3(VAR_11, 1);
    VAR_14 = (void *)FUNC_2(VAR_11, 1);

    VAR_9(VAR_3, VAR_12, VAR_13, VAR_14, VAR_15);
  }
  return FUNC_4(VAR_11);
}
