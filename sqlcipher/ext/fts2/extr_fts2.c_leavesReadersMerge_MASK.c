
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fulltext_vtab ;
typedef int LeavesReader ;
typedef int LeafWriter ;
typedef int DLReader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int *,char const*,int,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(fulltext_vtab *VAR_2,
                              LeavesReader *VAR_3, int VAR_4,
                              LeafWriter *VAR_5){
  DLReader VAR_6[VAR_1];
  const char *VAR_7 = FUNC_5(VAR_3);
  int VAR_8, VAR_9 = FUNC_6(VAR_3);

  FUNC_0( VAR_4<=VAR_1 );

  for(VAR_8=0; VAR_8<VAR_4; VAR_8++){
    FUNC_1(&VAR_6[VAR_8], VAR_0,
            FUNC_3(VAR_3+VAR_8),
            FUNC_4(VAR_3+VAR_8));
  }

  return FUNC_2(VAR_2, VAR_5, VAR_7, VAR_9, VAR_6, VAR_4);
}
