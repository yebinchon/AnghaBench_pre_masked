
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RBinElfSection ;
typedef int ELFOBJ ;


 int * FUNC_0 (int *,char const*) ;

__attribute__((used)) static RBinElfSection *FUNC_1(ELFOBJ *VAR_0, const char **VAR_1) {
 RBinElfSection *VAR_2 = ((void*)0);
 int VAR_3 = 0;
 while (!VAR_2 && VAR_1[VAR_3]) {
  VAR_2 = FUNC_0 (VAR_0, VAR_1[VAR_3++]);
 }
 return VAR_2;
}
