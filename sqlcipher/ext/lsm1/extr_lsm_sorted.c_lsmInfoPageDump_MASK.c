
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int LsmPgno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,char**) ;

int FUNC_1(
  lsm_db *VAR_3,
  LsmPgno VAR_4,
  int VAR_5,
  char **VAR_6
){
  int VAR_7 = VAR_0 | VAR_2;
  if( VAR_5 ) VAR_7 |= VAR_1;
  return FUNC_0(VAR_3, VAR_4, VAR_7, VAR_6);
}
