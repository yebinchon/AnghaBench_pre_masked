
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut16 ;
typedef int RCore ;
typedef int RBinJavaObj ;


 int FUNC_0 (int *,int *,int ,int ,int *,int) ;
 double FUNC_1 (char const*,int *) ;

__attribute__((used)) static int FUNC_2 (RCore *VAR_0, RBinJavaObj *VAR_1, const char *VAR_2, ut16 VAR_3, ut64 VAR_4) {
 double VAR_5 = VAR_2 && *VAR_2 ? FUNC_1 (VAR_2, ((void*)0)) : 0.0;
 int VAR_6 = 0;
 VAR_6 = FUNC_0 (VAR_0, VAR_1, VAR_3, VAR_4, (ut8 *) &VAR_5, 8);
 return VAR_6;
}
