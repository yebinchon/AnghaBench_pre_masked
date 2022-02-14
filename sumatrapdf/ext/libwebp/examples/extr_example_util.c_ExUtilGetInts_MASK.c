
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int,int*) ;
 char* FUNC_1 (char const*,char) ;

int FUNC_2(const char* VAR_0, int VAR_1, int VAR_2, int VAR_3[]) {
  int VAR_4, VAR_5 = 0;
  for (VAR_4 = 0; VAR_0 != ((void*)0) && VAR_4 < VAR_2; ++VAR_4) {
    const int VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_5);
    if (VAR_5) return -1;
    VAR_3[VAR_4] = VAR_6;
    VAR_0 = FUNC_1(VAR_0, ',');
    if (VAR_0 != ((void*)0)) ++VAR_0;
  }
  return VAR_4;
}
