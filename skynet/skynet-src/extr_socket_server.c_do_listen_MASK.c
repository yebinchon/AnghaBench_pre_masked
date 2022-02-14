
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int ,int*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(const char * VAR_1, int VAR_2, int VAR_3) {
 int VAR_4 = 0;
 int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_4);
 if (VAR_5 < 0) {
  return -1;
 }
 if (FUNC_2(VAR_5, VAR_3) == -1) {
  FUNC_0(VAR_5);
  return -1;
 }
 return VAR_5;
}
