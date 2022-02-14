
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,int const,int ,int ,int ,int ) ;
 int FUNC_1 (int *,char*,int *,void*,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(sqlite3 *VAR_8){
  const int VAR_9 = VAR_3;
  int VAR_10;

  VAR_10 = FUNC_0(VAR_8, "rtreenode", 2, VAR_9, 0, VAR_7, 0, 0);
  if( VAR_10==VAR_2 ){
    VAR_10 = FUNC_0(VAR_8, "rtreedepth", 1, VAR_9, 0,VAR_6, 0, 0);
  }
  if( VAR_10==VAR_2 ){
    VAR_10 = FUNC_0(VAR_8, "rtreecheck", -1, VAR_9, 0,VAR_5, 0,0);
  }
  if( VAR_10==VAR_2 ){



    void *VAR_11 = (void *)VAR_1;

    VAR_10 = FUNC_1(VAR_8, "rtree", &VAR_4, VAR_11, 0);
  }
  if( VAR_10==VAR_2 ){
    void *VAR_12 = (void *)VAR_0;
    VAR_10 = FUNC_1(VAR_8, "rtree_i32", &VAR_4, VAR_12, 0);
  }






  return VAR_10;
}
