
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RList ;
typedef int RCore ;
typedef int RBinJavaObj ;


 int VAR_0 ;
 int * FUNC_0 (int *,int const*,int,int ) ;
 int * FUNC_1 () ;
 double FUNC_2 (char const*,int *) ;

__attribute__((used)) static RList * FUNC_3 (RCore *VAR_1, RBinJavaObj *VAR_2, const char *VAR_3) {
 double VAR_4 = VAR_3 && *VAR_3 ? FUNC_2 (VAR_3, ((void*)0)) : 0.0;
 if (VAR_4 == 0.0 && !(VAR_3 && VAR_3[0] == '0' && VAR_3[1] == '.' && VAR_3[2] == '0')) {
  return FUNC_1 ();
 }
 return FUNC_0 ( VAR_2, (const ut8 *) &VAR_4, 8, VAR_0);
}
