
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PLWriter ;
typedef int PLReader ;
typedef int DocListType ;
typedef int DataBuffer ;
typedef int DLWriter ;
typedef int DLReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int,int ,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *,int ) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(DocListType VAR_0, const char *VAR_1, int VAR_2,
                        int VAR_3, DocListType VAR_4, DataBuffer *VAR_5){
  DLReader VAR_6;
  DLWriter VAR_7;

  FUNC_0( VAR_4<=VAR_0 );

  FUNC_4(&VAR_6, VAR_0, VAR_1, VAR_2);
  FUNC_7(&VAR_7, VAR_4, VAR_5);

  while( !FUNC_1(&VAR_6) ){
    PLReader VAR_8;
    PLWriter VAR_9;
    int VAR_10 = 0;

    FUNC_12(&VAR_8, &VAR_6);

    while( !FUNC_8(&VAR_8) ){
      if( VAR_3==-1 || FUNC_9(&VAR_8)==VAR_3 ){
        if( !VAR_10 ){
          FUNC_18(&VAR_9, &VAR_7, FUNC_3(&VAR_6));
          VAR_10 = 1;
        }
        FUNC_16(&VAR_9, FUNC_9(&VAR_8), FUNC_13(&VAR_8),
               FUNC_14(&VAR_8), FUNC_11(&VAR_8));
      }
      FUNC_15(&VAR_8);
    }
    if( VAR_10 ){
      FUNC_19(&VAR_9);
      FUNC_17(&VAR_9);
    }

    FUNC_10(&VAR_8);
    FUNC_5(&VAR_6);
  }
  FUNC_6(&VAR_7);
  FUNC_2(&VAR_6);
}
