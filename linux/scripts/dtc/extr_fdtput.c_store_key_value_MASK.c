
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const*) ;
 int FUNC_1 (void*,int,char const*,char const*,int) ;
 int FUNC_2 (char const*,int,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char *VAR_1,
  const char *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (VAR_5 < 0) {
  FUNC_2(VAR_1, -1, VAR_5);
  return -1;
 }

 VAR_6 = FUNC_1(VAR_0, VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_2, -1, VAR_6);
  return -1;
 }
 return 0;
}
