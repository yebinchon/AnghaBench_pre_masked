
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fulltext_vtab ;
typedef int LeafWriter ;
typedef int DLReader ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char const*,int) ;
 int FUNC_2 (int *,int *,char const*,int,int *,int) ;

__attribute__((used)) static int FUNC_3(fulltext_vtab *VAR_1, LeafWriter *VAR_2,
                          const char *VAR_3, int VAR_4,
                          const char *VAR_5, int VAR_6){
  int VAR_7;
  DLReader VAR_8;

  FUNC_1(&VAR_8, VAR_0, VAR_5, VAR_6);
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_8, 1);
  FUNC_0(&VAR_8);

  return VAR_7;
}
