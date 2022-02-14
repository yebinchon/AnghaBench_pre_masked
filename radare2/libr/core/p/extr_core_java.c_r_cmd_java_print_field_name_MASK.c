
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut16 ;
typedef int RBinJavaObj ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4 (RBinJavaObj *VAR_0, ut16 VAR_1) {
 char * VAR_2 = FUNC_2 (VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_3 (VAR_2);
 } else {
  FUNC_0 ("Error: Field or Method @ index (%d) not found in the RBinJavaObj.\n", VAR_1);
 }
 FUNC_1 (VAR_2);
 return 1;
}
