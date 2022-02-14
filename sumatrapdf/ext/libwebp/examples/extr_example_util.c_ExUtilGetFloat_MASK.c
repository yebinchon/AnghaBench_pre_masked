
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const* const) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const* const,char**) ;

float FUNC_2(const char* const VAR_1, int* const VAR_2) {
  char* VAR_3 = ((void*)0);
  const float VAR_4 = (VAR_1 != ((void*)0)) ? (float)FUNC_1(VAR_1, &VAR_3) : 0.f;
  if (VAR_3 == VAR_1 && VAR_2 != ((void*)0) && !*VAR_2) {
    *VAR_2 = 1;
    FUNC_0(VAR_0, "Error! '%s' is not a floating point number.\n",
            (VAR_1 != ((void*)0)) ? VAR_1 : "(null)");
  }
  return VAR_4;
}
