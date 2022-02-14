
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int ut16 ;
typedef int RCore ;
typedef int RBinJavaObj ;


 int FUNC_0 (int *,int *,int ,int ,int *,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2 (RCore *VAR_0, RBinJavaObj *VAR_1, const char *VAR_2, ut16 VAR_3, ut64 VAR_4) {
 int VAR_5 = 0;
 ut32 VAR_6 = VAR_2 && *VAR_2 ? FUNC_1 (VAR_2) : 0;
 if (VAR_6 > 0 && VAR_2 && *VAR_2 == '"') {
  VAR_2++;
  VAR_6 = VAR_2 && *VAR_2 ? FUNC_1 (VAR_2) : 0;
 }
 if (VAR_2 && VAR_6 > 0) {
  VAR_5 = FUNC_0 (VAR_0, VAR_1, VAR_3, VAR_4, (ut8 *) VAR_2, VAR_6);
 }
 return VAR_5;
}
