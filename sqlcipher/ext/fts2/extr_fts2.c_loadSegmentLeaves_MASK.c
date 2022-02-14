
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite_int64 ;
typedef int fulltext_vtab ;
typedef int LeavesReader ;
typedef int DataBuffer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char const*,int,int,int *) ;

__attribute__((used)) static int FUNC_5(fulltext_vtab *VAR_1,
                             sqlite_int64 VAR_2, sqlite_int64 VAR_3,
                             const char *VAR_4, int VAR_5, int VAR_6,
                             DataBuffer *VAR_7){
  int VAR_8;
  LeavesReader VAR_9;

  FUNC_0( VAR_2<=VAR_3 );
  VAR_8 = FUNC_2(VAR_1, 0, VAR_2, VAR_3, ((void*)0), 0, &VAR_9);
  if( VAR_8!=VAR_0 ) return VAR_8;

  VAR_8 = FUNC_4(VAR_1, &VAR_9, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_3(&VAR_9);
  FUNC_1(&VAR_9);
  return VAR_8;
}
