
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 int VAR_4 ;

int FUNC_2(sqlite *VAR_5, int VAR_6){
  int VAR_7;
  if( VAR_2 ) return 0;

  VAR_7 = FUNC_1(VAR_5, "pragma integrity_check", VAR_3, 0, 0);
  if( VAR_7!=VAR_1 && VAR_7!=VAR_0 ){
    FUNC_0(VAR_4,"%d, Integrity check returns %d\n", VAR_6, VAR_7);
  }
  if( VAR_2 ){
    FUNC_1(VAR_5, "pragma integrity_check", VAR_3, 0, 0);
  }
  return 0;
}
