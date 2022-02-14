
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int Sdb ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,int ) ;
 char* FUNC_2 (char*,int,char const*) ;

__attribute__((used)) static ut64 FUNC_3(Sdb *VAR_1, const char *VAR_2, int VAR_3) {
 if (!VAR_2 || !*VAR_2) {
  return VAR_0;
 }
 const char *VAR_4 = FUNC_2 ("%d.reg.read.%s", VAR_3, VAR_2);
 return FUNC_0 (((void*)0), FUNC_1 (VAR_1, VAR_4, 0));
}
