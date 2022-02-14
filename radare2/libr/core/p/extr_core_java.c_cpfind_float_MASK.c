
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RList ;
typedef int RCore ;
typedef int RBinJavaObj ;


 int VAR_0 ;
 double FUNC_0 (char const*) ;
 int * FUNC_1 (int *,int const*,int,int ) ;
 int * FUNC_2 () ;

__attribute__((used)) static RList * FUNC_3 (RCore *VAR_1, RBinJavaObj *VAR_2, const char *VAR_3) {
 float VAR_4 = VAR_3 && *VAR_3 ? FUNC_0 (VAR_3) : 0.0;
 if (VAR_4 == 0.0 && !(VAR_3 && VAR_3[0] == '0' && VAR_3[1] == '.' && VAR_3[2] == '0')) {
  return FUNC_2 ();
 }
 return FUNC_1 ( VAR_2, (const ut8 *) &VAR_4, 4, VAR_0);
}
