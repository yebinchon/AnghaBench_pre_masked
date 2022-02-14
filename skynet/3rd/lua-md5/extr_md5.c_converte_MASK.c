
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD32 ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3 (WORD32 *VAR_0, const char *VAR_1, int VAR_2, int VAR_3) {
  int VAR_4 = 0;
  char VAR_5[64];
  if (VAR_2<64) {
    FUNC_1(VAR_5, VAR_1, VAR_2);
    FUNC_2(VAR_5+VAR_2, 0, 64-VAR_2);
    if (VAR_3 == 0)
      VAR_5[VAR_2] = '\200';
    VAR_4 = 1;
    VAR_1 = VAR_5;
  }
  FUNC_0(VAR_0, VAR_1);
  if (VAR_2 <= (64 - 9))
    VAR_4 = 2;
  return VAR_4;
}
