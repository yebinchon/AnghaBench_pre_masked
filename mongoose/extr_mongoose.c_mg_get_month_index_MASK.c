
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const**) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0) {
  static const char *VAR_1[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  size_t VAR_2;

  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
    if (!FUNC_1(VAR_0, VAR_1[VAR_2])) return (int) VAR_2;

  return -1;
}
