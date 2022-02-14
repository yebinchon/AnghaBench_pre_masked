
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char const* p; int len; } ;


 int * FUNC_0 (char const*,unsigned char) ;

const char *FUNC_1(const char *VAR_0, const char *VAR_1, const char *VAR_2,
                    struct mg_str *VAR_3) {
  VAR_3->p = VAR_0;
  while (VAR_0 < VAR_1 && FUNC_0(VAR_2, *(unsigned char *) VAR_0) == ((void*)0)) VAR_0++;
  VAR_3->len = VAR_0 - VAR_3->p;
  while (VAR_0 < VAR_1 && FUNC_0(VAR_2, *(unsigned char *) VAR_0) != ((void*)0)) VAR_0++;
  return VAR_0;
}
