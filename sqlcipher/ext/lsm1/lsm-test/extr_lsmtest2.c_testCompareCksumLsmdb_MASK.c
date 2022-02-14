
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*,int ,int **) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (char*,char*,char const*,...) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(
  const char *VAR_1,
  int VAR_2,
  const char *VAR_3,
  const char *VAR_4,
  int *VAR_5
){
  if( *VAR_5==0 ){
    char VAR_6[VAR_0];
    TestDb *VAR_7;

    *VAR_5 = FUNC_1((VAR_2?"compression=1 mmap=0":""), VAR_1, 0, &VAR_7);
    FUNC_2(VAR_7, VAR_6);
    FUNC_3(&VAR_7);

    if( *VAR_5==0 ){
      int VAR_8 = 0;
      int VAR_9 = -1;

      VAR_8 = FUNC_0(VAR_6, VAR_3);
      if( VAR_4 ) VAR_9 = FUNC_0(VAR_6, VAR_4);
      if( VAR_8 && VAR_9 ){
        if( VAR_4 ){
          FUNC_4("testCompareCksumLsmdb: \"%s\" != (\"%s\" OR \"%s\")",
              VAR_6, VAR_3, VAR_4
          );
        }else{
          FUNC_4("testCompareCksumLsmdb: \"%s\" != \"%s\"",
              VAR_6, VAR_3
          );
        }
        *VAR_5 = 1;
        FUNC_5();
      }
    }
  }
}
