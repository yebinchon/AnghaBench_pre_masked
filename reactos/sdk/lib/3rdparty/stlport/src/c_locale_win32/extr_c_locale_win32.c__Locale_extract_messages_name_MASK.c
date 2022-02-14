
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _Locale_lcid_t ;


 char const* VAR_0 ;
 char const* FUNC_0 (char const*,char*,int *,int*) ;

char const* FUNC_1(const char* VAR_1, char* VAR_2,
                                          _Locale_lcid_t* VAR_3, int *VAR_4) {
  if (VAR_1[0] == 'L' && VAR_1[1] == 'C' && VAR_1[2] == '_') {
    return VAR_0;
  }
  if (VAR_1[0] == 'C' && VAR_1[1] == 0) {
    return VAR_0;
  }
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
