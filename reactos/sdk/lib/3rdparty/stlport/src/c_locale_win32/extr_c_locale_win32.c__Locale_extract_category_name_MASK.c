
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _Locale_lcid_t ;


 char* FUNC_0 (char const*,char const*,char*) ;
 char const* FUNC_1 (char const*,char*,int *,int*) ;

__attribute__((used)) static char const* FUNC_2(const char* VAR_0, const char* VAR_1, char* VAR_2,
                                                 _Locale_lcid_t* VAR_3, int *VAR_4) {
  const char* VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_5 == 0 || (VAR_5[0] == 'C' && VAR_5[1] == 0)) {
    return VAR_5;
  }
  return FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
}
