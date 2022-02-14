
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char const* p; size_t len; } ;
typedef int cd ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (char const*,size_t) ;
 int FUNC_2 (char const*,size_t) ;
 int FUNC_3 (struct mg_str*,char*,char**,size_t) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t) ;
 int FUNC_5 (char const*,char const*,size_t) ;

size_t FUNC_6(const char *VAR_0, size_t VAR_1, char *VAR_2,
                          size_t VAR_3, char *VAR_4,
                          size_t VAR_5, const char **VAR_6,
                          size_t *VAR_7) {
  static const char VAR_8[] = "Content-Disposition: ";
  size_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = sizeof(VAR_8) - 1;
  int VAR_15;

  if (VAR_0 == ((void*)0) || VAR_1 <= 0) return 0;
  if ((VAR_15 = FUNC_2(VAR_0, VAR_1)) <= 0) return 0;
  VAR_9 = VAR_15;
  if (VAR_0[0] != '-' || VAR_0[1] != '-' || VAR_0[2] == '\n') return 0;


  VAR_10 = FUNC_1(VAR_0, VAR_1);


  VAR_2[0] = VAR_4[0] = '\0';
  for (VAR_11 = VAR_10; (VAR_12 = FUNC_1(VAR_0 + VAR_11, VAR_9 - VAR_11)) > 0; VAR_11 += VAR_12) {
    if (FUNC_4(VAR_8, VAR_0 + VAR_11, VAR_14) == 0) {
      struct mg_str VAR_16;
      VAR_16.p = VAR_0 + VAR_11 + VAR_14;
      VAR_16.len = VAR_12 - (VAR_14 + 2);
      {
        char *VAR_17 = VAR_2;
        FUNC_3(&VAR_16, "name", &VAR_17, VAR_3);

        if (VAR_17 != VAR_2) {
          FUNC_0(VAR_17);
          VAR_2[0] = '\0';
        }
      }
      {
        char *VAR_18 = VAR_4;
        FUNC_3(&VAR_16, "filename", &VAR_18, VAR_5);

        if (VAR_18 != VAR_4) {
          FUNC_0(VAR_18);
          VAR_4[0] = '\0';
        }
      }
    }
  }


  for (VAR_13 = VAR_9; VAR_13 + (VAR_10 - 2) < VAR_1; VAR_13++) {
    if (VAR_0[VAR_13] == '-' && !FUNC_5(VAR_0, &VAR_0[VAR_13], VAR_10 - 2)) {
      if (VAR_7 != ((void*)0)) *VAR_7 = (VAR_13 - 2) - VAR_9;
      if (VAR_6 != ((void*)0)) *VAR_6 = VAR_0 + VAR_9;
      return VAR_13;
    }
  }

  return 0;
}
