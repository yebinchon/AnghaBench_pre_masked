
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int EditDist3Config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,char*,int,int,int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(sqlite3 *VAR_6){
  int VAR_7;
  EditDist3Config *VAR_8 = FUNC_3( sizeof(*VAR_8) );
  if( VAR_8==0 ) return VAR_1;
  FUNC_0(VAR_8, 0, sizeof(*VAR_8));
  VAR_7 = FUNC_1(VAR_6, "editdist3",
              2, VAR_3|VAR_0, VAR_8,
              VAR_5, 0, 0, 0);
  if( VAR_7==VAR_2 ){
    VAR_7 = FUNC_1(VAR_6, "editdist3",
                3, VAR_3|VAR_0, VAR_8,
                VAR_5, 0, 0, 0);
  }
  if( VAR_7==VAR_2 ){
    VAR_7 = FUNC_1(VAR_6, "editdist3",
                1, VAR_3|VAR_0, VAR_8,
                VAR_5, 0, 0, VAR_4);
  }else{
    FUNC_2(VAR_8);
  }
  return VAR_7;
}
