
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; char* p; int member_1; int * member_0; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static struct mg_str FUNC_2(const struct mg_str VAR_0,
                                      int VAR_1) {
  struct mg_str VAR_2 = {((void*)0), 0};
  if (VAR_0.len > 0 && VAR_0.p != ((void*)0)) {
    char *VAR_3 = (char *) FUNC_0(VAR_0.len + (VAR_1 ? 1 : 0));
    if (VAR_3 != ((void*)0)) {
      FUNC_1(VAR_3, VAR_0.p, VAR_0.len);
      if (VAR_1) VAR_3[VAR_0.len] = '\0';
      VAR_2.p = VAR_3;
      VAR_2.len = VAR_0.len;
    }
  }
  return VAR_2;
}
