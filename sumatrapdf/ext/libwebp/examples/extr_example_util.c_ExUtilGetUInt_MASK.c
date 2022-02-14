
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 int FUNC_0 (int ,char*,char const* const) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const* const,char**,int) ;

uint32_t FUNC_2(const char* const VAR_1, int VAR_2, int* const VAR_3) {
  char* VAR_4 = ((void*)0);
  const uint32_t VAR_5 = (VAR_1 != ((void*)0)) ? (uint32_t)FUNC_1(VAR_1, &VAR_4, VAR_2) : 0u;
  if (VAR_4 == VAR_1 && VAR_3 != ((void*)0) && !*VAR_3) {
    *VAR_3 = 1;
    FUNC_0(VAR_0, "Error! '%s' is not an integer.\n",
            (VAR_1 != ((void*)0)) ? VAR_1 : "(null)");
  }
  return VAR_5;
}
