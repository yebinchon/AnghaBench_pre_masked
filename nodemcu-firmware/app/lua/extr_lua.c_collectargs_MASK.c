
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1 (char **VAR_0, int *VAR_1, int *VAR_2, int *VAR_3) {
  int VAR_4;
  for (VAR_4 = 1; VAR_0[VAR_4] != ((void*)0); VAR_4++) {
    if (VAR_0[VAR_4][0] != '-')
        return VAR_4;
    switch (VAR_0[VAR_4][1]) {
      case '-':
        FUNC_0(VAR_0[VAR_4]);
        return (VAR_0[VAR_4+1] != ((void*)0) ? VAR_4+1 : 0);
      case '\0':
        return VAR_4;
      case 'i':
        FUNC_0(VAR_0[VAR_4]);
        *VAR_1 = 1;
      case 'v':
        FUNC_0(VAR_0[VAR_4]);
        *VAR_2 = 1;
        break;
      case 'e':
        *VAR_3 = 1;
      case 'm':
      case 'l':
        if (VAR_0[VAR_4][2] == '\0') {
          VAR_4++;
          if (VAR_0[VAR_4] == ((void*)0)) return -1;
        }
        break;
      default: return -1;
    }
  }
  return 0;
}
