
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(const char **VAR_8, const char **VAR_9,
    char *VAR_10, int VAR_11)
{
 const char *VAR_12, *VAR_13 = *VAR_8;
 int VAR_14;

 VAR_12 = FUNC_1(VAR_13, '/');
 if (VAR_12) {
  if (VAR_12 == VAR_13) {
   FUNC_4(VAR_11, VAR_7);
   return -VAR_2;
  }
  if (VAR_12 - VAR_13 + 1 > VAR_5) {
   FUNC_4(VAR_11, VAR_4);
   return -VAR_2;
  }
  FUNC_2(VAR_10, VAR_13, VAR_12 - VAR_13 + 1);
  if (!FUNC_0(VAR_10)) {
   FUNC_4(VAR_11, VAR_1);
   return -VAR_2;
  }
  *VAR_9 = VAR_10;
  *VAR_8 = VAR_12 + 1;
  VAR_11 += VAR_12 - VAR_13 + 1;
  VAR_13 = *VAR_8;
 }
 VAR_14 = FUNC_3(VAR_13);
 if (VAR_14 == 0) {
  FUNC_4(VAR_11, VAR_6);
  return -VAR_2;
 } else if (VAR_14 > VAR_5) {
  FUNC_4(VAR_11, VAR_3);
  return -VAR_2;
 }
 if (!FUNC_0(VAR_13)) {
  FUNC_4(VAR_11, VAR_0);
  return -VAR_2;
 }
 return 0;
}
