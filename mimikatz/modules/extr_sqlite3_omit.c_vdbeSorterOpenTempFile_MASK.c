
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_4__ {int pVfs; } ;
typedef TYPE_1__ sqlite3 ;
typedef scalar_t__ i64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,void*) ;
 int FUNC_2 (int ,int ,int **,int,int*) ;
 int FUNC_3 (TYPE_1__*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(
  sqlite3 *VAR_9,
  i64 VAR_10,
  sqlite3_file **VAR_11
){
  int VAR_12;
  if( FUNC_0(202) ) return VAR_1;
  VAR_12 = FUNC_2(VAR_9->pVfs, 0, VAR_11,
      VAR_8 |
      VAR_7 | VAR_4 |
      VAR_6 | VAR_5, &VAR_12
  );
  if( VAR_12==VAR_3 ){
    i64 VAR_13 = VAR_2;
    FUNC_1(*VAR_11, VAR_0, (void*)&VAR_13);
    if( VAR_10>0 ){
      FUNC_3(VAR_9, *VAR_11, VAR_10);
    }
  }
  return VAR_12;
}
