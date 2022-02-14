
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int _Locale_collate_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,size_t,int const*,size_t) ;

int FUNC_1(_Locale_collate_t* VAR_2,
                    const wchar_t* VAR_3, size_t VAR_4,
                    const wchar_t* VAR_5, size_t VAR_6) {
  int VAR_7;
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  return (VAR_7 == VAR_0) ? 0 : (VAR_7 == VAR_1) ? -1 : 1;
}
