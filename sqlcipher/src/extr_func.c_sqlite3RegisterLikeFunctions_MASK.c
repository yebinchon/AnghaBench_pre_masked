
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compareInfo {int dummy; } ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,int ,struct compareInfo*,int ,int ,int ,int ,int ,int ) ;

void FUNC_2(sqlite3 *VAR_7, int VAR_8){
  struct compareInfo *VAR_9;
  if( VAR_8 ){
    VAR_9 = (struct compareInfo*)&VAR_5;
  }else{
    VAR_9 = (struct compareInfo*)&VAR_6;
  }
  FUNC_1(VAR_7, "like", 2, VAR_2, VAR_9, VAR_4, 0, 0, 0, 0, 0);
  FUNC_1(VAR_7, "like", 3, VAR_2, VAR_9, VAR_4, 0, 0, 0, 0, 0);
  FUNC_1(VAR_7, "glob", 2, VAR_2,
      (struct compareInfo*)&VAR_3, VAR_4, 0, 0, 0, 0, 0);
  FUNC_0(VAR_7, "glob", VAR_1 | VAR_0);
  FUNC_0(VAR_7, "like",
      VAR_8 ? (VAR_1 | VAR_0) : VAR_1);
}
