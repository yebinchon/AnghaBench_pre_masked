
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int RNum ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,int,int,int*,int *) ;

__attribute__((used)) static int FUNC_3(RNum *VAR_0, ut8 *VAR_1, int VAR_2, const char *VAR_3) {
 int VAR_4 = 0, VAR_5 = FUNC_1 (VAR_3);
 ut64 VAR_6;

 if (VAR_3[0] == '*' && VAR_5 >= 4) {
  int VAR_7 = (int)FUNC_0 (VAR_0, VAR_3 + 1);
  (void)FUNC_2 (VAR_1 + VAR_7, 999, VAR_2, &VAR_6, ((void*)0));
  return VAR_6;
 } else {

  VAR_4 = FUNC_0 (VAR_0, VAR_3);
 }
 return VAR_4;
}
