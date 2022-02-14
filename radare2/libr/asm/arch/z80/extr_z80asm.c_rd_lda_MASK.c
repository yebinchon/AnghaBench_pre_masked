
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (char const**,char const**,int ,char const**) ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(const char **VAR_5) {




 int VAR_6;
 const char *VAR_7[] = {
  "( sp )", "( iy +)", "( de )", "( bc )", "( ix +)", "b", "c", "d", "e", "h",
  "l", "( hl )", "a", "i", "r", "(*)", "*", ((void*)0)
 };
 const char *VAR_8;
 VAR_6 = FUNC_0 (VAR_5, VAR_7, 0, &VAR_8);
 if (VAR_6 == 2 || VAR_6 == 5) {
  VAR_0 = (VAR_6 == 2)? 0xFD: 0xDD;
  VAR_1 = VAR_8;
  return 7;
 }
 if (VAR_6 == 17) {
  VAR_2 = VAR_8;
  VAR_4 = 1;
  return 7;
 }
 if (VAR_6 == 16) {
  VAR_3 = VAR_8;
 }
 return VAR_6 - 5;
}
